# 🔒 Mutex (Mutual Exclusion)

## What is a Mutex?

A **Mutex (Mutual Exclusion)** is a synchronization primitive that ensures **only one thread or process can access a shared resource at a time**. It acts like a lock—before entering the critical section, a thread acquires the mutex, and after completing its work, it releases the mutex.

Unlike semaphores, a mutex has the concept of **ownership**. The thread that locks the mutex becomes its owner, and **only that thread is allowed to unlock it**.

---

## Why Do We Need a Mutex?

A binary semaphore can also provide mutual exclusion, but it does not enforce ownership. Any thread can perform a `signal()` operation, even if it never acquired the semaphore. This can lead to programming errors where one thread accidentally releases a lock held by another.

A mutex eliminates this problem by ensuring that only the owner can release the lock, making it a safer choice for protecting shared resources.

---

## Characteristics of a Mutex

- Allows only one thread to access a critical section at a time.
- Has only two states: **Locked** and **Unlocked**.
- Enforces ownership.
- Waiting threads are usually blocked instead of continuously checking the lock.
- Primarily used to protect shared resources from race conditions.

---

## How Does a Mutex Work?

Initially, the mutex is in the **Unlocked** state.

1. A thread requests the mutex using **lock()**.
2. If the mutex is available, the thread acquires it and enters the critical section.
3. If the mutex is already locked, the requesting thread is blocked and placed in a waiting queue.
4. After completing the critical section, the owner releases the mutex using **unlock()**.
5. The operating system wakes one waiting thread, which acquires the mutex and becomes the new owner.

---

## Working of a Mutex

```mermaid
flowchart LR
    A["Unlocked"]
    B["Lock Requested"]
    C["Locked"]
    D["Critical Section"]
    E["Unlock"]
    F["Next Waiting Thread"]

    A --> B
    B --> C
    C --> D
    D --> E
    E --> F
```

---

## Lock() Operation

The `lock()` operation attempts to acquire the mutex.

- If the mutex is unlocked, the calling thread becomes the owner and enters the critical section.
- If the mutex is already locked, the thread is blocked until the mutex becomes available.

---

## Unlock() Operation

The `unlock()` operation releases the mutex after the critical section has been executed.

Only the thread that owns the mutex can perform this operation. Once unlocked, one waiting thread is allowed to acquire the mutex.

---

## Ownership

Ownership is the defining feature of a mutex.

Suppose Thread A locks the mutex.

```text
Thread A
   │
   └── lock()
```

Now Thread B attempts to unlock it.

```text
Thread B
   │
   └── unlock() ❌ Not Allowed
```

The operating system rejects this request because Thread B is not the owner.

---

## Example

Consider two threads incrementing a shared counter.

Without synchronization:

```text
Thread A -> Read Counter = 5
Thread B -> Read Counter = 5

Thread A -> Counter = 6
Thread B -> Counter = 6
```

Expected Counter = **7**

Actual Counter = **6**

This is a **race condition**.

Using a mutex:

```text
Thread A
Lock
Increment Counter
Unlock

↓

Thread B
Lock
Increment Counter
Unlock
```

Now only one thread updates the counter at a time, producing the correct result.

---

## Blocking vs Busy Waiting

When a thread cannot acquire a mutex, it is generally **blocked** by the operating system rather than repeatedly checking the lock.

| Busy Waiting | Blocking |
|--------------|----------|
| Continuously checks the lock | Thread is put to sleep |
| Wastes CPU cycles | CPU can execute other threads |
| Less efficient | More efficient |

---

## Mutex vs Binary Semaphore

| Feature | Mutex | Binary Semaphore |
|---------|-------|------------------|
| Ownership | ✅ Yes | ❌ No |
| Maximum Value | Locked / Unlocked | 0 or 1 |
| Who Can Release? | Only Owner | Any Thread |
| Purpose | Mutual Exclusion | Synchronization and Mutual Exclusion |
| Safer for Shared Data | ✅ Yes | ❌ No |

---

## Advantages

- Simple to use for protecting shared resources.
- Prevents race conditions.
- Ownership prevents accidental unlocking.
- Efficient because waiting threads are blocked.
- Widely supported by operating systems and programming languages.

---

## Disadvantages

- Incorrect usage can lead to deadlocks.
- Forgetting to unlock blocks other threads indefinitely.
- Protects only one shared resource at a time.
- Does not support counting multiple resources like counting semaphores.

---

## Common Mistakes

### Forgetting to Unlock

```text
Lock

Critical Section

Return

Unlock never executed
```

Other threads remain blocked forever.

---

### Unlocking Without Ownership

```text
Thread A -> Lock

Thread B -> Unlock ❌
```

This operation is not allowed.

---

### Holding the Mutex Too Long

Keeping a mutex locked for a long time increases waiting time for other threads and reduces concurrency.

---

## Interview Questions

### What is a mutex?

A mutex is a synchronization primitive that allows only one thread to access a shared resource at a time while enforcing ownership.

---

### Why is a mutex safer than a binary semaphore?

Because only the thread that acquires the mutex can release it.

---

### Can another thread unlock a mutex?

No. Only the owner of the mutex can unlock it.

---

### Does a mutex prevent race conditions?

Yes. By allowing only one thread to execute the critical section at a time.

---

### When should you use a mutex instead of a semaphore?

Use a mutex when the goal is to protect a shared resource and ownership of the lock is required.

---

## 30-Second Revision

- A **Mutex (Mutual Exclusion)** protects shared resources.
- Only one thread can own a mutex at a time.
- Only the owner can unlock it.
- Waiting threads are blocked until the mutex becomes available.
- Mutexes prevent race conditions and are safer than binary semaphores because they enforce ownership.
