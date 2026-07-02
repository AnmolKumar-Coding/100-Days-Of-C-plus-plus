# Day 13 — Continue Keyword, Variable Scope, and My First LeetCode Problems!

Today was a huge day! I learned how to skip loop steps using `continue`, how variable scope works inside blocks `{ }`, and I successfully solved my first two actual LeetCode algorithm problems.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_continue_keyword.cpp` | Continue Keyword | How to skip the rest of the code inside a loop step and jump straight to the next turn. |
| `02_practise_questions.cpp` | Output Tracking | Traced tricky loop questions, nested loops, and loops with increments inside the block. |
| `03_scope_of_variable.cpp` | Variable Scope | How variables only live inside the block `{ }` where they are created. |
| `04_first_leetcode_question.cpp` | LeetCode 1281 | How to break down an integer into digits to find their sum and product. |
| `05_second_leetcode_question.cpp` | LeetCode 191 | How to count the number of `1` bits in a binary number using bitwise shifts. |

---

### 🔍 Code Explanations

#### 📁 01_continue_keyword.cpp — Skipping Code
- **The Skip Button:** I learned that the `continue` keyword stops the current loop step right there. It skips any code written below it and jumps straight to the next loop update.

#### 📁 02_practise_questions.cpp — Loop Logic Tracing
- **Tricky Increments:** Practiced tracking loops where variables are updated both inside the `for` statement and inside the loop body, which can change the output unexpectedly.
- **Nested Grid Loops:** Practiced how a loop inside another loop runs completely from start to finish for every single step of the outer loop.

#### 📁 03_scope_of_variable.cpp — Independent Blocks
- **Block Protection:** Learned that variables made inside a block `{ }` cannot be seen outside of it. Two different blocks can even use the exact same variable name without crashing the program.

#### 📁 04_first_leetcode_question.cpp — LeetCode 1281 (My First LeetCode! 🚀)
- **Extracting Digits:** Used `n % 10` to get the last digit of a number and `n / 10` to remove the last digit. 
- **Math Logic:** Ran a `while` loop to grab each digit one by one, adding them to a `sum` total and multiplying them into a `pro` total, then subtracted the two at the end.

#### 📁 05_second_leetcode_question.cpp — LeetCode 191 (Counting Bits 💻)
- **Checking Bits:** Used the bitwise AND check `n & 1 == 1` to see if the very last bit of a number is a `1`.
- **Shifting Down:** Used Right Shift `n = n >> 1` to throw away the last bit and move the next bit into place, looping until the whole number becomes 0.