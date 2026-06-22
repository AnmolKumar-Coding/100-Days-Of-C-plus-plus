# 100-Days-Of-C-plus-plus

Tracking my daily coding consistency, lecture progress, and problem-solving journey in C++.

---

### Day 1 — Environment Setup & Version Control

- Configured the development environment by installing Visual Studio Code and setting up the GCC/G++ compiler.
- Initialized Git and created this repository to document my learning journey.
- Created a long-term roadmap focused on mastering C++, Data Structures & Algorithms, Competitive Programming, and Software Development.

---

### Day 2 — Flowcharts & Pseudocode Basics

- Learned the fundamental components of flowcharts:
  - Terminator
  - Input/Output (Parallelogram)
  - Process
  - Decision
  - Connector (Circle)
  - Flow Arrows
- Created flowcharts for:
  - Addition of two numbers
  - Checking whether a number is even or odd
  - Validating a triangle
  - Determining whether a number is positive, negative, or zero
  - Printing numbers from 1 to 5
- Learned the concept of a programming language and its role in software development.

---

### Day 3 — First C++ Program

#### 📖 Topics Learned

```diff
+ #include <iostream>
+ using namespace std;
+ int main()
+ cout
+ <<
+ endl
+ ;

```

#### 🎯 Achievement

- Wrote, compiled, and executed my first C++ program: `Hello World`.

#### 💡 Key Concepts

- `#include <iostream>` enables input and output operations.
- `using namespace std;` allows access to standard library objects without the `std::` prefix.
- `int main()` is the entry point of a C++ program.
- `cout` is used to display output on the console.
- `<<` (stream insertion operator) sends data to `cout` for display.
- `endl` inserts a new line and flushes the output buffer.
- `;` (semicolon) marks the end of a statement in C++.

---

### Day 4 — Variables, Data Types & Operators

#### 📖 Topics Learned

- Primitive Data Types (`int`, `char`, `float`, `double`, `bool`)
- Variables & Memory Allocation (Sizeof operator)
- Type Casting (Implicit)
- Operators (Arithmetic, Relational, Logical)

#### 🎯 Achievement

- Learned how different primitive data types occupy memory, how the system implicitly casts data types, how negative numbers are represented via Two's Complement, and how to utilize arithmetic, relational, and logical operators.

#### 💡 Key Concepts

- **Variables & Storage:** A variable is a named storage location in memory. Different data types occupy different amounts of space (e.g., `int` typically takes 4 bytes, `char` takes 1 byte).
- **Negative Number Storage (Two's Complement):** Computers store negative numbers (like -3) using a 3-step process because they cannot store a minus sign directly:
  - Find the positive binary representation of the number (e.g., 3 is 00000011).
  - Flip all the bits (One's Complement: 00000011 --> 11111100).
  - Add 1 to the result (Two's Complement: 11111100 + 1 = 11111101).
  - The leftmost bit acts as the Sign Bit (0 for positive, 1 for negative).
- **Type Casting:** Converting data from one type to another. 
  - *Implicit:* Done automatically by the compiler (e.g., assigning a `char` to an `int` stores its ASCII value).
- **Operators:** - *Arithmetic:* `+`, `-`, `*`, `/`, `%` (Modulo gives the remainder).
  - *Relational:* `==`, `!=`, `>`, `<`, `>=`, `<=`, `!=` (Returns `true` or `false`)(in output true = 1 & false = 0).
  - *Logical:* `&&` (AND), `||` (OR), `!` (NOT) used to combine multiple conditions.

---

### Day 5 — Conditionals, User Input & Basic Loops

#### 📖 Topics Learned

```diff
+ cin
+ >>
+ if
+ else if
+ else
+ while
```

#### 🎯 Achievement

- Built interactive programs that read user inputs, make logical choices across multiple paths, and repeat execution steps safely using while loops.

#### 💡 Key Concepts

- **Reading Inputs (`cin`):** Used `cin` and the `>>` operator to read data from the keyboard and save it inside variables at runtime.
- **Decision Trees:** Controlled program flow using `if` and `else if` for checking sequential conditions, with a final fallback `else` block.
- **Looping (`while`):** Learned how to safely repeat code blocks by managing the three loop pillars: initialization, the exit condition, and updating the counter.
- **Character Filtering:** Used logic checks to automatically classify an input character as uppercase, lowercase, or a number.
- **Divisibility Tests:** Combined the modulo operator (`%`) with loops to build simple logic checkers, like verifying if a number is prime.
