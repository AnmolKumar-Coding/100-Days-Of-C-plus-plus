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

---

### Day 6 - Practise codes for loops

#### 🎯 Achievement

- Print all Odd numbers Between 1 and N "N included"
- Find sum from 1 to N?
- find n! ?
- find all 1 to n is a prime numbers.( in this while and if is used both)

---

### Day 7 - Patterns.

#### 🎯 Achievement
- Understanding how nested loops control rows and columns is starting to get much clearer!

#### Patterns Solved.
- Given an integer n, print a solid square pattern of n rows and n columns using stars (*).
- Given an integer a, print a square pattern of a rows and a columns where every element in the b-th row is equal to the row index i.
- and some experiments which can be seen in day 7 code.

---

### Day 8 — Advanced Nested Loops & Numerical Patterns

#### 📖 Topics Learned

```diff
+ while (i <= n) { while (j <= n) } // Nested Loop Structure
+ s = n - j + 1                     // Reverse Column Mapping
+ s = n * n                         // Global Continuous Tracking
+ s = i + j - 1                     // Row-Relative Offsets
```

#### 🎯 Achievement

- Mastered grid geometry and multi-variable state tracking by implementing 10 distinct mathematical layout structures using nested `while` loops.

#### 💡 Key Concepts

- **Grid Coordinate Systems:** Learned that the outer loop strictly governs the row axis (`i`) while the inner loop dictates the column axis (`j`).
- **Continuous Global Counting:** Implemented matrix sequences (increasing from 1 → N² or descending from N² → 1) by initializing tracking variables outside the loop scope rather than resetting them per row.
- **Triangular Boundary Manipulation:** Discovered how to dynamically shrink column limits by tying the inner loop termination condition directly to the current outer loop index (`j <= i`).
- **Offset Math:** Designed row-relative layouts where element printing values shift fluidly using mathematical expressions like `i + j - 1`.

---

### Day 9 — Character Matrices & Right-Aligned Padded Layouts

#### 📖 Topics Learned

```diff
+ (char)('A' + i - 1)               // Explicit ASCII Type Casting
+ space = 1; while (space <= n - i) // Leading Space Padding Blocks
+ j <= n - i + 1                    // Inverted Matrix Bounds
```

#### 🎯 Achievement

- Extended nested loop logic to execute alphanumeric conversions via ASCII manipulation and successfully built right-aligned, complex inversions using multi-stage blank space padding.

#### 💡 Key Concepts

- **ASCII Character Arithmetic:** Leveraged type casting (`(char)`) to dynamically map numerical loop counters onto alphabetical characters starting from the base memory address of `'A'`.
- **Multi-Stage Inner Loops:** Solved right-aligned and inverted shapes by running two separate sequential inner loops inside a single outer loop layer—one to print leading spaces and one to print data.
- **Space-to-Data Inversion:** Mastered the boundary formula `n - i` to systematically decrease whitespace padding as rows descend, paving the exact structural path for right-aligned alignments.
- **Dynamic Character Offsets:** Engineered advanced alphabet blocks (like Reverse Starting Triangles) where starting points change fluidly per row based on global inputs (`'A' + n + j - i - 1`).

---

### Day 10 — Advanced Pyramids & The Dabangg Pattern Challenge

#### 📖 Topics Learned

```diff
+ while(s1 <= n1 - i1)            // Space Padding for Centered Pyramids
+ while(a1 < i1)                  // Post-Peak Palindromic Countdown
+ while(j2 <= n2 - i2 + 1)        // Multi-Stage Sub-Grids (Dabangg Layout)
+ cout << n2 - u2 - i2 + 2        // Complex Reverse Variable Mapping
```

#### 🎯 Achievement

- Mastered hyper-complex structural logic by engineering multi-stage inner loop sequences, successfully building symmetrical numerical palindromes and completing the legendary "Dabangg" structural pattern challenge.

#### 💡 Key Concepts

- **Palindromic Loop Sequencing:** Learned how to create a centered numerical pyramid by dividing the row into three distinct mechanical steps: padding leading spaces, counting upwards to the peak value (`j1`), and executing a secondary countdown loop (`a1`) to restore symmetry.
- **The "Dabangg" Pattern Blueprint:** Cracked the ultimate layout challenge by coordinating four separate inner loops sequentially within a single outer loop:
  1. An inverted, left-aligned increasing number block.
  2. A growing left-side star wedge.
  3. A matching growing right-side star wedge.
  4. An inverted, right-aligned decreasing number block.
- **Complex Coordinate Math:** Engineered advanced algebraic print statements like `n2 - u2 - i2 + 2` to mirror numbers backwards on the trailing block while continuously respecting both the current row index and user input restrictions.

---

### Day 11 — Bitwise Operations & Evaluation Scopes

#### 📖 Topics Learned

```diff
+ a & b; a | b; a ^ b; ~a;      // Binary Gate Operations
+ num << 1; num >> 1;           // Bitwise Left and Right Shifts
+ ++i; i++; --i; i--;           // Pre/Post Increments & Decrements
```

#### 🎯 Achievement
- Mastered low-level binary gate logic execution and optimized execution throughput using hardware-level bit shifts.
- Engineered evaluation isolation filters to trace sequence logic and prevent boundary overflow errors in variable scopes.

#### 💡 Key Concepts
- **Gate Computations:** Implemented bitwise mappings (`&`, `|`, `^`, `~`) to execute logic directly on raw memory bit buffers.
- **Bit Shift Optimization:** Leveraged left and right bit shifts (`<<`, `>>`) to calculate fast powers-of-two multiplications and divisions at the hardware layer.
- **Side-Effect Sequencing:** Isolated evaluation ordering rules between pre-increment and post-increment expressions to control complex evaluation states.git rm --cached walpaaper
