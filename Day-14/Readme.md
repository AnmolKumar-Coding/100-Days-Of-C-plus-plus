# Day 14 — Number Systems: Decimal and Binary

Today I focused on learning how numbers change back and forth between Decimal (our normal base-10 numbers) and Binary (the 0s and 1s that computers use). I focused on the math rules and formulas needed to make these conversions work.

## 📋 What I Learned

### 1. Changing Decimal to Binary
- **Using Bitwise Steps:** I learned that you can pull bits out of a number one by one by using `n & 1` to check the very last bit, and then using Right Shift (`n >> 1`) to move to the next bit.
- **Fixing the Backwards Order:** When you pull bits out, they naturally come out backwards. I learned a cool math trick to put them in the right order: `ans = (bit * 10^i) + ans`. This formula forces each new bit to sit at the front of the number so it reads correctly from left to right.

### 2. Handling Negative Numbers
- **How Computers Store Negatives:** I learned that computers cannot just put a minus sign in front of a binary number. Instead, they use a 3-step method:
  1. Find the normal positive binary number.
  2. Flip all the bits (turn 0s to 1s, and 1s to 0s).
  3. Add 1 to the final result.

### 3. Changing Binary Back to Decimal
- **Multiplying by 2:** To turn 0s and 1s back into a normal number, you take each digit from right to left and multiply it by increasing powers of 2 (like 1, 2, 4, 8, 16...). You add those all together using the formula: `ans = (digit * 2^i) + ans`.

---

### 🧠 My Key Takeaways
- Using bitwise operators (`&` and `>>`) is much faster for the computer than using normal division math.
- Using positional math formulas lets us arrange our digits perfectly inside a normal integer variable without needing to convert anything into text strings.
