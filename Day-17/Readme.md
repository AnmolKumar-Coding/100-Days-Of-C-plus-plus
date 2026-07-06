# Day 17 — Advanced Multi-Platform Logic & Stream Formatting

Today's session was dedicated to building resilient code on LeetCode and HackerRank. I focused heavily on implementing preventive math boundaries to safeguard memory space and utilizing stream manipulators for exact data presentation.

## 📋 What I Practiced

| File Name | Topic / Platform | Learning Objective |
| :--- | :--- | :--- |
| `0101_Leetcode_Problem_231.cpp` | LeetCode 231 (Power of Two) | Implementing exponential scaling loops with active predictive overflow checks. |
| `02_Hackerank_problems_Basic_Data_Types.cpp` | HackerRank (Basic Data Types) | Managing sequential multi-type inputs and precision formatting via `<iomanip>`. |

---

### 🔍 Code Explanations

#### 📁 0101_Leetcode_Problem_231.cpp — Multiplicative Boundary Safety
- **Sequential Target Check:** Initialized a tracking variable `ans = 1` and evaluated it directly against the target value `n` across loop iterations. The loop scales upward by doubling the baseline value (`ans *= 2`) during each cycle to sequentially map out powers of two ($2^0, 2^1, 2^2 \dots$).
- **The Predictive Guard:** Because the upcoming evaluation block multiplies `ans` by `2`, executing this on a value already greater than `INT_MAX / 2` would trigger an immediate integer overflow. The conditional safety block `if (ans >= INT_MAX/2)` catches this state early, breaking execution cleanly and returning `false`.

#### 📁 02_Hackerank_problems_Basic_Data_Types.cpp — High-Precision Stream Formatting
- **Multi-Type Token Intake:** Practiced capturing a continuous stream of mixed-type runtime data (`int`, `long long int`, `char`, `float`, and `double`) out of the input buffer sequentially using `cin`.
- **Decimal Stream Locking:** Combined `fixed` and `setprecision()` flags to completely restructure how the terminal processes floating-point data variables:
  - For `float f`: `cout << fixed << setprecision(3) << f;` locks presentation to exactly 3 fractional places.
  - For `double d`: `cout << fixed << setprecision(9) << d;` forces presentation to exactly 9 fractional places.

---

### 🧠 My Key Takeaways

- **Lookahead Defensive Math:** Bug-free programming requires checking the safety limits of an operation *before* running it, rather than trying to fix corrupted data after an overflow has already occurred.
- **Presentation vs. Storage Separation:** Memory structures store data in a pure binary format. Using tools like `<iomanip>` changes how the data looks on your monitor without modifying or degrading the underlying values inside your variables.