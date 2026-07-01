# Day 12 — Learning For Loops, Fibonacci, and Prime Numbers

Today I practiced using `for` loops in different ways. I learned how to track multiple variables at the same time, print math series, and stop loops early to make the code faster.

## 📋 What I Practiced

| File Name | Topic | What I Learned |
| :--- | :--- | :--- |
| `01_For_loop.cpp` | For Loops | How to write loops without standard conditions, use `break`, and manage many variables at once. |
| `02_sum_from_1_to_n.cpp` | Summing Numbers | How to add up all numbers from 1 to N using a loop. |
| `03_Fibonacci_Series.cpp` | Fibonacci Series | How to print the Fibonacci sequence by updating variable values in a loop. |
| `04_is_it_prime.cpp` | Prime Numbers | How to check if a number is prime and stop the loop early if we find an answer. |

---

### 🔍 Code Explanations

#### 📁 01_For_loop.cpp — Different Loop Styles
- **Missing Conditions:** I learned that if you leave out the parts inside `for(;;)`, the loop never stops. I used a `break` statement inside an `if` condition to stop it safely.
- **Many Variables:** I made a loop that handles three variables (`a`, `b`, and `c`) all at the same time, making them count down together.

#### 📁 02_sum_from_1_to_n.cpp — Adding Numbers
- **Adding as We Go:** I used a `sum` variable starting at `0`. Inside the loop, `sum += i` adds the current number to the total until the loop finishes.

#### 📁 03_Fibonacci_Series.cpp — Shifting Numbers (My Win! 🎉)
- **Did It My Way First:** I made my own working version of the Fibonacci series by shifting the math inside the loop's update section (`a=b, b=sum, i++`).
- **The Teacher's Way:** I watched the explanation and saw how creating a simple `sum1` variable inside the loop makes the code much easier for others to read and understand.

#### 📁 04_is_it_prime.cpp — Finding Prime Numbers Fast
- **Using a Flag:** I used a boolean variable `bool isprime = 1;` to track if a number is prime or not.
- **Stopping Early:** If a number divides evenly (`n % i == 0`), we already know it is not prime. I used `break` to stop the loop right away so the computer doesn't waste time running the rest of the loop.