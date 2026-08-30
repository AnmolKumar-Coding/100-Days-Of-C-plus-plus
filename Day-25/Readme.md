# Day 25 — LeetCode & Coding Platform Practice: Searching & Sorting Arrays

Today I solved multiple LeetCode and CodeNinjas problems involving finding duplicates, pairs, triplets, and sorting arrays. I learned different techniques like negative marking, two-pointer method, and the Dutch National Flag algorithm.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_Leetcode_question_442.cpp` | Find Duplicates | How to use negative marking to find duplicates in O(n) time without extra space. |
| `02_ Pair_Sum_in codeninjas.cpp` | Find Pair Sum | How to find all pairs of numbers that add up to a target sum using nested loops. |
| `03.Triplet_sum_in_codeninjas.cpp` | Find Triplet Sum | How to use fixed element with two-pointer technique to find triplets efficiently. |
| `04_Sort_0_1.cpp` | Sort 0s and 1s | How to sort an array containing only 0s and 1s using two-pointer method. |
| `05_Sort_0_1_2_codingninjas.cpp` | Sort 0s, 1s, and 2s | How to use the Dutch National Flag algorithm with three pointers to sort three values. |

---

### 🔍 Code Explanations

#### 📁 `01_Leetcode_question_442.cpp` — Find Duplicates

- **Negative Marking:** I use the array itself to track which numbers I've seen by converting them to negative.
- **Hook Index:** When I see number `x`, I go to index `x-1` and mark `nums[x-1]` as negative.
- **Duplicate Detection:** If `nums[x-1]` is already negative, I've seen `x` before—it's a duplicate.
- **abs() Function:** I use `abs()` to get the original number value even after it's been marked negative.

#### 📁 `02_ Pair_Sum_in codeninjas.cpp` — Find Pair Sum

- **2D Vector:** `vector<vector<int>> ans` stores pairs using `ans.push_back({val1, val2})`.
- **Sorting First:** I sort the array to get pairs in correct order.
- **Nested Loops:** Outer loop picks first number, inner loop finds the second number that completes the sum.

#### 📁 `03.Triplet_sum_in_codeninjas.cpp` — Find Triplet Sum

- **Fixed + Two Pointers:** Outer loop fixes one element, then two pointers find pairs in the remaining array.
- **Duplicate Control:** Skip duplicate numbers with `if(i > 0 && arr[i] == arr[i-1])` to avoid duplicate triplets.
- **Moving Pointers:** If sum is too small, move left pointer right. If too big, move right pointer left.

#### 📁 `04_Sort_0_1.cpp` — Sort 0s and 1s

- **Two Pointers:** `left` starts at beginning, `right` starts at end.
- **Left Pointer Logic:** Move right while it finds 0s (already correct side).
- **Right Pointer Logic:** Move left while it finds 1s (already correct side).
- **Swap When Needed:** When left sits on 1 and right sits on 0, swap them.

#### 📁 `05_Sort_0_1_2_codingninjas.cpp` — Sort with Three Values

- **Three Pointers:** `low`, `mid`, `high` divide array into regions for 0s, 1s, and 2s.
- **Mid is Scanner:** It moves forward checking each element.
- **Case 1 (0 found):** Swap with `low`, then increment both `low` and `mid`.
- **Case 2 (1 found):** Already in correct region, just move `mid` forward.
- **Case 3 (2 found):** Swap with `high`, decrement `high`, but DON'T move `mid` (need to check swapped element).

---

### 🧠 My Key Takeaways

- Negative marking allows duplicate detection without extra memory.
- Sorting before searching helps with organizing pairs/triplets and controlling duplicates.
- `sort()` for vectors uses `begin()` and `end()` iterators, different from regular arrays.
- Two-pointer technique is efficient when data is sorted or naturally ordered.
- Fixed element with two pointers is great for finding n-tuples.
- Dutch National Flag uses three pointers to partition array into three sections.
- `swap()` function makes code cleaner than manual value exchanges.
- The choice of algorithm depends on the problem constraints (time, space, sorted/unsorted data).