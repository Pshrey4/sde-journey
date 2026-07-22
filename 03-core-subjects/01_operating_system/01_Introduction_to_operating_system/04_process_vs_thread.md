# ⚙️ Process vs Thread

## 📖 Definition

Processes and threads are the two fundamental execution units used by an operating system to perform multiple tasks efficiently.

- A **Process** is an independent program in execution with its own memory space and resources.
- A **Thread** is the smallest unit of execution within a process. Multiple threads share the same process resources but execute independently.

> **One-line Interview Definition:**
>
> **A process is an independent executing program, whereas a thread is a lightweight execution unit within a process that shares its resources.**

---

# 🏗️ Process

## 📖 Definition

A **Process** is a program that is currently executing. It has its own independent memory space, system resources, and execution context.

### Process Structure

```text
                Process
     +---------------------------+
     |   Process Control Block   |
     +---------------------------+
     |      Code (Text)          |
     +---------------------------+
     |     Global / Data         |
     +---------------------------+
     |          Heap             |
     +---------------------------+
     |         Stack             |
     +---------------------------+
```

---

## 📌 Properties of a Process

- Each process has a unique **Process ID (PID)**.
- Owns its own **address space**.
- Has separate code, data, heap, and stack.
- Scheduled independently by the Operating System.
- Communicates using **Inter-Process Communication (IPC)**.
- Moves through different process states.

### Process States

```text
          New
           │
           ▼
         Ready
           │
           ▼
        Running
       ↙       ↘
Waiting     Terminated
```

---

# 🧵 Thread

## 📖 Definition

A **Thread** is the smallest unit of execution inside a process.

Multiple threads belong to the same process and share its memory and resources.

---

## Thread Structure

```text
             Process

      Shared Resources
+--------------------------------+
| Code | Data | Heap | Files     |
+--------------------------------+
        │
 ┌──────┼──────────┐
 │      │          │
 ▼      ▼          ▼
Thread1 Thread2  Thread3

Each Thread Has:
• Program Counter
• Registers
• Stack
```

---

## 📌 Properties of a Thread

- Each thread has a unique **Thread ID (TID)**.
- Shares memory with other threads of the same process.
- Has its own stack and registers.
- Faster to create and terminate.
- Supports concurrent execution.
- Can be independently scheduled by the CPU.

### Thread States

```text
          New
           │
           ▼
       Runnable
           │
           ▼
        Running
       ↙       ↘
Waiting    Terminated
```

---

# 🤝 Similarities Between Process and Thread

- Both are units of execution.
- Both are scheduled by the Operating System.
- Both have their own execution context.
- Both maintain their own Program Counter and CPU registers.
- Both have their own stack.
- Both can create child entities.
- Both release allocated resources when execution finishes.

---

# 📊 Process vs Thread

| Feature | Process | Thread |
|----------|----------|---------|
| Definition | Independent program in execution | Smallest unit of execution inside a process |
| Memory | Own address space | Shares process memory |
| Resource Sharing | Does not share resources | Shares code, data, heap, and files |
| Creation Time | Slow | Fast |
| Termination Time | Slow | Fast |
| Context Switching | Expensive | Faster |
| Communication | IPC required | Direct memory sharing |
| Weight | Heavyweight | Lightweight |
| Scheduling | Independent | Scheduled within a process |
| Blocking | One process blocking doesn't affect others | One user-level thread may block other threads |
| System Calls | Requires OS support | Often created using thread libraries/APIs |
| Control Block | Process Control Block (PCB) | Thread Control Block (TCB) |
| Parallelism | Multiple processes | Multiple threads inside one process |

---

# 🔍 PCB vs TCB

| PCB (Process Control Block) | TCB (Thread Control Block) |
|------------------------------|----------------------------|
| Stores process information | Stores thread information |
| Contains PID | Contains TID |
| Stores memory information | Stores thread state |
| Stores open files | Stores CPU registers |
| Stores scheduling information | Stores stack pointer |

---

# 🖥️ Real-Life Example

### Process

```text
Google Chrome

├── Chrome Process
├── VS Code Process
├── Spotify Process
└── Discord Process
```

Each application is a separate process.

---

### Threads

```text
Google Chrome Process

├── UI Thread
├── Rendering Thread
├── Network Thread
├── JavaScript Thread
└── GPU Thread
```

All threads share the same memory of the Chrome process.

---

# 🎯 Advantages of Processes

- Better security
- Fault isolation
- Independent execution
- More reliable

---

# 🎯 Advantages of Threads

- Faster execution
- Better responsiveness
- Lower memory usage
- Easy communication
- Efficient CPU utilization

---

# 🎯 Interview Questions

### Q1. What is the main difference between a Process and a Thread?

A **Process** has its own memory space, whereas a **Thread** shares the memory of its parent process.

---

### Q2. Why are Threads called Lightweight Processes?

Because they share the resources of their parent process and require less memory and overhead than processes.

---

### Q3. Which is faster: Process creation or Thread creation?

**Thread creation** is much faster because no separate address space needs to be created.

---

### Q4. Why is communication between Threads faster?

Threads share the same memory, so they do not require Inter-Process Communication (IPC).

---

### Q5. What resources are shared among Threads?

- Code Segment
- Data Segment
- Heap Memory
- Open Files

Each thread has its own:

- Stack
- Registers
- Program Counter

---

# 📝 Key Points (30-Second Revision)

- ✅ **Process** = Independent program in execution.
- ✅ **Thread** = Smallest execution unit inside a process.
- ✅ Processes have **separate memory**, threads **share memory**.
- ✅ Processes are **Heavyweight**, threads are **Lightweight**.
- ✅ Process creation and context switching are **slower**.
- ✅ Thread creation and switching are **faster**.
- ✅ Processes communicate using **IPC**.
- ✅ Threads communicate through **shared memory**.
- ✅ Each process has a **PCB**, each thread has a **TCB**.
- ✅ Threads share **Code, Data, Heap, and Files**, but each thread has its own **Stack, Registers, and Program Counter**.
- ✅ Threads improve **responsiveness**, **CPU utilization**, and **application performance**.