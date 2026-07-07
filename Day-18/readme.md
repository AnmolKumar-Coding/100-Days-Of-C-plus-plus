# Day 18 — Multi-Way Branching & Intentional Fall-Through Control

Today's practice focused on structural alternatives to complex decision lines. I dived into how `switch` cases match identity tokens at compile time, built an interactive calculator using character parsing, and utilized intentional execution fall-through to track changing variable states.

## 📋 What I Practiced

| File Name | Topic | Learning Objective |
| :--- | :--- | :--- |
| `01_Switch.cpp` | Switch Cases & Control Flow | Implementing standard, fall-through, and multi-layered nested switch conditions. |
| `02_Mini_Calculator.cpp` | Functional Parsing | Mapping user character inputs onto arithmetic calculations using a switch structure. |
| `03_Calculating_Notes_of_of_currency.cpp` | State Mutation | Exploiting un-broken case blocks and modulo arithmetic to count currency distributions. |

---

### 🔍 Code Explanations

#### 📁 01_Switch.cpp — Discrete Identity Mapping
- **The Core Switch Machine:** Explored basic integer and character matching. If `n` yields `1`, execution routes directly to `case 1`. If a matching key isn't provided, execution falls back cleanly to the `default` routine, which I learned is entirely optional.
- **The Cascade Mechanics:** Documented how missing `break` lines cause execution to leak downwards. In the character example, inputting `'1'` executes `case '1'`, spills forward into `case 'a'`, and drops down into `case '2'` before finally getting intercepted and ejected by the active `break;` statement.
- **Hierarchical Nesting Tree:** Constructed a multi-level decision structure. When `num` matches `case 3`, it acts as a gateway that initializes a completely independent internal evaluation engine to safely audit a secondary variable (`character`).

#### 📁 02_Mini_Calculator.cpp — Arithmetic Logic Routing
- **Operator Selection:** Captured user inputs into two `float` variables (`a`, `b`) and processed a targeting character flag (`op`). 
- **Clean Execution Paths:** Evaluated the operator character via a switch stream to instantly divide, multiply, add, or subtract values while establishing a defensive `default` prompt to capture invalid operators.

#### 📁 03_Calculating_Notes_of_of_currency.cpp — Automated State Reduction
- **Intentional Fall-Through:** Created a custom trick by driving the switch using a static expression `switch(1)`. This forces execution to enter `case 1` and, by omitting `break` statements entirely, automatically cascades downwards through all subsequent cases.
- **Dynamic Variable Peeling:** Case 1 prints the number of 100-rupee notes using integer division (`money/100`), then trims down the value using `money %= 100`. The reduced amount falls directly into Case 2 to calculate 50-rupee notes, and continues down to 10-rupee and 1-rupee notes seamlessly without nested loops.

---

### 🧠 My Key Takeaways

- **Choosing the Right Control Shield:** When dealing with variable scales or range boundaries (e.g., `<=`, `>`, `&&`), `if-else` trees remain absolute. For matching explicit single values or characters, `switch` blocks provide cleaner structural symmetry and faster pipeline routing.
- **Creative Control Leaks:** While usually a bug caused by a missing `break`, intentional fall-through sequences are an incredibly powerful way to chain operations together when tracking changing variable states.