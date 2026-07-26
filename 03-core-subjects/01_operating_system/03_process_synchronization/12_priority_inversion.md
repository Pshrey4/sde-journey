# 🔄 Priority Inversion

> 💡 **Quick Definition**
>
> **Priority Inversion** is a scheduling problem where a **high-priority process or thread is forced to wait for a lower-priority process** because the lower-priority process is holding a shared resource (such as a mutex or lock).

Although synchronization mechanisms like **mutexes** and **semaphores** solve race conditions, they can introduce **priority inversion**, which is a common interview topic and an important concept in real-time operating systems.

---

# 🤔 Why Does Priority Inversion Occur?

Priority inversion occurs when multiple processes of different priorities compete for the same shared resource.

Consider three processes:

- 🔴 **H** → High Priority
- 🟡 **M** → Medium Priority
- 🟢 **L** → Low Priority

Suppose the low-priority process acquires a lock before the high-priority process requests it.

Now the high-priority process must wait until the low-priority process releases the lock.

This is the beginning of **priority inversion**.

---

# ⚙️ How Does Priority Inversion Happen?

The sequence of events is as follows:

1. 🟢 Low-priority process **L** acquires a lock and enters the critical section.
2. 🔴 High-priority process **H** becomes ready and needs the same lock.
3. Since **L** already owns the lock, **H** is blocked.
4. 🟡 Medium-priority process **M** becomes ready.
5. Because **M** has a higher priority than **L**, the scheduler preempts **L**.
6. While **M** is running, **L** cannot continue and therefore cannot release the lock.
7. Since **H** is waiting for the lock held by **L**, it also remains blocked.

As a result, the **medium-priority process indirectly blocks the highest-priority process**.

This is called **Priority Inversion**.

---

# 📊 Visualization

```text
Priority

High    H  ❌ Waiting for Lock
        │
Medium  M  ✅ Running
        │
Low     L  🔒 Holds Lock
```

Although **H** has the highest priority, **M** runs first because **L** cannot release the lock.

The effective execution order becomes:

```text
Expected:
H → M → L

Actual:
M → L → H
```

The priority order has been **inverted**.

---

# 🏦 Example

Suppose three tasks are running in a banking system.

- 🟢 **L** updates account records.
- 🟡 **M** generates monthly reports.
- 🔴 **H** processes an urgent transaction.

Initially:

- **L** acquires a mutex protecting the account database.

Before **L** finishes:

- **H** arrives and needs the same mutex.
- **H** becomes blocked.

Now:

- **M** becomes ready.
- Since **M** has higher priority than **L**, the CPU schedules **M**.

While **M** executes:

- **L** cannot release the mutex.
- **H** continues waiting.

Thus, an urgent transaction (**H**) is delayed because of an unrelated medium-priority task (**M**).

---

# 📌 Causes of Priority Inversion

Priority inversion typically occurs due to the following sequence:

- A low-priority process acquires a shared resource.
- A high-priority process requests the same resource.
- The high-priority process becomes blocked.
- A medium-priority process that does **not** require the resource preempts the low-priority process.
- The low-priority process cannot release the resource.
- The high-priority process remains blocked.

---

# 📚 Types of Priority Inversion

Priority inversion is generally classified into two types:

1. Bounded Priority Inversion
2. Unbounded Priority Inversion

---

# ✅ 1. Bounded Priority Inversion

Bounded priority inversion occurs when the delay experienced by the high-priority process is **limited and predictable**.

The high-priority process waits only until:

- the low-priority process finishes its critical section, and
- any currently executing medium-priority process completes.

The maximum waiting time can therefore be estimated.

### Sequence

```text
L acquires Lock
        │
        ▼
H requests Lock
        │
        ▼
H waits
        │
        ▼
M executes
        │
        ▼
L resumes
        │
        ▼
L releases Lock
        │
        ▼
H executes
```

### Characteristics

- Waiting time is predictable.
- Delay is finite.
- Common in controlled scheduling environments.

---

# ❌ 2. Unbounded Priority Inversion

Unbounded priority inversion occurs when the waiting time of the high-priority process becomes **unpredictable or potentially indefinite**.

Multiple medium-priority processes may continuously preempt the low-priority process, preventing it from releasing the shared resource.

As long as the low-priority process cannot run:

- the lock is never released.
- the high-priority process cannot proceed.

In real-time systems, this may even trigger watchdog timers or system failures.

### Sequence

```text
L acquires Lock
        │
        ▼
H requests Lock
        │
        ▼
H waits
        │
        ▼
M1 runs
        │
        ▼
M2 runs
        │
        ▼
M3 runs
        │
        ▼
...
        │
        ▼
L still cannot release Lock
        │
        ▼
H keeps waiting
```

### Characteristics

- Waiting time is unpredictable.
- Delay may become extremely long.
- Dangerous for real-time systems.

---

# ⚖️ Bounded vs Unbounded Priority Inversion

| Feature | Bounded | Unbounded |
|----------|----------|-----------|
| Waiting Time | Predictable | Unpredictable |
| Maximum Delay | Limited | Potentially indefinite |
| System Reliability | Better | Poor |
| Suitable for Real-Time Systems | Yes | No |

---

# 🛠️ Solutions to Priority Inversion

Several techniques are used to minimize or eliminate priority inversion.

---

## 🥇 1. Priority Inheritance Protocol

This is the **most common solution**.

If a low-priority process holds a resource needed by a higher-priority process, it **temporarily inherits the higher priority**.

As a result:

- Medium-priority processes can no longer preempt it.
- The low-priority process quickly finishes its critical section.
- The resource is released sooner.
- The inherited priority is removed after the lock is released.

```text
Before

H (Waiting)

M (Running)

L (Holding Lock)

────────────────────────

After Priority Inheritance

L becomes High Priority

L finishes quickly

Lock Released

H Executes
```

> 💡 **Remember**
>
> Priority inheritance does **not permanently change priorities**. The priority boost exists only while the shared resource is held.

---

## 🥈 2. Priority Ceiling Protocol

In this protocol:

- Every shared resource is assigned a **priority ceiling**.
- When a process acquires the resource, its priority is immediately raised to the ceiling priority.
- Lower-priority processes cannot interfere while the resource is held.

This prevents priority inversion before it occurs.

---

## 🥉 3. Avoid Blocking

Another approach is to reduce or eliminate blocking altogether.

This can be achieved by:

- Using lock-free algorithms.
- Using wait-free algorithms.
- Reducing shared resources.
- Minimizing the time spent inside critical sections.

Less blocking means fewer opportunities for priority inversion.

---

# 🌍 Real-World Example

Imagine a hospital.

- 👩‍⚕️ Senior Surgeon (**High Priority**)
- 🧑‍⚕️ Resident Doctor (**Medium Priority**)
- 🧹 Cleaning Staff (**Low Priority**)

The cleaning staff enters the operating room first.

The senior surgeon arrives and must wait because the room is occupied.

Meanwhile, the resident doctor begins another task that prevents the cleaning staff from finishing quickly.

As a result, the senior surgeon waits even though they have the highest priority.

This is a real-world analogy for **priority inversion**.

---

# 🎯 Interview Questions

### Q1. What is Priority Inversion?

Priority inversion occurs when a high-priority process waits for a lower-priority process because the lower-priority process holds a required shared resource.

---

### Q2. Why is a medium-priority process involved?

The medium-priority process preempts the low-priority process, delaying the release of the shared resource and indirectly blocking the high-priority process.

---

### Q3. Why is Priority Inversion dangerous?

It causes unpredictable delays and can violate timing constraints in real-time systems.

---

### Q4. What is Priority Inheritance?

Priority inheritance temporarily raises the priority of the low-priority process holding a shared resource so it can finish quickly and release the resource.

---

### Q5. What is Priority Ceiling Protocol?

It assigns each shared resource a maximum priority. Processes holding that resource temporarily execute at the ceiling priority, preventing interference from medium-priority processes.

---

### Q6. Which synchronization primitives may suffer from Priority Inversion?

- Mutexes
- Binary Semaphores
- Locks

Any synchronization primitive that blocks threads can potentially experience priority inversion.

---

# 🧠 Memory Trick

> 🚦 **Think of a Traffic Jam**
>
> - 🟢 Low-priority car blocks a narrow bridge.
> - 🔴 Ambulance (high priority) reaches the bridge but cannot cross.
> - 🟡 Regular traffic keeps entering the road, preventing the low-priority car from clearing the bridge.
>
> The ambulance waits, even though it has the highest priority.
>
> That's **Priority Inversion**.

---

# 📝 Cheat Sheet

| 📌 Remember | ✔️ |
|-------------|----|
| Definition | High-priority process waits for a lower-priority process |
| Root Cause | Shared resource held by low-priority process |
| Hidden Culprit | Medium-priority process |
| Types | Bounded, Unbounded |
| Most Common Solution | Priority Inheritance |
| Other Solutions | Priority Ceiling, Lock-Free Algorithms |
| Common Interview Topic | Real-Time Operating Systems |
