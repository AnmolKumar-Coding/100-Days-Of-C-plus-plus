# Day 27 — Rotated Array Search and Square Root with Binary Search

Today I practiced binary search in a deeper way. Instead of normal sorted arrays only, I solved rotated sorted array problems and also solved integer square root using the same divide-and-check idea.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_Find_The_Pivot_Element_in_a_rotated_array.cpp` | Pivot in Rotated Array | How to find the minimum element index (pivot) using binary search decisions. |
| `02_ Search_In_Rotated_Sorted_Array.cpp` | Search Target in Rotated Array | How to split the array at pivot and apply binary search in the correct sorted half. |
| `03_LeetcodeQuestion_69_Find_the_square(X).cpp` | Integer Square Root | How to return floor square root using binary search and overflow-safe multiplication checks. |

---

### 🔍 Code Explanations

#### 📁 `01_Find_The_Pivot_Element_in_a_rotated_array.cpp` — Pivot Element

- **Edge Case Check:** If first element is less than or equal to last element, array is already sorted, so pivot is `0`.
- **Binary Decision Rule:** If `arr[mid] >= arr[0]`, pivot is in right half; otherwise pivot is in left half (including `mid`).
- **Convergence:** Loop ends when `s == e`, and that index is the pivot (minimum element index).

#### 📁 `02_ Search_In_Rotated_Sorted_Array.cpp` — Target Search

- **Step 1:** Find pivot index first.
- **Step 2:** Quick return if target is exactly `arr[pivot]`.
- **Step 3:** Decide which side is sorted and can contain target:
  - Right side: `pivot` to `n-1`
  - Left side: `0` to `pivot-1`
- **Important Fix (Worth Keeping):** Left side search uses `pivot - 1`, so we don’t mix ranges and break sorted-order assumptions.

#### 📁 `03_LeetcodeQuestion_69_Find_the_square(X).cpp` — Integer Square Root

- **Goal:** Return floor value of square root, not floating-point result.
- **Overflow Safety:** Used `long long int` so `mid * mid` does not overflow for large `x`.
- **Binary Search Cases:**
  - If `mid*mid == x`, return exact root.
  - If `mid*mid < x`, move right.
  - If `mid*mid > x`, move left.
- **Final Return Rule:** If exact square is not found, return `e` because it lands on floor root.

---

### 🧠 My Key Takeaways

- Binary search is useful beyond normal search and can solve rotated array logic too.
- Pivot finding is the key step for rotated sorted array problems.
- Correct boundary selection (`pivot - 1`) matters for correctness.
- Quick-exit checks can save unnecessary computation.
- For mathematical binary search problems like square root, data type choice is very important.
- `long long` is a practical safety tool when multiplication may overflow.
