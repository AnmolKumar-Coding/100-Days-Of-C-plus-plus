# Day 22 — Linear Search and Reversing Arrays

Today I practiced searching for values in arrays and reversing an array. I learned how to use boolean functions, loops, indexes, and swapping.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_linear_search_in_arrays.cpp` | Linear Search | How to search for a number in a fixed array. |
| `02_linear_search_in_arrays_part2.cpp` | User Input Search | How to search in an array entered by the user. |
| `03_reverse_array.cpp` | Reverse Array | How to reverse an array by swapping values from both ends. |

---

### 🔍 Code Explanations

#### 📁 `01_linear_search_in_arrays.cpp` — Searching a Fixed Array

- **Checking Values:** The loop checks every value one by one.
- **Boolean Result:** The function returns `true` if the number is found and `false` if it is not found.

#### 📁 `02_linear_search_in_arrays_part2.cpp` — Searching User Input

- **Taking Input:** I let the user enter the array size and values.
- **Using the Same Logic:** The linear search function works with any user-entered array.

#### 📁 `03_reverse_array.cpp` — Reversing an Array

- **Two Indexes:** I used `start` from the beginning and `end` from the last value.
- **Swapping:** I used `swap()` to exchange both values.
- **Moving Inward:** `start` moves forward and `end` moves backward until they meet.

---

### 🧠 My Key Takeaways

- Linear search checks values one by one.
- A boolean function is useful when the answer is yes or no.
- `swap()` makes exchanging values easy.
- Two indexes can solve reverse array problems cleanly.