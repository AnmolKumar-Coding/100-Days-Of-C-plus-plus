# Day 21 — Arrays with Functions, Min/Max, and Sum

Today I learned how arrays work with functions. I practiced printing arrays, finding minimum and maximum values, changing array values inside functions, and finding the total sum.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_Arrays_with_functions.cpp` | Arrays with Functions | How to pass an array and its size to a function. |
| `02_Min_and_max_values_in_arrays.cpp` | Min and Max | How to find the smallest and largest value using loops. |
| `03_Min_and_Max_with_predefined_code.cpp` | `min()` and `max()` | How to use predefined functions for minimum and maximum values. |
| `04_Scope_Of_Arrays.cpp` | Array Scope | How array changes inside a function affect the original array. |
| `05_sum_of_elements_of_arrays.cpp` | Array Sum | How to add all array elements using a loop. |

---

### 🔍 Code Explanations

#### 📁 `01_Arrays_with_functions.cpp` — Printing an Array

- **Passing the Array:** I passed the array and its size to a function.
- **Looping:** The function used a loop to print every value in the array.

#### 📁 `02_Min_and_max_values_in_arrays.cpp` — Finding Min and Max

- **Starting Values:** I used `INT_MIN` for maximum and `INT_MAX` for minimum.
- **Checking Values:** The loop compared every array value and updated the answer when needed.

#### 📁 `03_Min_and_Max_with_predefined_code.cpp` — Using Built-In Functions

- **`max()`:** It keeps the bigger value.
- **`min()`:** It keeps the smaller value.

#### 📁 `04_Scope_Of_Arrays.cpp` — Array Changes in Functions

- **Original Array:** The function changes the real array, not a copy.
- **Testing:** I changed the first value inside the function and printed the array again in `main()`.

#### 📁 `05_sum_of_elements_of_arrays.cpp` — Finding the Total Sum

- **Running Total:** I started `ans` from `0`.
- **Adding Values:** I used `ans += array[i]` to add every array element.

---

### 🧠 My Key Takeaways

- Always pass the array size with an array function.
- Arrays can be changed inside a function.
- `INT_MIN` and `INT_MAX` are useful while finding values safely.
- Small functions make array programs easy to read.