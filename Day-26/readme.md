# Day 26 — Learning Binary Search and Array Positions

Today, I practiced different array problems and started using binary search in more than one way. I learned that binary search is not only for finding one number; it can also help find positions, peaks, and boundaries in sorted arrays.

## What I Practiced

| File | What I Practiced |
|---|---|
| `01_leetcode_question_1207.cpp` | Checking whether every number has a unique occurrence count |
| `02_Binary_search.cpp` | Searching for a number in a sorted array |
| `03_ First_and_Last_Position_of_an_Element_In_Sorted_Array.cpp` | Finding the first and last index of a target value |
| `04_LeetcodeQuestion_852_Peak_Index_in_a_Mountain_Array.cpp` | Finding the peak index in a mountain array |
| `05_LeetcodeQuestion_724_Find_Pivot_Index.cpp` | Finding an index with equal left and right sums |

---

## Important Code Explanations

### 1. Unique Number of Occurrences

In this question, I first sorted the vector using:

```cpp
sort(arr.begin(), arr.end());
```

After sorting, equal values come next to each other. I used `current_count` to count how many times each number appears. Each completed count is saved in another vector.

Then I sorted the count vector and checked neighbouring counts. If two counts are the same, the answer is `false`. Otherwise, the answer is `true`.

### 2. Binary Search

Binary search only works after the array is sorted.

```cpp
int mid = initial + (final - initial) / 2;
```

I check the middle value:

- If it matches the key, I return its index.
- If the middle value is smaller, I search the right half.
- If the middle value is bigger, I search the left half.

If the key is not found, the function returns `INT_MIN`, and the main function prints that the key is not present.

### 3. First and Last Position of an Element

This file uses binary search two times.

For the first occurrence, when I find the key, I save the index and continue searching on the left side:

```cpp
finals = mid - 1;
```

For the last occurrence, when I find the key, I save the index and continue searching on the right side:

```cpp
initial = mid + 1;
```

Finally, I used `pair<int, int>` to return both answers together:

```cpp
answers.first
answers.second
```

### 4. Peak Index in a Mountain Array

A mountain array first increases and then decreases.

I compare the middle value with the next value:

```cpp
if(arr[mid] < arr[mid + 1])
```

- If true, I am on the increasing side, so the peak is on the right.
- Otherwise, I am at the peak or on the decreasing side, so I move the ending index to `mid`.

When `start` and `end` become equal, that index is the peak.

### 5. Pivot Index

A pivot index has equal sums on both sides.

I made two helper functions:

- `Leftsum()` adds all values before the current index.
- `Rightsum()` adds all values after the current index.

For every index, I compare both sums. If they are equal, I return that index. If no pivot index exists, the program returns `-1`.

## My Key Takeaways

- Binary search needs sorted data.
- The way I move `start` and `end` decides whether I find the correct answer.
- `pair<int, int>` is useful when one function needs to return two related values.
- Sorting can make counting repeated values much easier.
- Array problems often become clearer when I split the work into small helper functions.