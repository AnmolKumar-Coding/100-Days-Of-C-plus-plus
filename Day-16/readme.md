# Day 16 — LeetCode Practice: Reverse Integer & Bitwise Complement

Today I jumped onto LeetCode to practice my logic skills by solving two problems. It was a great way to use loops, digits, and bitwise operations in real coding questions.

### 1. Reversing an Integer (LeetCode 7)
- **Modulus and Division**: I used `x % 10` to grab the last digit of the number, and `x /= 10` to chop that digit off and move to the next one.
- **Building the Answer**: To build the reversed number, I used `ans = (ans * 10) + digit`. This shifts the previous digits to the left to make room for the new one.
- **Handling Overflow**: Integers have strict memory limits. Before multiplying by 10, I added an `if` check to see if `ans` goes past `INT_MAX / 10` or `INT_MIN / 10`. If it does, it returns `0` instantly so the code doesn't crash.

### 2. Bitwise Complement (LeetCode 1009)
- **The Edge Case**: First, I handled the number `0` separately. The complement of 0 is just 1.
- **Creating a Bitmask**: I needed a mask of 1s that matches the exact length of the binary number. I used a `while` loop to shift the mask left `mask << 1` and add a `1` using the OR operator `| 1` for every bit in the original number.
- **Flipping the Bits**: Finally, I used the NOT operator `~n` to flip all the bits of the number, and then used the AND operator `& mask` to clean up the front bits and keep only the ones I needed.
