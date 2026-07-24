# Computer Fundamentals

Computer fundamentals provide the foundation for understanding how programs are executed inside a computer. Before learning any programming language, it is important to understand how a computer stores data, executes instructions, and interacts with hardware. These concepts will help you understand not only **how to write programs**, but also **why programs work the way they do**.

---

# How a Computer Works

A computer is an electronic machine that accepts **input**, processes it according to a set of **instructions**, stores data when required, and produces the desired **output**.

Every computer, regardless of its size or operating system, consists of five fundamental components:

- **CPU (Central Processing Unit)**
- **Main Memory (RAM)**
- **Secondary Storage (Hard Disk / SSD)**
- **Input Devices**
- **Output Devices**

These components work together to execute every program on your computer.

```text
                     +---------------------+
                     |         CPU         |
                     |---------------------|
                     |  ALU  | Control Unit|
                     +---------------------+
                              |
                              |
          +-------------------+-------------------+
          |                                       |
          |                                       |
+----------------------+              +----------------------+
|    Main Memory       |              | Secondary Storage    |
|       (RAM)          |              |   Hard Disk / SSD    |
+----------------------+              +----------------------+
          |                                       |
          |                                       |
    +-----------+                         +-------------+
    |  Input    |                         |   Output    |
    | Devices   |                         |  Devices    |
    +-----------+                         +-------------+
```

---

# Components of a Computer

## 1. Central Processing Unit (CPU)

The **Central Processing Unit (CPU)** is often called the **brain of the computer** because it executes every instruction in a program.

Whenever a program runs, the CPU continuously fetches instructions from memory, processes them, and produces the required results.

Modern processors such as **Intel Core i3, i5, i7, AMD Ryzen**, etc., are examples of CPUs.

The CPU mainly consists of two important units:

- **Arithmetic Logic Unit (ALU)**
- **Control Unit (CU)**

---

## Arithmetic Logic Unit (ALU)

The **Arithmetic Logic Unit (ALU)** performs all mathematical and logical operations.

### Arithmetic Operations

- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Modulus (`%`)

### Logical Operations

- AND
- OR
- NOT

### Comparison Operations

- Less than (`<`)
- Greater than (`>`)
- Equal to (`==`)
- Less than or equal to (`<=`)
- Greater than or equal to (`>=`)

> **Note:** Every complex calculation performed by a computer is ultimately broken down into these basic operations.

---

## Control Unit (CU)

The **Control Unit (CU)** coordinates and manages all the components of a computer.

Its responsibilities include:

- Fetching instructions from memory.
- Controlling the execution of instructions.
- Coordinating communication between the CPU, memory, and input/output devices.
- Managing the flow of data throughout the system.

Unlike the ALU, the Control Unit **does not perform calculations**. Its primary job is to direct the operation of the entire computer.

---

# Main Memory (RAM)

**Main Memory**, commonly known as **RAM (Random Access Memory)**, is the computer's temporary working area.

Whenever a program needs to be executed, it is first loaded from the hard disk into RAM. The CPU can only execute instructions that are present in RAM.

### Characteristics

- Temporary (Volatile) memory.
- Fast access speed.
- Stores currently running programs and their data.
- Contents are erased when power is turned off.

---

# Secondary Storage (Hard Disk / SSD)

Secondary storage is used to permanently store programs and data.

Unlike RAM, the data stored here remains even after the computer is switched off.

The storage generally contains two types of files:

| Program Files | Data Files |
|--------------|------------|
| Executable applications like Chrome, VS Code, Notepad | Documents, Images, Videos, PDFs, Music, etc. |

For example:

- `notepad.exe` → Program File
- `notes.txt` → Data File

---

# Program Execution

A program stored on the hard disk **cannot be executed directly**.

Before execution, it must be copied into RAM.

The CPU then fetches and executes the instructions one by one.

```text
            Program Stored
          Hard Disk / SSD
                 │
                 │ Load
                 ▼
        +------------------+
        |       RAM        |
        +------------------+
                 │
                 │ Fetch Instructions
                 ▼
        +------------------+
        |       CPU        |
        +------------------+
                 │
                 ▼
         Execute Instructions
```

> **Important:** The CPU never executes programs directly from the hard disk. Programs must first be loaded into RAM.

---

# Input Devices

Input devices allow users to provide data or commands to the computer.

Common examples include:

- Keyboard
- Mouse
- Scanner
- Microphone
- Touchscreen
- Stylus

The information entered through an input device is temporarily stored before being accessed by a program.

---

# Output Devices

Output devices present the processed information to the user.

Examples include:

- Monitor
- Printer
- Speakers
- Projector

Programs send their output to these devices through the operating system.

---

# Input and Output Buffers

Input and output devices maintain their own temporary memory areas called **buffers**.

## Input Buffer

An **input buffer** temporarily stores incoming data before the running program reads it.

For example:

```text
Keyboard
    │
    ▼
Input Buffer
    │
    ▼
Running Program
```

When you press a key, it is first stored in the input buffer before the program receives it.

---

## Output Buffer

An **output buffer** temporarily stores data produced by a program before it is displayed on the output device.

```text
Running Program
       │
       ▼
Output Buffer
       │
       ▼
Monitor / Printer
```

Instead of directly communicating with hardware, programs write data into the output buffer, and the operating system handles displaying or printing the information.

---

# How All Components Work Together

The execution of a program follows these steps:

1. The program is stored permanently on the hard disk.
2. When the user launches the program, it is copied into RAM.
3. The CPU fetches instructions from RAM.
4. The CPU executes each instruction one at a time.
5. Input devices provide data to the program.
6. Output devices display the results generated by the program.

```text
                User
                  │
                  ▼
          Launch Program
                  │
                  ▼
           Hard Disk / SSD
                  │
             Load Program
                  ▼
                 RAM
                  │
        Fetch Instructions
                  ▼
                 CPU
                  │
        Process Instructions
          │               │
          ▼               ▼
 Input Devices      Output Devices
```

---

# Binary Representation

Computers are electronic devices that operate using electrical signals.

An electrical signal has only two stable states:

- **Low Voltage**
- **High Voltage**

These two states are represented as:

| Voltage | Binary Value |
|----------|--------------|
| Low Voltage | 0 |
| High Voltage | 1 |

Since only two states exist, computers naturally use the **Binary Number System**.

A binary digit is called a **bit**.

```text
0 → OFF → Low Voltage
1 → ON  → High Voltage
```

Eight bits together form one **Byte**.

```text
1 Bit
 ↓
0

8 Bits
 ↓
10110110

=
1 Byte
```

Every instruction, number, character, image, and piece of data inside a computer is ultimately represented as a sequence of **0s and 1s**.

The CPU understands only these binary patterns and executes instructions based on them.  

# Number Systems

A **number system** is a method of representing numbers using a specific set of symbols (digits). While humans naturally use the **Decimal Number System**, computers internally use the **Binary Number System** because electronic circuits can easily represent only two states: **ON** and **OFF**.

Understanding number systems is essential because every piece of information inside a computer—whether it is a number, character, image, or instruction—is ultimately stored in binary form.

---

# Types of Number Systems

The four most commonly used number systems in computing are:

| Number System | Base | Symbols Used |
|--------------|:----:|--------------|
| Decimal | 10 | 0 – 9 |
| Binary | 2 | 0, 1 |
| Octal | 8 | 0 – 7 |
| Hexadecimal | 16 | 0 – 9, A – F |

---

# Decimal Number System (Base 10)

The **Decimal Number System** is the number system used in everyday life.

It uses **10 unique digits**:

```text
0 1 2 3 4 5 6 7 8 9
```

Once all ten digits are exhausted, numbers are formed by combining these digits.

For example:

```text
8
9
10
11
12
...
19
20
21
...
```

The base of the decimal system is **10**, meaning that every position in a number represents a power of 10.

Example:

```text
582₁₀

= 5 × 10² + 8 × 10¹ + 2 × 10⁰
= 500 + 80 + 2
= 582
```

---

# Binary Number System (Base 2)

The **Binary Number System** uses only **two digits**:

```text
0
1
```

Since there are only two symbols, the next number after **1** is **10**.

> **Important:** In binary, `10` is **not read as "ten"**. It is read as **"one zero"**.

Binary counting:

| Decimal | Binary |
|---------:|:------:|
|0|0|
|1|1|
|2|10|
|3|11|
|4|100|
|5|101|
|6|110|
|7|111|
|8|1000|
|9|1001|
|10|1010|
|11|1011|
|12|1100|
|13|1101|
|14|1110|
|15|1111|
|16|10000|

> **Note:** Just as decimal uses combinations after 9, binary uses combinations after 1.

---

# Octal Number System (Base 8)

The **Octal Number System** uses **8 symbols**.

```text
0 1 2 3 4 5 6 7
```

After **7**, the next number becomes:

```text
10₈
```

Octal was introduced because long binary numbers are difficult for humans to read and write.

Instead of writing:

```text
111101101010
```

it can be grouped into sets of **3 bits** and represented in octal.

Example:

```text
111 101 101 010

↓

7   5   5   2

↓

7552₈
```

This makes binary numbers shorter and easier to understand.

---

# Hexadecimal Number System (Base 16)

The **Hexadecimal Number System** uses **16 symbols**.

The first ten symbols are digits, followed by six alphabets.

| Decimal | Hexadecimal |
|---------:|:-----------:|
|0|0|
|1|1|
|2|2|
|3|3|
|4|4|
|5|5|
|6|6|
|7|7|
|8|8|
|9|9|
|10|A|
|11|B|
|12|C|
|13|D|
|14|E|
|15|F|

After **F**, counting continues as:

```text
10₁₆
11₁₆
12₁₆
...
```

Hexadecimal is widely used because **one hexadecimal digit represents exactly four binary bits**.

Example:

```text
11111111₂

↓

FF₁₆
```

Compared to binary, hexadecimal provides a much shorter and more readable representation.

---

# Why Do We Need Octal and Hexadecimal?

Binary numbers become very long as values increase.

For example:

```text
Decimal : 255

Binary  : 11111111

Hex     : FF
```

Clearly, hexadecimal is much easier to read and write.

Similarly,

```text
Binary

1011100101011101
```

is much easier to represent as

```text
Hexadecimal

B95D
```

Therefore, programmers often use hexadecimal when dealing with:

- Memory addresses
- Machine code
- Colors (HTML/CSS)
- Debugging
- Low-level programming

---

# Converting Decimal to Binary

The most common method is **successive division by 2**.

### Steps

1. Divide the decimal number by 2.
2. Record the remainder.
3. Continue dividing the quotient by 2 until the quotient becomes 0.
4. Read the remainders from **bottom to top**.

### Example

Convert **25₁₀** to binary.

| Division | Quotient | Remainder |
|-----------|---------:|----------:|
|25 ÷ 2|12|1|
|12 ÷ 2|6|0|
|6 ÷ 2|3|0|
|3 ÷ 2|1|1|
|1 ÷ 2|0|1|

Reading the remainders from bottom to top:

```text
11001₂
```

Therefore,

```text
25₁₀ = 11001₂
```

---

# Converting Binary to Decimal

To convert binary into decimal, multiply each binary digit by the corresponding power of 2.

The powers start from **0** on the rightmost bit.

### Example

Convert

```text
11001₂
```

Arrange the powers of 2:

|Bit|1|1|0|0|1|
|---|---|---|---|---|---|
|Power|2⁴|2³|2²|2¹|2⁰|

Now calculate:

```text
= 1 × 2⁴
+ 1 × 2³
+ 0 × 2²
+ 0 × 2¹
+ 1 × 2⁰
```

```text
= 16 + 8 + 0 + 0 + 1

= 25
```

Therefore,

```text
11001₂ = 25₁₀
```

---

# Quick Reference

### Common Binary Values

| Decimal | Binary | Hex |
|---------:|:------:|:---:|
|0|0000|0|
|1|0001|1|
|2|0010|2|
|3|0011|3|
|4|0100|4|
|5|0101|5|
|6|0110|6|
|7|0111|7|
|8|1000|8|
|9|1001|9|
|10|1010|A|
|11|1011|B|
|12|1100|C|
|13|1101|D|
|14|1110|E|
|15|1111|F|

> **Tip:** Memorizing binary values from **0 to 15** makes it much easier to understand binary, octal, hexadecimal, and bit manipulation concepts later in C++.

# Programs and Programming

A computer is capable of performing millions of operations every second, but it **cannot decide what to do on its own**. Every task performed by a computer must be described through a set of instructions.

These instructions, together with the data they operate on, form a **program**.

Understanding what a program is and why programming languages exist is the first step toward learning any programming language.

---

# Why Do We Need Programs?

Computers are designed to perform **computational tasks**.

A computational task is any task that involves processing data according to a well-defined sequence of steps.

Examples include:

- Calculating the average of marks
- Searching for a student record
- Sorting numbers
- Finding the largest value
- Calculating interest
- Managing bank accounts
- Playing games

A computer can perform all these tasks **only if it is told exactly how to perform them**.

That sequence of instructions is called a **program**.

---

# Calculator vs Computer

Understanding the difference between a calculator and a computer helps explain why programming exists.

## Calculator

A calculator already knows a small set of operations.

For example,

```text
13 + 27 = 40
```

You simply enter:

```text
13
+
27
=
```

The calculator already knows how addition works.

Similarly,

```text
25 × 16

120 ÷ 8

50 − 20
```

All these operations are already built into the calculator.

---

## A More Complex Problem

Suppose we have the following numbers:

```text
10 15 8 6 9 5 12 13 11 16
```

Now we want to calculate their **average**.

Unlike addition, a calculator **does not know** what "average" means.

The user must perform the complete procedure manually.

### Step 1

Add all the numbers.

```text
10 + 15 + 8 + 6 + 9 + 5 + 12 + 13 + 11 + 16

= 105
```

### Step 2

Count the total numbers.

```text
10 numbers
```

### Step 3

Divide the sum by the count.

```text
105 / 10 = 10.5
```

The calculator simply performs the arithmetic operations.

It does **not** know the procedure for finding an average.

---

# Procedures

Every computational problem has a sequence of steps that solves it.

This sequence of steps is called a **procedure** or an **algorithm**.

For example,

### Finding the Average

```text
1. Initialize sum = 0

2. Read each number.

3. Add the number to sum.

4. Count how many numbers were entered.

5. Divide

       sum
Average = -----
        count

6. Display the result.
```

Notice that this procedure can be followed for **any list of numbers**, not just one particular example.

---

# Why Computers Need Programs

A calculator performs only the operations that were built into it by the manufacturer.

A computer, on the other hand, is a **programmable machine**.

Instead of being limited to predefined operations, we can teach the computer a completely new procedure.

For example,

- Finding averages
- Sorting numbers
- Playing chess
- Editing photos
- Browsing the internet
- Running games

The computer performs these tasks because programmers have written programs that describe **exactly how each task should be carried out**.

---

# What is a Program?

A **program** is a collection of instructions that tells a computer how to perform a particular task.

It contains two essential components:

- **Data**
- **Instructions**

---

# Data

**Data** is the information on which a program operates.

Examples:

```text
10
25
48
```

```text
"Hello"
```

```text
Student Name

Roll Number

Salary

Temperature
```

All these are examples of data.

Without data, there is nothing to process.

---

# Instructions

Instructions specify **what should be done with the data**.

Examples include:

- Add two numbers
- Multiply values
- Search an element
- Compare two values
- Sort a list
- Display the result

Instructions define the operations performed on the data.

---

# Program = Data + Instructions

A program is simply a combination of:

```text
                 Program
                    │
        ┌───────────┴───────────┐
        │                       │
      Data                Instructions
```

Both parts are equally important.

Without data:

```text
Instructions have nothing to process.
```

Without instructions:

```text
The data has no meaning.
```

A successful program always consists of both.

---

# Learning Programming

Many beginners believe that learning a programming language automatically teaches them how to solve problems.

This is a common misconception.

Programming actually involves learning **two different skills**.

## 1. Problem Solving

First, you must know **how to solve the problem**.

For example,

To calculate an average, you should already know the mathematical procedure.

Similarly,

Before writing a program to sort numbers, you should already know the sorting algorithm.

This is called **algorithmic thinking**.

---

## 2. Programming

Once the procedure is known, the next step is expressing that procedure in a programming language.

Programming is the process of converting an algorithm into instructions that a computer can execute.

> **Important:** Programming languages do not teach problem-solving. They provide a way to express an already known solution in a form that a computer understands.

---

# Language Barrier

Humans and computers communicate using completely different languages.

Humans understand **natural languages**, while computers understand **machine language**.

```text
Human
│
├── English
├── Hindi
├── Marathi
├── Japanese
└── ...

Computer
│
└── Binary (0s and 1s)
```

For example,

A person may describe an instruction as:

```text
Add these two numbers.
```

The computer cannot understand this sentence.

Instead, it understands only binary instructions.

```text
10110110...

11001001...

00101100...
```

---

# The Need for Programming Languages

Writing programs directly in machine language is extremely difficult.

Similarly, computers cannot directly understand human languages.

An intermediate language is therefore required.

```text
Natural Language
       │
       ▼
Programming Language
       │
       ▼
Machine Language
```

Programming languages bridge the communication gap between humans and computers.

They allow programmers to write readable programs, which are later translated into machine language.

---

# High-Level Programming Languages

Modern programming languages are designed to be easier for humans to read and write.

Examples include:

- C
- C++
- Java
- Python
- C#
- JavaScript
- Visual Basic

Instead of writing binary instructions, programmers write meaningful statements using these languages.

For example,

Instead of writing:

```text
101101101001010...
```

A C++ programmer writes:

```cpp
int sum = a + b;
```

The programming language later converts this into machine code.

---

# Program Translation

A program written in a high-level language **cannot be executed directly** by the CPU.

Before execution, it must be translated into machine language.

```text
High-Level Program
        │
        ▼
Compiler / Interpreter
        │
        ▼
Machine Code
        │
        ▼
CPU Execution
```

The CPU executes **only machine code**.

The process of converting a high-level program into machine code is handled by a **compiler** or an **interpreter**, which will be discussed in the next section.  

# Programming Languages

A **programming language** is a formal language used to write instructions that a computer can execute. It provides a structured way for programmers to express algorithms and solve problems without dealing directly with the computer's native binary language.

Programming languages have evolved over time to make programming easier, more readable, and more productive. This evolution can be broadly classified into three generations:

1. Machine Language
2. Assembly Language
3. High-Level Languages

---

# Machine Language (First Generation Language)

**Machine Language (1GL)** is the lowest-level programming language and the only language that a CPU can understand directly.

Every instruction is represented as a sequence of binary digits (0s and 1s).

Example:

```text
10110011
11001010
00110101
11100010
```

Each processor architecture has its own unique machine language.

For example:

- Intel x86 processors have one instruction set.
- ARM processors have another instruction set.
- RISC-V processors have their own instruction set.

A program written for one architecture generally cannot run directly on another without recompilation or translation.

---

## Characteristics

- Written entirely in binary.
- Directly understood by the CPU.
- No translation required.
- Extremely fast to execute.
- Difficult for humans to read and write.
- Highly error-prone.
- Machine dependent.

---

## Advantages

- Maximum execution speed.
- Direct control over hardware.
- No additional translation step.

---

## Disadvantages

- Very difficult to understand.
- Extremely difficult to debug.
- Programs become lengthy.
- Almost impossible to maintain.
- Not portable between different processors.

---

## Example

Instead of writing

```cpp
int sum = a + b;
```

the programmer would have to write a sequence of binary instructions such as

```text
10110110
01100001
11010111
...
```

Clearly, writing large software in machine language is impractical.

---

# Assembly Language (Second Generation Language)

Assembly Language was introduced to overcome the difficulties of programming in binary.

Instead of binary digits, symbolic names called **mnemonics** are used to represent machine instructions.

For example:

```text
ADD
SUB
MOV
MUL
DIV
CMP
JMP
```

These instructions are much easier for humans to remember than long binary sequences.

Example:

```text
MOV A, 10
MOV B, 20
ADD A, B
```

This is far more readable than writing the equivalent binary instructions.

---

## Assembler

Although assembly language is easier for humans, the CPU still understands only machine language.

An **Assembler** is a system program that converts assembly language into machine language.

```text
Assembly Program
        │
        ▼
    Assembler
        │
        ▼
 Machine Language
        │
        ▼
      CPU
```

---

## Characteristics

- Uses symbolic instruction names.
- Easier than machine language.
- Machine dependent.
- Produces efficient programs.
- Provides direct access to hardware.

---

## Advantages

- Easier to understand than binary.
- Better performance than high-level languages.
- Small memory footprint.
- Suitable for hardware programming.

---

## Disadvantages

- Still difficult to learn.
- Programs are lengthy.
- Machine dependent.
- Development time is high.
- Not suitable for large software projects.

---

# High-Level Languages (Third Generation Languages)

High-Level Languages (3GL) were developed to make programming easier and more productive.

Instead of focusing on processor instructions, programmers focus on solving problems using statements that closely resemble human language and mathematical notation.

Example:

```cpp
int sum = a + b;
```

or

```python
average = total / count
```

These statements are much easier to understand than assembly or machine language.

---

## Characteristics

- English-like syntax.
- Easier to read and write.
- Machine independent.
- Faster development.
- Easier debugging.
- Better maintainability.

---

## Advantages

- Simple to learn.
- Highly readable.
- Portable across different operating systems and processors.
- Supports structured and object-oriented programming.
- Large standard libraries.
- Increased developer productivity.

---

## Disadvantages

- Requires translation before execution.
- Slightly slower than low-level languages in certain scenarios.
- Less direct control over hardware.

However, advances in modern compilers have significantly reduced the performance gap between high-level and low-level languages.

---

# Examples of High-Level Languages

Some widely used programming languages include:

| Language | Common Applications |
|----------|---------------------|
| C | Operating Systems, Embedded Systems |
| C++ | System Software, Game Development, Competitive Programming |
| Java | Enterprise Applications, Android Development |
| Python | AI, Machine Learning, Automation, Data Science |
| JavaScript | Web Development |
| C# | Desktop Applications, Game Development (Unity) |
| Go | Cloud Computing, Backend Services |
| Rust | Systems Programming, Performance-Critical Applications |

Each language is designed with different goals, but they all follow the same basic principle: making programming easier than writing machine code.

---

# Evolution of Programming Languages

Programming languages evolved to reduce complexity and improve productivity.

```text
Machine Language
(Binary)

        │
        ▼

Assembly Language
(Mnemonics)

        │
        ▼

High-Level Languages
(C, C++, Java, Python, ...)
```

As we move upward:

- Readability increases.
- Development becomes faster.
- Programs become easier to maintain.
- Hardware dependency decreases.

However, direct hardware control also decreases.

---

# Comparison of Programming Languages

| Feature | Machine Language | Assembly Language | High-Level Language |
|---------|------------------|-------------------|---------------------|
| Representation | Binary | Mnemonics | English-like Syntax |
| Human Readability | Very Poor | Moderate | Excellent |
| Machine Dependency | Yes | Yes | Mostly No |
| Translation Required | No | Assembler | Compiler / Interpreter |
| Ease of Learning | Very Difficult | Difficult | Easy |
| Development Speed | Slow | Moderate | Fast |
| Debugging | Very Difficult | Difficult | Easy |
| Portability | No | No | Yes |
| Maintenance | Very Difficult | Difficult | Easy |

---

# Choosing the Right Language

Different applications require different programming languages.

For example:

- Operating systems are commonly written in **C** because of its low-level memory access and efficiency.
- Large-scale enterprise applications often use **Java** or **C#** because of their portability and extensive ecosystems.
- Artificial Intelligence and Machine Learning are dominated by **Python** due to its simplicity and rich collection of libraries.
- Game engines frequently use **C++** because of its high performance and direct control over system resources.

There is no universally "best" programming language. The appropriate language depends on the requirements of the application, such as performance, portability, development speed, and hardware interaction.

---

# Summary

Programming languages provide a bridge between human thinking and computer execution.

The evolution from **Machine Language** to **Assembly Language** and finally to **High-Level Languages** has made software development significantly easier, allowing programmers to build complex systems efficiently while hiding most of the underlying hardware complexity.

Although programmers work with high-level languages like **C++**, every program is eventually translated into **machine language**, because the CPU understands only binary instructions.

> **Key Takeaway:** A programming language is a tool for expressing algorithms in a form that humans can write and computers can ultimately execute.  

# Compiler and Interpreter

Programs written in high-level programming languages such as **C++**, **Java**, or **Python** cannot be executed directly by the CPU. The CPU understands only **machine language**, which consists of binary instructions (0s and 1s).

Therefore, every high-level program must first be **translated into machine language** before it can be executed. This translation is performed by either a **Compiler** or an **Interpreter**.

---

# Why Do We Need a Translator?

Consider the following C++ statement:

```cpp
int sum = a + b;
```

A programmer can easily understand this statement, but the CPU cannot.

The CPU expects instructions in binary form, such as:

```text
10110100
01001011
11010010
...
```

A translator is therefore required to convert human-readable code into machine-readable instructions.

```text
High-Level Program
        │
        ▼
 Compiler / Interpreter
        │
        ▼
 Machine Language
        │
        ▼
      CPU
```

Without this translation process, no high-level program can be executed.

---

# Source Code

The program written by a programmer is called the **Source Code**.

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";
}
```

This file is readable by humans but not by the CPU.

---

# Machine Code

After translation, the source code becomes **Machine Code**.

Machine code is a sequence of binary instructions that can be directly executed by the processor.

```text
10101101
11001010
01100101
...
```

The CPU executes only machine code.

> **Important:** Regardless of the programming language used, every program is eventually converted into machine code before execution.

---

# Compiler

A **Compiler** is a system software that translates the **entire source program** into machine code before the program is executed.

Once compilation is complete, an executable file is generated.

```text
          Source Code
               │
               ▼
          +-----------+
          | Compiler  |
          +-----------+
               │
               ▼
        Executable Program
               │
               ▼
             Execute
```

Compilation happens only once unless the source code is modified.

---

## Compilation Process

The overall compilation process consists of several stages.

```text
Source Code
     │
     ▼
Lexical Analysis
     │
     ▼
Syntax Analysis
     │
     ▼
Semantic Analysis
     │
     ▼
Code Optimization
     │
     ▼
Machine Code Generation
     │
     ▼
Executable File
```

Modern compilers perform many internal optimizations to generate efficient machine code.

---

## How a Compiler Works

Suppose a project contains three source files.

```text
main.cpp

math.cpp

student.cpp
```

The compiler translates all these files into machine code.

```text
main.cpp      ┐
math.cpp      ├──► Compiler ───► Executable File
student.cpp   ┘
```

The executable can then be run multiple times without recompiling, provided the source code remains unchanged.

---

## Advantages of a Compiler

- Faster program execution.
- Errors are detected before execution.
- Executable can be distributed without sharing source code.
- Suitable for large software projects.
- Produces optimized machine code.

---

## Disadvantages of a Compiler

- Compilation may take time for large projects.
- Any change in the source code requires recompilation.
- Compilation errors must be fixed before execution.

---

# Interpreter

An **Interpreter** translates and executes the program **one statement at a time**.

Instead of generating a separate executable file, it immediately executes each translated instruction.

```text
Source Code
      │
      ▼
+----------------+
|  Interpreter   |
+----------------+
      │
      ▼
Execute Line 1

Execute Line 2

Execute Line 3

...
```

Translation and execution happen simultaneously.

---

## How an Interpreter Works

Consider the following program.

```text
Statement 1

Statement 2

Statement 3

Statement 4
```

Execution proceeds as follows:

```text
Statement 1

↓

Translate

↓

Execute

↓

Statement 2

↓

Translate

↓

Execute

↓

Statement 3

↓

Translate

↓

Execute
```

The interpreter continues this process until the program finishes.

---

## Advantages of an Interpreter

- No separate compilation step.
- Easier to debug.
- Immediate execution.
- Better suited for scripting and rapid development.
- Faster testing during development.

---

## Disadvantages of an Interpreter

- Slower execution.
- Translation occurs every time the program runs.
- No standalone executable is generated.
- Performance is generally lower than compiled programs.

---

# Compiler vs Interpreter

| Feature | Compiler | Interpreter |
|----------|----------|-------------|
| Translation | Entire program at once | One statement at a time |
| Executable File | Yes | No |
| Execution Speed | Faster | Slower |
| Error Reporting | After compilation | During execution |
| Runtime Performance | High | Lower |
| Memory Usage | Higher | Lower |
| Suitable For | Large software | Scripting and testing |

---

# Examples

## Compiled Languages

- C
- C++
- Rust
- Go

These languages primarily use compilers.

---

## Interpreted Languages

- Python
- JavaScript
- Ruby
- PHP

These languages generally use interpreters (although modern implementations often combine interpretation with compilation techniques).

---

# Hybrid Approach

Many modern programming languages use a **hybrid execution model**, combining both compilation and interpretation.

## Java

Java programs are first compiled into **Bytecode**.

```text
Java Source Code
        │
        ▼
Java Compiler
        │
        ▼
Bytecode (.class)
        │
        ▼
Java Virtual Machine (JVM)
        │
        ▼
Machine Code
```

The Java Virtual Machine (JVM) interprets or just-in-time compiles the bytecode for the underlying operating system.

This approach allows Java programs to run on multiple platforms.

> **Write Once, Run Anywhere (WORA)** is one of Java's major advantages.

---

## Python

Python source code is compiled into **Bytecode**, which is then executed by the **Python Virtual Machine (PVM)**.

```text
Python Source Code
        │
        ▼
Python Compiler
        │
        ▼
Python Bytecode
        │
        ▼
Python Virtual Machine
        │
        ▼
Execution
```

Although Python is commonly referred to as an interpreted language, modern Python implementations internally perform a compilation step before execution.

---

# Build Process in C++

When developing a C++ program, the overall workflow is:

```text
Write Source Code (.cpp)

          │

          ▼

Compile

          │

          ▼

Executable File (.exe)

          │

          ▼

Run Program

          │

          ▼

Output
```

If the source code is modified:

```text
Modify Source Code

↓

Compile Again

↓

Run Again
```

---

# Real-World Analogy

Imagine a book written in Japanese.

### Compiler

A compiler is like translating the **entire book** into English before reading it.

Once translated, anyone can read the English version repeatedly without translating it again.

---

### Interpreter

An interpreter is like having a translator sitting beside you.

For every sentence:

- Read one sentence.
- Translate it.
- Understand it.
- Move to the next sentence.

The translation process repeats every time you read the book.

---

# Summary

High-level programs cannot be executed directly by the CPU because the processor understands only machine language.

A **Compiler** translates the entire program into machine code before execution, producing an executable file that can be run multiple times efficiently.

An **Interpreter**, on the other hand, translates and executes the program one statement at a time without generating a standalone executable.

Both approaches have their own advantages and are suited to different types of applications. Modern programming languages often combine both techniques to balance portability, development speed, and execution performance.

> **Key Takeaway:** Whether a language is compiled or interpreted, the CPU ultimately executes only **machine code**.  

# Operating System

An **Operating System (OS)** is system software that acts as an interface between the **user**, **application programs**, and the **computer hardware**.

Without an operating system, every program would have to communicate directly with hardware devices such as the CPU, memory, keyboard, monitor, and storage devices. The operating system simplifies this interaction by managing hardware resources and providing common services to all programs.

```text
                User
                  │
                  ▼
        Application Programs
                  │
                  ▼
        +--------------------+
        | Operating System   |
        +--------------------+
                  │
                  ▼
      CPU • Memory • Storage
     Keyboard • Mouse • Display
      Printer • Network • etc.
```

The operating system is one of the most important pieces of software in a computer because it controls how hardware resources are allocated and how programs are executed.

---

# Why Do We Need an Operating System?

Imagine writing a program that needs to:

- Read input from the keyboard.
- Display output on the monitor.
- Store a file on the hard disk.
- Allocate memory.
- Communicate with a printer.

If there were no operating system, every programmer would have to understand the internal working of every hardware device and write code to control them directly.

This would make software development extremely difficult and hardware-dependent.

The operating system provides a standard interface so that programs can perform these tasks without worrying about the underlying hardware implementation.

---

# Responsibilities of an Operating System

An operating system performs many important functions.

Some of its major responsibilities are:

- Process Management
- Memory Management
- File Management
- Device Management
- Input/Output Management
- Security and Protection
- User Interface
- Resource Allocation

Each of these responsibilities is explained below.

---

# Process Management

A **process** is a program that is currently being executed.

The operating system is responsible for:

- Creating new processes.
- Scheduling CPU time.
- Switching between processes.
- Terminating completed processes.

For example, you might be:

- Listening to music.
- Downloading a file.
- Browsing the web.
- Editing a document.

Although it appears that all programs are running simultaneously, the operating system rapidly switches the CPU between them, creating the illusion of parallel execution.

```text
CPU Time

Browser

↓

Music Player

↓

VS Code

↓

Browser

↓

Terminal

↓

Browser

...
```

This technique is known as **multitasking**.

---

# Memory Management

RAM is a limited resource.

The operating system manages memory by:

- Allocating memory to programs.
- Reclaiming memory after programs terminate.
- Preventing programs from interfering with each other's memory.
- Optimizing memory usage.

Example:

```text
+----------------------+
|      Operating       |
|      System          |
+----------------------+

+----------------------+
|      Browser         |
+----------------------+

+----------------------+
|      VS Code         |
+----------------------+

+----------------------+
|      Music Player    |
+----------------------+

+----------------------+
|      Free Memory     |
+----------------------+
```

Each running program receives its own memory space, ensuring stability and security.

---

# File Management

Files are stored permanently on storage devices such as hard disks or SSDs.

The operating system organizes these files into directories (folders) and provides operations such as:

- Create
- Read
- Write
- Rename
- Copy
- Move
- Delete

For example:

```text
Documents/

├── Resume.pdf

├── Notes.docx

├── Images/

└── Projects/
```

Programs do not directly access the storage hardware. Instead, they request file operations through the operating system.

---

# Device Management

Modern computers contain numerous hardware devices, including:

- Keyboard
- Mouse
- Printer
- Monitor
- Scanner
- Webcam
- Speakers
- Network Adapter

Each device has different hardware characteristics.

The operating system manages communication with these devices through **device drivers**.

```text
Application

      │

      ▼

Operating System

      │

      ▼

Device Driver

      │

      ▼

Hardware Device
```

This abstraction allows applications to work without knowing the internal details of each device.

---

# Input and Output Management

Programs frequently need to read input and produce output.

Examples include:

Input:

- Keyboard
- Mouse
- Microphone
- Scanner

Output:

- Monitor
- Printer
- Speakers

The operating system manages these operations using buffers and device drivers, ensuring efficient communication between programs and hardware.

---

# Security and Protection

Modern operating systems protect both users and applications.

Security features include:

- User authentication.
- Password protection.
- File permissions.
- Access control.
- Process isolation.
- Data encryption.

These mechanisms prevent unauthorized users or malicious programs from accessing sensitive information.

---

# User Interface

The operating system provides a way for users to interact with the computer.

There are two common types of user interfaces.

## Command Line Interface (CLI)

A CLI allows users to interact with the system by typing commands.

Example:

```bash
mkdir Projects

cd Projects

g++ main.cpp

./a.out
```

Advantages:

- Powerful
- Fast
- Low resource usage

Examples:

- Linux Terminal
- Windows Command Prompt
- PowerShell

---

## Graphical User Interface (GUI)

A GUI allows users to interact using graphical elements such as:

- Windows
- Icons
- Menus
- Buttons
- Mouse

Examples:

- Microsoft Windows
- macOS
- Ubuntu Desktop

A GUI is generally easier for beginners because it does not require memorizing commands.

---

# Resource Allocation

A computer has limited resources, including:

- CPU
- RAM
- Storage
- Network bandwidth

When multiple programs run simultaneously, the operating system decides how these resources are shared.

For example:

```text
Running Programs

──────────────

Browser

VS Code

Spotify

Chrome Downloads

Game

──────────────

Operating System

↓

Allocates CPU Time

↓

Allocates Memory

↓

Controls Disk Access

↓

Schedules Tasks
```

Efficient resource allocation ensures that all programs receive a fair share of system resources.

---

# Program Execution

When a user launches a program, several steps occur behind the scenes.

```text
1. User starts program.

↓

2. Operating System locates the executable file.

↓

3. Program is loaded from storage into RAM.

↓

4. Required resources are allocated.

↓

5. CPU begins executing instructions.

↓

6. Program interacts with devices through the OS.

↓

7. Program terminates.

↓

8. Operating System releases allocated resources.
```

The user typically sees only the application window, while the operating system performs all the necessary background operations.

---

# Examples of Operating Systems

Some widely used operating systems include:

| Operating System | Typical Usage |
|------------------|---------------|
| Windows | Personal Computers |
| Linux | Servers, Embedded Systems, Development |
| macOS | Apple Computers |
| Android | Smartphones and Tablets |
| iOS | Apple Mobile Devices |

Although these operating systems differ in design and features, they all perform the same fundamental responsibilities.

---

# Computer System Overview

The relationship between hardware, the operating system, and applications can be summarized as follows:

```text
                 User
                   │
                   ▼
        Application Programs
                   │
                   ▼
        +--------------------+
        | Operating System   |
        +--------------------+
          │      │      │
          ▼      ▼      ▼
         CPU    RAM   Storage
          │      │      │
          └──────┼──────┘
                 ▼
          Input / Output Devices
```

Every application communicates with the hardware through the operating system, making the OS the central coordinator of the entire computer system.

---

# Summary

The **Operating System** is system software responsible for managing computer hardware and providing services to application programs.

Its primary responsibilities include:

- Managing processes.
- Allocating memory.
- Organizing files.
- Controlling hardware devices.
- Handling input and output.
- Providing security.
- Offering user interfaces.
- Allocating system resources efficiently.

Without an operating system, modern computers would be extremely difficult to use, and application programs would need to control hardware directly.

> **Key Takeaway:** The operating system acts as the bridge between software and hardware, ensuring that programs execute efficiently, securely, and reliably.  

---

# Chapter Summary

Before learning C++, it is important to understand the basic working principles of a computer. Every program, regardless of the programming language used, ultimately executes on computer hardware. This chapter introduced the essential concepts that form the foundation for programming.

A computer consists of five primary components: the **Central Processing Unit (CPU)**, **Main Memory (RAM)**, **Secondary Storage**, **Input Devices**, and **Output Devices**. The CPU performs computations and controls the execution of programs, while RAM temporarily stores programs and data that are currently in use. Secondary storage, such as an HDD or SSD, provides permanent storage for programs and files.

Computers operate using the **Binary Number System** because electronic circuits can reliably represent only two states: **ON (1)** and **OFF (0)**. Other number systems, such as **Decimal**, **Octal**, and **Hexadecimal**, are commonly used to make binary data easier for humans to read and work with.

A **program** is a collection of instructions that tells a computer how to perform a task. Every program consists of **data** and **instructions**. Before writing a program, the solution to the problem is first expressed as an **algorithm** or **procedure**, which is then translated into a programming language.

Programming languages have evolved significantly over time:

- **Machine Language** consists of binary instructions understood directly by the CPU.
- **Assembly Language** introduces mnemonic instructions to improve readability.
- **High-Level Languages** such as C++, Java, and Python allow programmers to focus on solving problems instead of hardware-specific details.

Since CPUs understand only machine language, programs written in high-level languages must be translated before execution. This translation is performed by a **Compiler** or an **Interpreter**. A compiler translates the entire program before execution, whereas an interpreter translates and executes one statement at a time.

Finally, the **Operating System (OS)** acts as an intermediary between users, application programs, and computer hardware. It manages processes, memory, files, hardware devices, and system resources, enabling multiple programs to execute efficiently and securely.

Together, these concepts provide the foundation required to understand how C++ programs are compiled, executed, and managed by a computer system.

---

# Key Points

## Computer Architecture

- A computer consists of the CPU, RAM, secondary storage, input devices, and output devices.
- The CPU executes program instructions.
- RAM stores programs and data temporarily during execution.
- Secondary storage provides permanent data storage.
- Programs must be loaded from storage into RAM before execution.

---

## Binary Representation

- Computers use the binary number system because electronic circuits have two stable states.
- A **bit** is the smallest unit of data.
- Eight bits form one **byte**.
- Every number, character, image, and instruction is stored in binary.

---

## Number Systems

- Decimal uses base **10**.
- Binary uses base **2**.
- Octal uses base **8**.
- Hexadecimal uses base **16**.
- Hexadecimal provides a compact representation of binary data.
- Binary–Decimal conversions are fundamental to understanding computer systems.

---

## Programs

- A computer cannot solve problems without instructions.
- A program is a combination of **data** and **instructions**.
- Algorithms describe the logical steps required to solve a problem.
- Programming languages are used to express algorithms in a form that computers can execute.

---

## Programming Languages

- Machine Language is the native language of the CPU.
- Assembly Language uses mnemonic instructions.
- High-Level Languages improve readability, portability, and productivity.
- Every high-level program is ultimately translated into machine code.

---

## Compiler and Interpreter

- A compiler translates the entire program before execution.
- An interpreter translates and executes one statement at a time.
- Compiled programs generally execute faster.
- Interpreted programs are often easier to test and debug.
- Modern languages may use both compilation and interpretation.

---

## Operating System

- The operating system manages computer hardware.
- It controls processes, memory, files, devices, and system resources.
- It provides a user interface and ensures secure program execution.
- Applications interact with hardware through the operating system rather than communicating with hardware directly.

---

# Glossary

| Term | Definition |
|------|------------|
| Algorithm | A step-by-step procedure for solving a problem. |
| Assembly Language | A low-level programming language that uses mnemonic instructions instead of binary. |
| Binary | A base-2 number system consisting of 0s and 1s. |
| Bit | The smallest unit of digital information. |
| Byte | A group of eight bits. |
| Compiler | Software that translates an entire source program into machine code before execution. |
| CPU | Central Processing Unit; executes program instructions. |
| Data | Information processed by a computer program. |
| Executable | A machine-code program that can be run directly by the operating system. |
| Hexadecimal | A base-16 number system commonly used in computing. |
| High-Level Language | A programming language designed to be easy for humans to read and write. |
| Interpreter | Software that translates and executes a program one statement at a time. |
| Machine Code | Binary instructions directly understood by the CPU. |
| Operating System | System software that manages hardware resources and provides services to applications. |
| Process | A program that is currently executing. |
| Program | A collection of instructions and data used to perform a specific task. |
| RAM | Random Access Memory; temporary memory used while programs are running. |
| Secondary Storage | Permanent storage devices such as HDDs and SSDs. |
| Source Code | Human-readable program written in a programming language. |

---

