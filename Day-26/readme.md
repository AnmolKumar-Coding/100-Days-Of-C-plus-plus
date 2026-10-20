### Day 26 — Binary Search Patterns & Array Problem Solving

#### 📖 Topics Learned

```diff
+ Binary search on sorted arrays
+ Safe middle-index calculation
+ Finding first and last occurrence of an element
+ pair<int, int> for returning two answers
+ Peak index in a mountain array
+ Pivot index using left and right sums
+ Counting occurrences using sorting and vectors
```

#### 🎯 Achievement

- Practiced five array-based coding questions using searching, sorting, vectors, and functions.
- Learned binary search and used it in different problems instead of checking every value one by one.
- Found the first and last position of a repeated number in a sorted array.
- Used `pair<int, int>` to return two related answers from one function.
- Solved problems based on unique occurrences, mountain-array peaks, and pivot indexes.

#### 💡 Key Concepts

- **Binary Search:** Binary search works on sorted data. It checks the middle index and removes half of the remaining search area after every comparison, making the search much faster for large arrays.
- **Safe Middle Index:** I used `start + (end - start) / 2` to calculate the middle index. This is safer than directly adding `start + end`.
- **Counting Occurrences:** After sorting an array, equal values come together. I can count one group at a time, save each count in a vector, sort those counts, and check whether any two counts are the same.
- **First and Last Position:** When a matching value is found, I save its index but continue searching. Moving left helps find the first occurrence, while moving right helps find the last occurrence.
- **Using `pair`:** `pair<int, int>` stores two values together. I used `.first` for the first position and `.second` for the last position.
- **Mountain Array Peak:** By comparing the middle value with the next value, I can decide whether I am on the increasing side or decreasing side of a mountain array.
- **Pivot Index:** A pivot index is an index where the sum of values on the left equals the sum of values on the right. The pivot value itself is not included in either sum.