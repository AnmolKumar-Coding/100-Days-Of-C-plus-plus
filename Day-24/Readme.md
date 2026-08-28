# Day 24 — Array Intersection & Vector Usage

Today I learned how to find common elements (intersection) between two arrays using two different approaches. I also learned about vectors, which are dynamic lists that can grow automatically.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_intersection-of-2-arrays_shorted_Elements.cpp` | Intersection with Sorted Arrays | How to use two counters to efficiently find common elements when arrays are sorted. |
| `02_intersection-of-2-arrays_randomized_Elements.cpp` | Intersection with Randomized Arrays | How to use nested loops and vectors to find common elements in unsorted arrays. |

---

### 🔍 Code Explanations

#### 📁 `01_intersection-of-2-arrays_shorted_Elements.cpp` — Sorted Array Intersection

- **Two Counters:** I used two counters `i` and `j` starting at index 0 in both arrays.
- **Matching Elements:** When `arr1[i] == arr2[j]`, the matching number is added to the result using `push_back()`.
- **Moving Forward:** If `arr1[i]` is smaller, I move only `i` forward. If `arr2[j]` is smaller, I move only `j` forward.
- **Vector Return:** The function returns a `vector<int>` containing all matching elements.

#### 📁 `02_intersection-of-2-arrays_randomized_Elements.cpp` — Randomized Array Intersection

- **Vector Basics:** `vector<int> ans;` creates an empty dynamic list that starts with size 0.
- **push_back() Method:** This function adds a value to the end of the vector and automatically grows its memory.
- **Nested Loops:** Each element from `arr1` is compared with every element in `arr2`.
- **Marking Elements:** When a match is found, I set `arr2[j] = INT_MIN` to mark it as used and prevent duplicates.
- **Vector Size:** The `.size()` function returns how many elements are in the vector, useful for printing results.

---

### 🧠 My Key Takeaways

- Vectors are dynamic arrays that grow automatically with `push_back()`.
- `vector<int> ans;` creates an empty vector that only stores integers.
- `push_back()` adds a value to the end and grows the vector by one slot.
- `.size()` returns the exact number of elements currently in the vector.
- Two counters work great for sorted arrays but nested loops are safer for randomized data.
- `INT_MIN` is a marker value that prevents counting the same element twice.
- Functions can return vectors, not just regular data types.
- Vectors use the same `[]` indexing as regular arrays.