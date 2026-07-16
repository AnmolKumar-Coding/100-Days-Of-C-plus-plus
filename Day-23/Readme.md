# Day 23 — Alternate Swapping, Unique Numbers, and Duplicates

Today I practiced more array problems. I swapped alternate values, found unique numbers, and found duplicate numbers using both XOR and nested loops.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_swap_alternate.cpp` | Alternate Swap | How to swap nearby values in pairs. |
| `02_unique_number_XOR.cpp` | Unique Number Using XOR | How XOR removes duplicate pairs. |
| `03_find_unique_number.cpp` | Unique Number Using Loops | How nested loops can find a unique value safely. |
| `04_find_duplicate_xor.cpp` | Duplicate Using XOR | How XOR can find one duplicate in a special number range. |
| `05_find_duplicate_nested_loops.cpp` | Duplicate Using Loops | How to find a duplicate by comparing values. |

---

### 🔍 Code Explanations

#### 📁 `01_swap_alternate.cpp` — Swapping Alternate Values

- **Pairs:** I swapped the first and second value, then the third and fourth value.
- **Jumping by Two:** `i += 2` moves directly to the next pair.
- **Odd Size Safety:** `size - 1` stops the code from trying to swap a missing value.

#### 📁 `02_unique_number_XOR.cpp` — Finding One Unique Number

- **XOR Rule:** A number XOR with itself becomes `0`.
- **Main Condition:** This method works when every duplicate appears exactly two times and only one number is unique.

#### 📁 `03_find_unique_number.cpp` — Finding a Unique Number with Loops

- **Nested Loops:** Each value is compared with every other value.
- **Safe Method:** This method works even when duplicates appear more than two times.

#### 📁 `04_find_duplicate_xor.cpp` — Finding a Duplicate with XOR

- **Question Rule:** The array contains numbers from `1` to `N - 1`, with one number repeated.
- **XOR Logic:** XOR removes the normal numbers and leaves the duplicate number.

#### 📁 `05_find_duplicate_nested_loops.cpp` — Finding a Duplicate with Loops

- **Checking Previous Values:** Every new value is compared with earlier values.
- **Fast Return:** The program returns as soon as it finds a duplicate.

---

### 🧠 My Key Takeaways

- `i += 2` is useful when working with pairs.
- XOR is fast, but it only works when the problem follows the correct conditions.
- Nested loops are slower, but they are easier to understand and work in more cases.
- Reading the question conditions is important before choosing the solution.