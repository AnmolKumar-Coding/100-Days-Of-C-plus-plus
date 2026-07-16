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

### Day 11 — Bitwise Operations & Operator Behavior

#### 📖 Topics Learned

```diff
+ a & b; a | b; a ^ b; ~a;      // Bitwise Logic (AND, OR, XOR, NOT)
+ num << 1; num >> 1;           // Left Shift and Right Shift
+ ++i; i++; --i; i--;           // Pre/Post Increments & Decrements
```

#### 🎯 Achievement
- Understood how numbers are manipulated directly at the binary bit level and how bit-shifting works as a faster alternative to multiplication and division.
- Practiced tracking tricky variable updates to master the exact step-by-step execution differences between prefix and postfix operators.

#### 💡 Key Concepts
- **Bitwise Operators:** Learned how `&`, `|`, `^`, and `~` compare numbers bit-by-bit in memory.
- **Bit Shift Math:** Explored how Left Shift (`<<`) shifts binary bits left (multiplying by 2) and Right Shift (`>>`) shifts bits right (dividing by 2) efficiently.
- **Operator Sequencing:** Mastered how pre-increment (`++i`) updates a variable instantly before it is used, while post-increment (`i++`) uses the current value first and updates it right after.

---

### Day 12 — For Loops, Fibonacci Series & Prime Checkers

#### 📖 Topics Learned

```diff
+ for(int a=0, b=1; a>=0; a--, b--)  // Multiple variables in one loop
+ int sum = a + b; a = b; b = sum;   // Shifting values to get the next number
+ bool isprime = 1; break;           // Using true/false flags and stopping loops early
```

#### 🎯 Achievement
- Learned how to control `for` loops using multiple variables at once. I solved the Fibonacci series on my own first try and optimized my prime number checker to run faster using the `break` statement.

#### 💡 Key Concepts
- **Flexible Loops:** The three parts of a `for` loop (start, condition, and step) are optional. Leaving them blank `for(;;)` makes an infinite loop that you can stop using `break`.
- **Value Shifting:** To make a series like Fibonacci, you have to pass values from one variable to another (`a = b; b = sum;`) so the numbers keep moving forward.
- **Using Flags:** A boolean variable (like `isprime`) can hold a true/false status across your code, helping you decide what to print after a loop ends.

---

### Day 13 — Control Keywords, Variable Scope, and First LeetCode Milestones

#### 📖 Topics Learned

```diff
+ continue;                         // Skip the rest of the current loop step
+ if(true) { int b = 50; }          // Variables are locked inside their own blocks
+ int digit = n % 10; n = n / 10;   // Math trick to separate digits from a number
+ if(n & 1); n = n >> 1;            // Checking and moving binary bits
```

#### 🎯 Achievement
- Mastered the `continue` keyword for loop skipping and learned how variable safety works with block scopes. Most importantly, passed all test cases for my first two coding platform challenges: LeetCode 1281 and LeetCode 191!

#### 💡 Key Concepts
- **Loop Control:** While `break` exits a loop completely, `continue` just skips the rest of the current turn and moves straight to the next loop cycle.
- **Variable Scope:** Variables are local to the brackets `{ }` they are born in. You can reuse a variable name like `i` inside a `for` loop even if `i` already exists outside of it.
- **Digit Stripping Math:** Dividing an integer by 10 continuously reduces its size, while using modulo 10 peels off the last digit. This is a core pattern for number puzzle problems.
- **Bitwise Bit Counting:** Combined bitwise AND checks with right shifts to inspect binary numbers bit-by-bit at the hardware level.

---

### Day 14 — Decimal and Binary Conversions (Full Lecture)

#### 📖 Topics Learned

```diff
+ int bit = n & 1; n = n >> 1;      // Pulling out binary bits one by one
+ ans = (bit * pow(10, i)) + ans;   // Math trick to fix the backwards bit order
+ ans = (digit * pow(2, i)) + ans;  // Turning binary digits back into normal numbers
```

#### 🎯 Achievement
- Mastered the complete math logic for converting numbers back and forth between Decimal (Base-10) and Binary (Base-2), including how the computer handles negative binary numbers using bits.

#### 💡 Key Concepts
- **Bit Scanning:** Using `& 1` checks if the last bit of a number is a 0 or a 1. Right shifting (`>> 1`) drops that bit so you can check the next one.
- **The Stacking Trick:** The formula `(bit * 10^i) + ans` builds a number from right to left by pushing older numbers into the tens, hundreds, and thousands spots so the final answer is not backwards.
- **Negative Binary:** Computers store negative numbers by taking the positive binary version, flipping all the bits, and adding 1.
- **Decoding Binary:** To go from binary back to a normal number, you multiply each digit by its positional value in base-2 (1, 2, 4, 8, etc.) and sum up the total.

---

### Day 15 - Just coded the things i learned in Day-14.
-The things I studied in Day-15 I dont undertsand the code yet so I decided I needed a break and will do it tommorow.

1. **Mastered The Decimal To Binary Coversion.**
2. **Mastered The Binary To Decimal Coversion.**

---

### Day 16 — LeetCode Practice: Reverse Integer & Bitwise Complement

#### 📖 Topics Learned

```diff
+ int digit = x % 10; x /= 10;       // Isolating and removing digits for reversal
+ if(ans > INT_MAX/10 || ans < ...)  // Proactive overflow validation before operations
+ mask = (mask << 1) | 1;            // Dynamically building a custom bitmask length
+ int ans = (~n) & mask;             // Isolating flipped bits using a bitwise AND mask
```

#### 🎯 Achievement
- Successfully passed all test cases for LeetCode 7 (Reverse Integer) and LeetCode 1009 (Bitwise Complement). Mastered integer overflow protection and custom bitmask generation.

#### 💡 Key Concepts
- **Overflow Prevention:** Since standard 32-bit integers have strict bounds (`INT_MAX` and `INT_MIN`), you must validate that your running total won't exceed these limits *before* executing the next multiplication step.
- **Digit Reconstruction:** Reversing an integer relies on extracting digits sequentially using modulo math and accumulating them into a new base-10 value using `(ans * 10) + digit`.
- **Dynamic Bitmasking:** To find the true complement of a number without affecting leading zeros, you can use a loop with bitwise shifts and OR operations (`mask << 1 | 1`) to construct a mask that perfectly matches the bit-length of the target number.

---

### Day 17 — Power of Two Verification & Multi-Type Stream Precision

#### 📖 Topics Learned

```diff
+ if(ans >= INT_MAX/2)               // Predictive Multiplicative Overflow Safeguard
+ #include <iomanip>                 // Standard Input/Output Stream Manipulator Header
+ cout << fixed                      // Enforcing Fixed-Point Floating-Point Notation
+ cout << setprecision(N)            // Restricting Execution Output to N Fractional Places
```

#### 🎯 Achievement

- Successfully passed all test cases for LeetCode 231 (Power of Two) and the HackerRank "Basic Data Types" challenge.
- Mastered boundary condition defenses by intercepting potential 32-bit integer runtime overflows prior to execution.
- Gained absolute control over standard output streams, eliminating messy scientific notations when rendering high-precision `float` and `double` variables.

#### 💡 Key Concepts

- **Pre-emptive Overflow Interception:** Standard signed 32-bit integers crash or wrap around when exceeding `INT_MAX`. By evaluating `if (ans >= INT_MAX/2)` *before* applying the scaling multiplier (`ans *= 2`), the logic intercepts and halts an overflow event safely.
- **Stream Manipulation Framework (`<iomanip>`):** Unlocks non-destructive stream formatting state-flags to restructure terminal text representations directly during data transmission.
- **Fixed-Point Locking (`fixed`):** Overrides the compiler's default behavior of switching large or precise fractional numbers into shorthand scientific notation (e.g., `3.14e+00`), locking it to standard decimal layouts.
- **Precision Truncation (`setprecision`):** Directs the output stream buffer to display exactly `N` digits following the decimal point, handling trailing padding zeros or rounding automatically.

---

### Day 18 — Multi-Way Branching, basic c++ calculator & State Optimization

#### 📖 Topics Learned

```diff
+ switch(expression)                 // Multi-Way Conditional Branching Engine
+ case constant-expression:          // Explicit Identity Matching (Integral/Character Only)
+ break;                             // Sequential Execution Interception & Context Exit
+ default:                           // Optional Fallback Execution Route
+ money %= 100;                      // Remainder Mutation for Sequential State Tracking
```

#### 🎯 Achievement

- Mastered multi-way branching logic by replacing deeply nested `if-else` chains with clean, execution-efficient `switch` statements.
- Developed a basic c++ calculator.
- Leveraged intentional switch-case fall-through behavior combined with arithmetic mutations to engineer an automated currency denomination counter.

#### 💡 Key Concepts

- **Type Restrictions & Single Identity Checks:** Unlike `if-else` blocks that handle range boundaries (e.g., `n > 0`), a `switch` expression must evaluate down to a single constant discrete value. It strictly accepts integral types (`int`, `char`, `short`, etc.) and does not support floating-point numbers or operational logic chains.
- **The Fall-Through Control Leak:** The `break` statement functions as a hardware exit instruction. Omitting a `break;` lets execution flow downward sequentially into succeeding `case` blocks regardless of whether their condition keys match, running everything until a `break` or the end of the `switch` container is hit.
- **State Mutation Tracking:** By mutating a currency total variable using the modulo operator (`%=`) inside a fall-through switch block, a single baseline figure can be safely updated and processed across multiple sequential computational layers.

---

### Day 19 — Learning Functions, Bit Counting Tricks & Pass-By-Value Clones

#### 📖 Topics Learned

```diff
+ return_type function_name()        // Creating Clean, Reusable Code Blocks
+ void                               // Used for Functions That Only Print actions and Don't Return Answers
+ function_name(arguments);          // Calling a Function to Run Its Code
+ type1 name(type2 param)            // Organizing Functions in the Right Order
+ n = n & (n - 1)                    // Clever Trick to Clear the Lowest 1 Bit Fast
```

#### 🎯 Achievement

- Moved away from giant blocks of code by learning how to split programs into clean, separate functions.
- Removed repetitive loops by putting calculations like Arithmetic Progressions (AP) and Fibonacci into reusable blocks.
- Solved complex math formulas like $nCr$ by making one function call another helper function.
- Mastered bitwise logic by creating a clean function that counts the total number of set bits (`1`s) across different variables.
- Deeply understood how memory works by tracking the differences between real variables in `main()` and the copied values inside functions.

#### 💡 Key Concepts

- **Functions & Reusability:** Functions are like separate tools. Instead of copying and pasting the exact same loop over and over with different variable names, you can write it once inside a named function and call it whenever you need it.
- **The Top-to-Bottom Rule:** A C++ compiler reads your file from top to bottom. A function can only call another function if that function is written *above* it. If you try to call a function that is typed lower down in the file, the compiler will throw an error.
- **The Void Return Type:** We use `void` when a function is meant to do an action (like printing counting numbers) rather than calculating an answer value to send back. Because it doesn't give back any data, you cannot put a `void` function inside a `cout` statement.
- **Clever Bit Clearing (`n & (n-1)`):** Writing `n & (n-1)` instantly turns off the rightmost `1` bit in a binary number. This is super efficient because the loop only runs exactly as many times as there are `1` bits, making it much faster than checking every single spot.
- **Pass-By-Value Mechanics:** When you pass a variable into a basic function, the compiler doesn't send the real variable. It creates an exact **clone** (a copy) inside a brand new memory slot. Any changes, math steps, or increments inside that function only happen to the clone, leaving your original variable in `main()` completely safe and unchanged.

---

### Day 20 — Starting Arrays and Indexes

#### 📖 Topics Learned

```diff
+ int array[10]                  // Creating an integer array
+ array[index]                   // Accessing values using indexes
+ int array[3]{1, 5, 4}          // Initializing an array
+ char, float, double arrays     // Arrays can store different single data types
```

#### 🎯 Achievement

- Started learning arrays and how they store many values using one variable name.
- Practiced creating arrays, giving them values, and printing values using indexes.
- Learned that array indexing starts from `0`.

#### 💡 Key Concepts

- **Arrays and Memory Boxes:** An array is like a row of boxes stored under one name. Instead of creating many variables like `a`, `b`, and `c`, I can create one array and store many values inside it.
- **Indexing Starts from Zero:** The first value is stored at index `0`, the second at index `1`, and the last value is at `size - 1`. Using an index outside this range can give wrong output or cause problems.
- **Array Initialization:** Writing `int arr[3]{1, 5, 4};` stores values directly in the array. Writing `int arr[10]{0};` fills all values with `0`. Writing `{1}` only makes the first value `1`; the remaining values become `0`.
- **One Data Type Rule:** An integer array only stores integers. A character, float, or double needs its own array with the correct data type.

---

### Day 21 — Arrays with Functions, Min/Max, and Sum

#### 📖 Topics Learned

```diff
+ function(array, size)          // Passing arrays to functions
+ INT_MIN and INT_MAX            // Finding maximum and minimum values
+ max() and min()                // Using predefined functions
+ arr[0] = value                 // Array changes inside a function
+ ans += array[i]                // Finding the sum of array elements
```

#### 🎯 Achievement

- Learned how to pass arrays to functions.
- Found the minimum and maximum value in an array using two methods.
- Understood that changing an array inside a function changes the original array.
- Created a function to find the total sum of all array values.

#### 💡 Key Concepts

- **Passing Arrays to Functions:** When I pass an array to a function, I also pass its size. The size is important because the function needs to know how many values it should process.
- **Original Array Changes:** Arrays do not make a separate copy when passed to a function. If I change `arr[0]` inside the function, the same change appears in the original array in `main()`.
- **Finding Minimum and Maximum:** I used `INT_MIN` while finding the maximum value because every normal integer is bigger than it. I used `INT_MAX` while finding the minimum because every normal integer is smaller than it.
- **Predefined `min()` and `max()`:** These functions compare two values and return the smaller or bigger one. They make the code shorter while keeping the same logic.
- **Running Sum:** A sum variable starts from `0`, and every array value is added one by one using `ans += array[i]`. This is useful in many array problems.

---

### Day 22 — Linear Search and Reversing Arrays

#### 📖 Topics Learned

```diff
+ bool search(array, size, key)  // Checking whether a number is present
+ return true / false            // Returning search result
+ start and end indexes          // Reversing an array
+ swap(arr[start], arr[end])     // Swapping values from both sides
```

#### 🎯 Achievement

- Built linear search programs using fixed and user-entered arrays.
- Learned how a boolean function can tell whether a number is present.
- Reversed an array by swapping values from the start and end.

#### 💡 Key Concepts

- **Linear Search:** Linear search checks every array value from the beginning until it finds the target number. If the number is found, the program can stop early.
- **Boolean Functions:** A `bool` function returns only `true` or `false`. This is useful when the question only needs a yes-or-no answer, such as whether a number exists in an array.
- **User Input Arrays:** The same search function can work with any array when the user enters the size and values. The function only needs the array, its size, and the target number.
- **Two-Index Method:** To reverse an array, one index starts from the beginning and another starts from the end. After swapping both values, the indexes move toward the middle.
- **Using `swap()`:** `swap(arr[start], arr[end])` exchanges two values easily. It helps keep reverse-array code short and clear.

---

### Day 23 — Array Swapping, Unique Numbers, and Duplicates

#### 📖 Topics Learned

```diff
+ i += 2                         // Moving through alternate pairs
+ a ^ a = 0                      // XOR removes matching pairs
+ nested loops                   // Comparing values one by one
+ duplicate search               // Finding repeated values in an array
```

#### 🎯 Achievement

- Swapped alternate values in an array.
- Found a unique number using both XOR and nested loops.
- Found duplicate numbers using XOR and nested loops.
- Understood that different methods work under different conditions.

#### 💡 Key Concepts

- **Alternate Swapping:** To swap values in pairs, I move through the array using `i += 2`. This swaps the first and second values, then the third and fourth values, and continues in the same way.
- **Safe Pair Boundaries:** The condition `i < size - 1` makes sure the program does not try to swap a value that does not exist when the array has an odd number of elements.
- **XOR for Unique Numbers:** XOR has a special rule: a number XOR with itself becomes `0`. When every duplicate appears exactly twice, all pairs cancel out and the single unique number remains.
- **XOR Conditions Matter:** The XOR unique-number method only works when there is one unique number and every other number appears exactly two times. If the question does not follow this rule, the answer may be wrong.
- **Nested Loops as a Safe Method:** Nested loops compare one value with the other values in the array. They take more steps than XOR, but they work in more situations and are easier to understand.
- **Finding Duplicates:** A duplicate can be found by comparing values with nested loops. XOR can also find a duplicate, but only when the array follows the required number pattern.

---
