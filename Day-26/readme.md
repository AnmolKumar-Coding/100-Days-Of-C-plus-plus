# Day 26 — Learning Binary Search and Array Positions

Today I practiced multiple array problems and used binary search in different ways. I understood that binary search is not only for finding one value, but also for finding boundaries, peaks, and valid decision points in sorted data.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_leetcode_question_1207.cpp` | Unique Occurrence Counts | How sorting helps group equal values, then frequency checking confirms whether occurrence counts are unique. |
| `02_Binary_search.cpp` | Binary Search Basics | How to sort first, use safe midpoint calculation, and return a sentinel value when key is not found. |
| `03_ First_and_Last_Position_of_an_Element_In_Sorted_Array.cpp` | First & Last Occurrence | How to run binary search in two directions to capture left boundary and right boundary of a target. |
| `04_LeetcodeQuestion_852_Peak_Index_in_a_Mountain_Array.cpp` | Mountain Peak Search | How slope comparison (`arr[mid]` vs `arr[mid+1]`) helps locate the peak index. |
| `05_LeetcodeQuestion_724_Find_Pivot_Index.cpp` | Pivot Index | How to compare left-side sum and right-side sum for each index to find balance point. |

---

### 🔍 Code Explanations

#### 📁 `01_leetcode_question_1207.cpp` — Unique Number of Occurrences

- **Sorting First:** I sorted the array so same numbers come together in one block.
- **Group Counting:** I tracked each group size using `current_count`.
- **Last Group Safety:** I pushed the final count after loop end so the last group is never missed.
- **Uniqueness Check:** I sorted the frequency list and compared adjacent counts to detect duplicates.

#### 📁 `02_Binary_search.cpp` — Binary Search with Safety Checks

- **Precondition:** I sorted the array before binary search because binary search depends on ordered data.
- **Safe Midpoint:** I used `initial + (final - initial) / 2` to avoid overflow risk.
- **Boundary Movement:** I moved left or right boundaries by excluding `mid` to keep the loop progressing.
- **Sentinel Return:** I returned `INT_MIN` when key was not found.
- **Worth Keeping:** The not-found check happens before index use, which prevents invalid array access.

#### 📁 `03_ First_and_Last_Position_of_an_Element_In_Sorted_Array.cpp` — Boundary Search

- **First Occurrence Logic:** After finding key, I saved index and moved left (`finals = mid - 1`).
- **Last Occurrence Logic:** After finding key, I saved index and moved right (`initial = mid + 1`).
- **Two Answers Together:** I used `pair<int, int>` to return both positions from one function.

#### 📁 `04_LeetcodeQuestion_852_Peak_Index_in_a_Mountain_Array.cpp` — Peak Index in Mountain Array

- **Slope Decision:** If `arr[mid] < arr[mid+1]`, I am on ascending side, so I moved right.
- **Peak Inclusion Rule:** Otherwise I moved `end = mid` because `mid` can itself be the peak.
- **Convergence:** When `start == end`, that index is the peak.

#### 📁 `05_LeetcodeQuestion_724_Find_Pivot_Index.cpp` — Pivot Index by Sum Balance

- **Helper Functions:** I created `Leftsum()` and `Rightsum()` for cleaner logic.
- **Index Check:** For each position, I compared both sums.
- **Result Rule:** If equal, return index; if none match, return `-1`.

---

### 🧠 My Key Takeaways

- Binary search must be used on sorted data.
- Safe midpoint calculation is important for large index ranges.
- Sentinel values are useful, but they must be checked before using them as indices.
- First/last occurrence problems are solved by changing boundary direction after a match.
- `pair<int, int>` is a clean way to return two related answers.
- Breaking logic into helper functions made pivot-index code easier to read.
- I ignored non-learning comments and kept only concepts that improve algorithm understanding and safety.
