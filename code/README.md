# C++ Revision Guide (Chronological)

This revision guide is generated from your day-by-day C++ journey in this repository (`Day-03` to `Day-27`), including root and day-wise README notes plus `.cpp` practice files.  
It is organized in learning order for quick revision, using short syntax templates (not full solutions).

---

## Day 3 — First Program Structure

### Program skeleton, output, and line breaks
- **What/why:** The minimum structure needed to run C++ code and print output.
- **Header:**
  ```cpp
  #include <iostream>
  using namespace std;
  ```
- **Syntax:**
  ```cpp
  int main() {
      cout << "text" << endl;
  }
  ```
- **Common mistakes:** missing `;`, forgetting `main()`, incorrect quotes.

---

## Day 4 — Variables, Data Types, `sizeof`, and Operators

### Primitive data types and declarations
- **What/why:** Store different kinds of values.
- **Syntax:**
  ```cpp
  int a; char ch; bool ok; float f; double d;
  ```

### `sizeof`
- **What/why:** Checks memory used by a type/variable.
- **Syntax:**
  ```cpp
  int bytes = sizeof(a);
  ```

### Type conversion behavior (implicit)
- `char` to `int` and numeric values to `char` were observed.
- **Mistake:** assuming all numeric-to-char casts are readable characters.

### Operators
- **Arithmetic:** `+ - * / %`
- **Relational:** `== != < > <= >=`
- **Logical:** `&& || !`
- **Complexity:** constant-time for primitive values (`O(1)`).

---

## Day 5 — Input, Conditions, and `while`

### Input/output stream extraction
- **Syntax:**
  ```cpp
  cin >> a;
  cout << a;
  ```

### Branching: `if`, `else if`, `else`
- **What/why:** choose code path from conditions.
- **Syntax:**
  ```cpp
  if (cond1) { ... }
  else if (cond2) { ... }
  else { ... }
  ```

### `while` loop pattern
- **Syntax:**
  ```cpp
  int i = 1;
  while (i <= n) {
      // work
      i++;
  }
  ```
- **Mistake:** missing update causes infinite loop.

### Applied logic
- Even/odd with `% 2`, sign check, triangle validity with combined conditions.

---

## Day 6 — Loop Practice and Number Problems

### Running sum (`1..N`)
```cpp
int sum = 0;
while (num <= N) { sum += num; num++; }
```
- **Complexity:** `O(N)`.

### Factorial (iterative)
```cpp
long long ans = 1;
while (i <= n) { ans *= i; i++; }
```
- **Mistake:** overflow for large `n` with `int`.

### Prime-style checks and filtering
- Used divisibility tests (`%`) and conditional branching.

### Character class range checks
```cpp
if (ch >= 'a' && ch <= 'z') { ... }
```

### Unit conversion formula
```cpp
float c = (5.0f/9.0f) * (f - 32);
```

---

## Day 7 — Intro to Pattern Printing (Nested `while`)

### Nested loop pattern template
```cpp
int i = 1;
while (i <= n) {
    int j = 1;
    while (j <= m) {
        // print token
        j++;
    }
    cout << endl;
    i++;
}
```
- **What/why:** outer loop controls rows, inner loop controls columns.
- **Complexity:** usually `O(n^2)` for square patterns.

---

## Day 8 — Advanced Numeric Patterns

### Key formulas used
- Reverse columns: `value = n - j + 1`
- Continuous counter: `counter++`
- Row math: `value = i + j - 1`, `value = i - j + 1`

### Triangles and progressive boundaries
- Inner bound changed to `j <= i` or `j <= n-i+1`.
- **Mistake:** using wrong bound causes shifted/broken shapes.

---

## Day 9 — Character Patterns and Alignment

### ASCII arithmetic
- **Syntax:**
  ```cpp
  char c = 'A' + offset;
  ```
- **What/why:** map loop index to letters.

### Right alignment via spaces
```cpp
while (space <= n - i) { cout << "  "; space++; }
```
- Then print stars/characters after spaces.

---

## Day 10 — Palindromic and Multi-block Patterns

### Palindromic row build
1. leading spaces
2. ascending numbers
3. descending tail

### Dabangg-style multi-segment row
- left numeric block
- middle stars (left/right)
- right mirrored numeric block using expression mapping

- **Complexity:** generally `O(n^2)` due to nested loops.

---

## Day 11 — Bitwise Basics, Shifts, and Increment/Decrement

### Bitwise operators
- `&` AND, `|` OR, `~` NOT, `^` XOR
- **Syntax:**
  ```cpp
  int x = a ^ b;
  ```

### Bit shifts
- `x << k` ~ multiply by `2^k` (for non-overflowing positive ints)
- `x >> k` ~ divide by `2^k` (integer behavior depends on sign/implementation)

### Pre/Post increment
- `i++` returns old value then increments.
- `++i` increments first then returns new value.

### Short-circuit behavior
- `&&`/`||` examples with side effects were explored.

---

## Day 12 — `for` Loops, `break`, Fibonacci, Prime Check

### `for` loop forms
```cpp
for (init; condition; update) { ... }
for (;;) { if (stop) break; }
```

### Sum with `for`
```cpp
for (int i = 1; i <= n; i++) sum += i;
```

### Fibonacci updates
```cpp
int a = 0, b = 1;
for (...) {
    int next = a + b;
    a = b;
    b = next;
}
```

### Early exit with `break`
- Prime check stops at first divisor.
- **Complexity:** naive prime check `O(n)` in this stage.

---

## Day 13 — `continue`, Scope, Digit Decomposition, Hamming Weight

### `continue`
```cpp
if (skipCondition) continue;
```
- Skips remaining statements for that iteration.

### Variable scope
- Block variables (`{}`) are not accessible outside their block.

### Digits of a number
```cpp
int digit = n % 10;
n /= 10;
```
- Used for sum/product of digits.

### Count set bits using shift
```cpp
while (n > 0) {
    if ((n & 1) == 1) count++;
    n >>= 1;
}
```
- **Mistake:** precedence confusion; safer form is `((n & 1) == 1)`.

---

## Day 14 — Number System Concepts (Doc-focused)

### Decimal ↔ binary conversion ideas
- Build binary by checking last bit and shifting right.
- Build decimal using powers of 2 from binary digits.

### Negative numbers (2's complement)
1. write positive bits
2. invert bits
3. add 1

---

## Day 15 — Conversion Implementations

### Decimal to binary (integer representation of bits)
- **Headers:**
  ```cpp
  #include <math.h>
  ```
- **Syntax used:**
  ```cpp
  int bit = n & 1;
  ans += bit * pow(10, i);
  n >>= 1;
  ```

### Binary to decimal
```cpp
int digit = n % 10;
if (digit == 1) ans += pow(2, i);
n /= 10;
```
- **Complexity:** `O(number_of_digits)`.
- **Mistake:** `pow` returns floating-point; cast/precision care needed.

---

## Day 16 — Reverse Integer and Bitwise Complement

### Reverse integer with overflow guard
- **Headers:**
  ```cpp
  #include <limits.h>
  ```
- **Core idea:**
  ```cpp
  if (ans > INT_MAX/10 || ans < INT_MIN/10) return 0;
  ans = ans * 10 + digit;
  ```

### Bitwise complement with mask
```cpp
while (m != 0) {
    mask = (mask << 1) | 1;
    m >>= 1;
}
int ans = (~n) & mask;
```
- Handles `n == 0` as special case.

---

## Day 17 — Overflow-aware loops and Output Formatting

### Power-of-two check via doubling
- Includes predictive overflow guard using `INT_MAX/2` before doubling.

### Precision formatting
- **Headers:**
  ```cpp
  #include <iostream>
  #include <iomanip>
  ```
- **Syntax:**
  ```cpp
  cout << fixed << setprecision(3) << f;
  cout << fixed << setprecision(9) << d;
  ```
- **What/why:** controls displayed decimal places without changing stored value.

---

## Day 18 — `switch`, Nested `switch`, Fall-through

### Switch template
```cpp
switch (expr) {
    case value1: ...; break;
    case value2: ...; break;
    default: ...;
}
```
- Good for exact discrete matches.

### Mini calculator mapping
- Operator char (`+ - * /`) routed to corresponding operation.

### Intentional fall-through
- Currency-note count used cascading cases without `break`.
- **Mistake:** accidental missing `break` can cause bugs.

---

## Day 19 — Functions, Return Types, and Pass-by-Value

### Function declaration/definition
```cpp
return_type name(parameter_list) {
    // logic
    return value;
}
```

### `void` function
```cpp
void printCounting(int n) { ... }
```

### Reusable helpers practiced
- power, even/odd checker, factorial, nCr, AP formula, prime checker, Fibonacci nth term.

### Bit-count optimization (Brian Kernighan)
```cpp
while (n) {
    n = n & (n - 1);
    count++;
}
```
- **Complexity:** `O(number_of_set_bits)`.

### Pass-by-value concept
- Function gets a copy; original variable unchanged in caller.

---

## Day 20 — Arrays and Initialization Techniques

### Declaration and indexing
```cpp
int arr[10];
arr[0] = 5;
```
- Valid index range: `0` to `size-1`.

### Initialization forms
```cpp
int a[3] = {1, 5, 4};
int b[100] = {0};
int c[10] = {1};
```

### `fill` and `fill_n`
- **Header:**
  ```cpp
  #include <algorithm>
  ```
- **Syntax:**
  ```cpp
  fill(arr, arr + n, value);    //Here n is the size of the array.
  fill_n(arr, n, value);
  sort(arr , arr + n);
  ```
- **Complexity:** `O(n)`.

---

## Day 21 — Arrays with Functions, Min/Max, Sum

### Passing arrays to functions
```cpp
void fn(int arr[], int size) { ... }
```

### Manual min/max scan
- **Header for limits:**
  ```cpp
  #include <limits.h>
  ```
- **Template:**
  ```cpp
  int mn = INT_MAX, mx = INT_MIN;
  for (int i = 0; i < size; i++) {
      mn = min(mn, arr[i]);
      mx = max(mx, arr[i]);
  }
  ```
- `min()`/`max()` form needs:
  ```cpp
  #include <algorithm>
  ```

### Array sum
```cpp
int ans = 0;
for (int i = 0; i < size; i++) ans += arr[i];
```
- **Complexity:** `O(n)`.

### Important behavior
- Array modifications inside function affect original array.

---

## Day 22 — Linear Search and Reverse Array

### Linear search
```cpp
bool search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return true;
    }
    return false;
}
```
- **Complexity:** worst-case `O(n)`.

### Reverse array (two pointers)
- **Header:**
  ```cpp
  #include <utility> // swap
  ```
- **Template:**
  ```cpp
  int start = 0, end = size - 1;
  while (start < end) {
      swap(arr[start], arr[end]);
      start++; end--;
  }
  ```

---

## Day 23 — Alternate Swap, Unique, Duplicate (XOR + Loops)

### Alternate swap in pairs
```cpp
for (int i = 0; i < size - 1; i += 2) {
    swap(arr[i], arr[i + 1]);
}
```

### XOR properties used
- `x ^ x = 0`, `x ^ 0 = x`, XOR is associative/commutative.

### Unique number by XOR
```cpp
int ans = 0;
for (int i = 0; i < size; i++) ans ^= arr[i];
```
- **Condition:** works when duplicates are perfectly paired and one value is unique.
- **Complexity:** `O(n)`.

### Unique/duplicate via nested loops
- More general but slower.
- **Complexity:** `O(n^2)`.

### Duplicate in `[1..N-1]` with one repeated
```cpp
for each value in array: ans ^= value;
for i = 1 to N-1: ans ^= i;
```

---

## Day 24 — Intersection of Arrays, Vectors, `push_back`, `size`

### Vector basics
- **Header:**
  ```cpp
  #include <vector>
  ```
- **Syntax:**
  ```cpp
  vector<int> v;      //used to make a vector
  v.push_back(x);     //use to push the element in vector
  int n = v.size();   //used to find the size of vector 
  ```

### Intersection (sorted arrays, two pointers)
```cpp
int i = 0, j = 0;
while (i < n1 && j < n2) {
    if (a[i] == b[j]) { ans.push_back(a[i]); i++; j++; }
    else if (a[i] < b[j]) i++;
    else j++;
}
```
- **Complexity:** `O(n1 + n2)`.

### Intersection (unsorted arrays)
- Nested loops + marking used values (`INT_MIN`) to avoid reuse.
- **Header:** `#include <limits.h>` for marker.
- **Complexity:** `O(n1 * n2)`.

---

## Day 25 — Sorting, Pairs/Triplets, Duplicates, Dutch National Flag

### `sort()`
- **Header:**
  ```cpp
  #include <algorithm>
  ```
- **Vector syntax:**
  ```cpp
  sort(v.begin(), v.end());
  ```
- **Complexity:** `O(n log n)`.

### LeetCode 442 duplicate detection (negative marking)
```cpp
int hook = abs(nums[i]) - 1;
if (nums[hook] < 0) duplicate found;
else nums[hook] = -nums[hook];
```
- **Header:** `#include <cmath>` for `abs` in this code.
- **Complexity:** `O(n)`, extra auxiliary space `O(1)` (excluding output).
- **Condition:** values must map to valid indices (`1..n`).

### Pair sum (sorted + nested loops)
```cpp
sort(arr.begin(), arr.end());
for (int i = 0; i < n; i++)
  for (int j = i + 1; j < n; j++)
    if (arr[i] + arr[j] == target) ans.push_back({arr[i], arr[j]});
```
- **Complexity:** `O(n^2)` after sorting.

### Triplet sum (fixed + two pointers)
```cpp
sort(arr.begin(), arr.end());
for (int i = 0; i < n-2; i++) {
    int l = i + 1, r = n - 1;
    while (l < r) { ... }
}
```
- Skip duplicates for unique triplets.
- **Complexity:** `O(n^2)`.

### Sort 0/1 (two pointers)
```cpp
while (left < right) {
    while (arr[left] == 0 && left < right) left++;
    while (arr[right] == 1 && left < right) right--;
    if (left < right) swap(arr[left++], arr[right--]);
}
```
- **Complexity:** `O(n)`.

### Sort 0/1/2 (Dutch National Flag)
```cpp
int low = 0, mid = 0, high = n - 1;
while (mid <= high) {
    if (arr[mid] == 0) swap(arr[low++], arr[mid++]);
    else if (arr[mid] == 1) mid++;
    else swap(arr[mid], arr[high--]);
}
```
- **Complexity:** `O(n)`, space `O(1)`.
- **Important:** after swapping with `high`, do **not** increment `mid` immediately.

---

## Day 26 — Binary Search Patterns and Array Positions

### Count frequencies after sorting
- **Headers:**
  ```cpp
  #include <vector>
  #include <algorithm>
  ```

### Approach used
1. `sort(arr.begin(), arr.end())`
2. Build frequency list (`counts`) by scanning neighbors.
3. Sort `counts` and check adjacent duplicates.

```cpp
sort(arr.begin(), arr.end());
// build counts
sort(counts.begin(), counts.end());
for (int i = 0; i + 1 < counts.size(); i++) {
    if (counts[i] == counts[i + 1]) return false;
}
return true;
```
- **Complexity:** `O(n log n)` due to sorting.

### Binary search in a sorted array
```cpp
int mid = start + (end - start) / 2;
if (arr[mid] == key) return mid;
if (arr[mid] < key) start = mid + 1;
else end = mid - 1;
```
- Binary search requires sorted input.
- The midpoint formula avoids overflow from `start + end`.
- **Complexity:** `O(log n)`.

### First and last position of a target
- Run binary search twice.
- After finding the target, continue left for the first occurrence.
- Continue right for the last occurrence.
- Return both indexes with `pair<int, int>`.
- **Complexity:** `O(log n)`.

### Peak index in a mountain array
```cpp
if (arr[mid] < arr[mid + 1]) start = mid + 1;
else end = mid;
```
- On the increasing slope, move right.
- On the decreasing slope, keep `mid` as a possible peak.
- **Complexity:** `O(log n)`.

### Pivot index
- Compare the sum before each index with the sum after it.
- Exclude the pivot value from both sums.
- Return the first matching index, or `-1` if none exists.
- **Complexity of the practiced helper-function approach:** `O(n^2)`.

---

## Day 27 — Rotated Array Search and Integer Square Root

### Find the pivot in a rotated sorted array
```cpp
if (arr[s] <= arr[e]) return s;

while (s < e) {
    int mid = s + (e - s) / 2;
    if (arr[mid] >= arr[0]) s = mid + 1;
    else e = mid;
}
return s;
```
- The pivot is the index of the minimum element.
- If the array is already sorted, the pivot is `0`.
- **Complexity:** `O(log n)`.

### Search in a rotated sorted array
1. Find the pivot index.
2. If the target equals `arr[pivot]`, return the pivot.
3. Search either `[pivot, n - 1]` or `[0, pivot - 1]` with binary search.

```cpp
if (arr[pivot] <= key && key <= arr[n - 1])
    return BinarySearch(arr, key, pivot, n - 1);
return BinarySearch(arr, key, 0, pivot - 1);
```
- Keep the left search range ending at `pivot - 1`.
- **Complexity:** `O(log n)`.

### Integer square root
```cpp
long long s = 0, e = x;
while (s <= e) {
    long long mid = s + (e - s) / 2;
    if (mid * mid == x) return mid;
    if (mid * mid < x) s = mid + 1;
    else e = mid - 1;
}
return e;
```
- Returns the floor of `sqrt(x)`.
- Use `long long` for `mid * mid` to prevent overflow.
- **Complexity:** `O(log x)`.

---

## Common Mistakes to Watch (from these days)

- Missing `break` in `switch` when fall-through is not intended.
- Out-of-bounds array indexing (`index < size` must hold).
- Infinite loops due to missing counter update.
- Operator precedence confusion in bit checks (prefer parentheses).
- Integer overflow in repeated multiply/reverse logic.
- Using XOR method when problem conditions do not match.
- Forgetting required headers (`<algorithm>`, `<vector>`, `<limits.h>`, `<iomanip>`, `<utility>`, `<cmath>/<math.h>`).

---

## Quick Reference Index (By Topic)

| Topic | First Learned | Later Use/Expansion |
|---|---:|---|
| Program structure (`main`, `cout`, `endl`) | Day 3 | Used every day |
| Variables, data types, `sizeof`, operators | Day 4 | Day 5+ conditions/expressions |
| Input (`cin`) and conditions | Day 5 | All interactive programs |
| `while` loops | Day 5 | Pattern-heavy Days 7–10 |
| Nested loops/patterns | Day 7 | Advanced formulas Days 8–10 |
| Character/ASCII patterns | Day 9 | Alignment and pattern math |
| Bitwise (`&`, `or`, `~`, `^`, shifts) | Day 11 | Days 13, 16, 19, 23 |
| `for`, `break`, `continue` | Day 12 / Day 13 | Algorithm control in later days |
| Numeric conversion (decimal/binary) | Day 14 concepts, Day 15 code | Bit manipulation problems |
| Overflow handling | Day 16 | Day 17 guarded doubling |
| Formatting (`fixed`, `setprecision`) | Day 17 | Stream output control |
| `switch` and fall-through | Day 18 | Mini calculator, note counting |
| Functions, `void`, return types | Day 19 | Array/function composition onward |
| Pass-by-value | Day 19 | Function behavior understanding |
| Arrays and initialization | Day 20 | Searching/sorting days |
| `fill`, `fill_n` | Day 20 | Fast bulk initialization |
| Min/Max, sum of array | Day 21 | Scans and aggregations |
| Linear search | Day 22 | Baseline lookup strategy |
| Reverse array + `swap` | Day 22 | Two-pointer thinking |
| XOR unique/duplicate logic | Day 23 | Constraint-based optimization |
| Vectors, `push_back`, `.size()` | Day 24 | Pair/triplet and results storage |
| Intersection of arrays | Day 24 | Two-pointer and nested-loop variants |
| `sort()` | Day 25 | Pair/triplet/frequency solutions |
| Two pointers | Day 22 / Day 24 | Day 25 pair/triplet/sort 0-1 |
| Dutch National Flag | Day 25 | In-place 0/1/2 sorting |
| Unique occurrences | Day 26 | Frequency-count validation |
| Pivot search in rotated arrays | Day 27 | Rotated-array binary search |
| Integer square root | Day 27 | Binary search with overflow safety |

---

Use this file as a quick revision map: start from Day 3 and move forward in sequence whenever you revise.
