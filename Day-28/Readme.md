# Day 28 — Square Roots, Pairs, and Vector Operations

Today I practiced finding square roots with binary search and decimal precision. I also learned how to use `pair` and explored important vector operations such as iterators, insertion, erasure, copying, swapping, and clearing.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_squareroot_of_number_upto_6_decimals.cpp` | Square Root with Precision | How to find the integer square root with binary search and improve it digit by digit. |
| `02_Pairs.cpp` | Pairs | How to store two related values together using `pair`, nested pairs, and arrays of pairs. |
| `03_Vectors.cpp` | Vector Basics | How to create vectors, add values with `push_back()` and `emplace_back()`, and copy vectors. |
| `04_Vector_iterator.cpp` | Vector Iterators | How to move through a vector using normal and reverse iterators. |
| `05_auto_in_vector.cpp` | `auto` with Vectors | How `auto` simplifies iterator declarations and range-based loops. |
| `06_Erase_in_vector.cpp` | Erasing Elements | How to remove one element or a range of elements using `erase()`. |
| `07_Insert_in_vector_and_copy_in_vector.cpp` | Inserting and Copying | How to insert values, repeated values, and another vector into a vector. |
| `08_other_codes_in_vector.cpp` | More Vector Functions | How to use `size()`, `pop_back()`, `swap()`, `clear()`, and `empty()`. |

---

### 🔍 Code Explanations

#### 📁 `01_squareroot_of_number_upto_6_decimals.cpp` — Square Root with Precision

- **Integer Square Root:** Binary search finds the floor value of the square root by comparing `mid * mid` with the input number.
- **Safe Multiplication:** `long long` is used for square calculations so larger values do not overflow an `int`.
- **Decimal Refinement:** After finding the integer part, the program uses smaller factors such as `0.1`, `0.01`, and `0.001` to improve the answer.
- **Formatted Output:** `fixed` and `setprecision()` display the answer with the requested number of decimal places.

#### 📁 `02_Pairs.cpp` — Pairs

- **Basic Pair:** `pair<int, int>` stores two integer values together and provides access through `.first` and `.second`.
- **Nested Pair:** A pair can contain another pair, allowing multiple related values to be grouped together.
- **Array of Pairs:** An array can store several pairs and each pair can be accessed by its array index.

#### 📁 `03_Vectors.cpp` — Vector Basics

- **Dynamic Storage:** A vector is a sequence container that can grow as new values are added.
- **Adding Values:** `push_back()` and `emplace_back()` add values to the end of a vector.
- **Vector of Pairs:** `vector<pair<int, int>>` stores multiple pairs in one dynamic container.
- **Initialization and Copying:** Vectors can be created with a fixed size, filled with a default value, or copied into another vector.

#### 📁 `04_Vector_iterator.cpp` and `05_auto_in_vector.cpp` — Iterators and `auto`

- **Forward Iterators:** `begin()` points to the first element and `end()` points just after the last element.
- **Reverse Iterators:** `rbegin()` starts at the last element, while `rend()` points just before the first element.
- **Dereferencing:** The `*` operator reads the value stored at the iterator's current position.
- **`auto` Keyword:** `auto` lets the compiler identify the iterator type automatically.
- **Range-Based Loop:** `for(auto value : v)` directly visits every value without manually handling iterator boundaries.

#### 📁 `06_Erase_in_vector.cpp` — Erasing Elements

- **Single Element:** `v.erase(v.begin() + index)` removes one element from a selected position.
- **Range Erasure:** `v.erase(start, end)` removes elements from the start iterator up to, but not including, the end iterator.
- **Index Shifting:** After erasing an element, the values after it move toward the beginning of the vector.

#### 📁 `07_Insert_in_vector_and_copy_in_vector.cpp` — Inserting and Copying

- **Single Insertion:** `insert()` places a value before the selected iterator position.
- **Repeated Values:** `insert(position, count, value)` inserts the same value multiple times.
- **Range Insertion:** Iterators from another vector can copy a complete range into the current vector.
- **Vector Growth:** Inserting values increases the vector's size and shifts existing elements to make space.

#### 📁 `08_other_codes_in_vector.cpp` — More Vector Functions

- **`size()`:** Returns the current number of elements in a vector.
- **`pop_back()`:** Removes the last element.
- **`swap()`:** Exchanges all values between two vectors.
- **`clear()`:** Removes every element from a vector.
- **`empty()`:** Returns `true` when the vector contains no elements.

---

### 🧠 My Key Takeaways

- Binary search can find an integer square root efficiently, and precision can be added afterward using decreasing decimal factors.
- `pair` is useful when two related values need to be returned or stored together.
- Vectors are dynamic arrays with many built-in operations for adding, removing, and managing elements.
- Iterators provide a way to move through vector memory and are required by many STL functions.
- `auto` and range-based loops make vector traversal shorter and easier to read.
- `erase()` uses an inclusive start and exclusive end range: `[start, end)`.
- `insert()`, `swap()`, `clear()`, and `empty()` make it easier to manage vector contents.
