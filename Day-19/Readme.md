# Day 18 — Building Functions, Bit Counting, and Pass-By-Value Clones

Today was a huge coding day where I broke down how C++ splits code into small, organized pieces. I practiced writing multiple logic checks, chaining helper functions together for math formulas, optimizing bit loops, and tracking how variables are copied securely across memory slots.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_Functions.cpp` | Function Basics | How to pack repetitive loops into reusable functions to clean up our code. |
| `02_EvenOdd_Using_Functions.cpp` | Boolean Functions | Returning true/false flags using a fast bitwise AND check inside a function. |
| `03_EvenOdd_with_loops_ans_functions.cpp` | Loops & Functions | Running a conditional checking function inside a standard loop with a safety check for zero. |
| `04_nCr_using_functions_loops.cpp` | Function Chaining | Calculating the $nCr$ formula by nesting a factorial function inside our main math function. |
| `05_Simple_Counting.cpp` | Void Functions | Creating print-only blocks that don't return values and learning where they can be called. |
| `06_Check_prime.cpp` | Prime Function | Building an active tester loop that handles edge cases like 0 and 1 cleanly. |
| `07_AP.cpp` | Formula Functions | Writing simple equation blocks that output specific math progression terms instantly. |
| `08_Print_Total_Number_of_set_of_bits_in_a_ans_b.cpp` | Bit Counting | Running efficient bit-clearing loops across separate inputs to find their combined total. |
| `09_nth_Fibonacci_Numeber_using_functions.cpp` | Fibonacci Index | Generating specific sequence items inside an isolated function using safe value shifting. |
| `10_Call_By_Value.cpp` | Memory Scope Verification | Proving with terminal prints that variables changed inside a function do not change outside. |
| `11_Pass_By_Value.cpp` | Copy Protection | Breaking down step-by-step how clone variables protect our main inputs from getting modified. |

---

### 🔍 Code Explanations

#### 📁 01_Functions.cpp — Fixing Repetitive Math Loops
- **The Problem:** Instead of writing the exact same math loop three times for different numbers, I wrapped a clean `for` loop inside an `int power()` function.
- **How It Works:** The function handles its own inputs (`a` and `b`), calculates the answer, and sends it back using `return`. The main method calls it three separate times, saving the outputs neatly into `ans1`, `ans2`, and `ans3`.

#### 📁 02_EvenOdd_Using_Functions.cpp — Rapid Bit Auditing
- **Bitwise Check:** Made a `bool isEven(int a)` function that uses the fast hardware check `a & 1`. If the last bit is a 1, the number is odd, so it returns `0`. Otherwise, it returns `1`.
- **Clean Routing:** The main function catches this true/false answer directly inside an `if(isEven(num))` check, keeping the `main()` function looking clean and readable.

#### 📁 03_EvenOdd_with_loops_ans_functions.cpp — Repeating Logic Checks
- **Combining Tools:** Put a standard `for` loop together with my custom `isEven()` function so the user can test multiple numbers in a row.
- **Handling Zero:** Added an explicit `if (n == 0)` check inside the main loop to safely call out zero before passing other numbers to the function.

#### 📁 04_nCr_using_functions_loops.cpp — Functions Calling Functions
- **The Setup Order:** The `Factorial()` function is placed at the very top of the file. This allows the `nCr()` function written below it to safely see it and call it.
- ** Chaining Math:** The `nCr` function calls `Factorial` three separate times to find the numerator and denominator values before dividing them to get the final answer.

#### 📁 05_Simple_Counting.cpp — Using Void for Actions
- **No Returns:** Learned that if a function only does an action (like printing a loop from 1 to N) and doesn't calculate an answer value, we write `void` as its type.
- **Stream Limitations:** Because a `void` function returns absolutely nothing, trying to print it like `cout << PrintCounting(n);` will cause a crash. It must be called as an independent line.

#### 📁 06_Check_prime.cpp — Prime Tester with Edge Shields
- **Loop Testing:** Created an `isPrime()` function that runs a loop from `2` up to `n - 1`. If any number divides evenly, it returns `0` early.
- **Main Guards:** Since 0 and 1 have unique rules, I added explicit `if-else` blocks in `main()` to filter them out instantly before they can reach the core function.

#### 📁 07_AP.cpp — Quick Equation Execution
- **Clearing Clutter:** Built an `AP(int n)` function that calculates the math line `(3 * n) + 7` and returns the answer in one single line, showing how functions keep our loops simple.

#### 📁 08_Print_Total_Number_of_set_of_bits_in_a_ans_b.cpp — Chained Bit Counters
- **The Fast Loop:** Created a `SetBits(int n)` helper function that counts how many `1`s are in a binary number using the fast `n = n & (n - 1)` loop trick.
- **Adding Outputs:** Designed `setsBitsAplusB()` to pass both `a` and `b` to the bit counter separately, add their final scores together, and print the total sum.

#### 📁 09_nth_Fibonacci_Numeber_using_functions.cpp — Safe Value Shifting
- **Early Exits:** Handled the first two positions instantly by returning `(n - 1)` if the user asks for index 1 or 2.
- **Isolated Math:** Enclosed the index counter and value-shifting loop (`sum = a + b; a = b; b = sum;`) inside this function so no global variables are messed with while finding the answer.

#### 📁 10_Call_By_Value.cpp & 11_Pass_By_Value.cpp — The Cloning Phenomenon
- **Step-by-Step Breakdown:**
  1. We type a number (like `7`) into the main function's variable `n`.
  2. We call `PassByValue(n)`. C++ immediately grabs that value `7` and puts it into a completely fresh, separate memory space created just for that function. This is an exact clone.
  3. Inside the function, running `n++` or `n += 100` updates that clone variable directly (turning it to `8` or `107`) and prints it.
  4. Once the function reaches its closing bracket, its temporary clone memory is completely deleted.
  5. The program goes back to `main()`. When we print `n`, it is still `7`. This proves the main variable was completely protected because the function was only messing with a copy.

---

### 🧠 My Key Takeaways

- **The Blueprint of Clean Code:** Functions remove messy clutter. Instead of staring at a massive wall of 200 tangled loops, you can read easy labels like `Factorial()` or `isPrime()`.
- **Clone Safety Nets:** Pass-by-value acts like a protective security shield. You can pass raw values into other functional blocks to do messy arithmetic without worrying that your master variable in `main()` will accidentally get corrupted.
