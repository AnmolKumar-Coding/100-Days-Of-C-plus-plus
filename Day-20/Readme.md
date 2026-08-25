# Day 20 — Starting Arrays and Indexes

Today I started learning arrays in C++. I learned that an array helps us store many values of the same data type using one name. I also practiced indexes, different ways to initialize arrays, and different data types.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_Learning_Arrays.cpp` | Array Basics | How to create arrays, initialize values, and access elements using indexes. |
| `02_initialising_elements_in_a_array.cpp` | Filling Array Values | How to use `fill()` and `fill_n()` to set many array values at once. |

---

### 🔍 Code Explanations

#### 📁 `01_Learning_Arrays.cpp` — Learning Array Basics

- **Creating Arrays:** I created integer arrays with different sizes, like `int first[10]`.
- **Indexes:** I learned that the first value is stored at index `0`, not index `1`. For an array of size `3`, the valid indexes are `0`, `1`, and `2`.
- **Initialization:** I used `{1, 5, 4}` to give values to an array while creating it. I also used `{0}` to make every value `0`.
- **Partial Initialization:** I learned that `int fourth[10] = {1};` makes the first value `1` and the remaining values `0`.
- **Empty Arrays:** An array like `int first[10];` has no set values yet. I should give it values before reading or printing them.
- **Different Data Types:** I also practiced `char`, `float`, and `double` arrays.

#### 📁 `02_initialising_elements_in_a_array.cpp` — Filling Array Values

- **Using `fill()`:** I used `fill(array, array + 10, 27)` to set all ten values of the array to `27`.
- **Using `fill_n()`:** I used `fill_n(array1, 10, 69)` to fill ten array values with `69`.
- **Progressive Filling:** I used a loop with `fill()` to print values from `0` to `9`, and then from `100` to `109`.
- **Overwrite Behaviour:** I learned that running `fill()` again changes the values that were already stored in the array. After the last loop, every value in `array2` becomes `9`.

---

### 🧠 My Key Takeaways

- Arrays store many values under one variable name.
- Array indexes start from `0`.
- The last valid index is always `size - 1`.
- I should not use an index outside the array size.
- An array can only store one data type at a time.
- `{1}` makes the first value `1` and the remaining values `0`.
- `fill()` is useful when I want to give the same value to many array elements.
- `fill_n()` starts from a position and fills the number of elements I give it.
- `fill()` can overwrite old values, so I should know which elements it is changing.
