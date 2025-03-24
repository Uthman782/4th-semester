### **Big-O Definition**  
Big-O notation describes the **upper bound** of an algorithm’s growth rate. It tells us the worst-case time complexity, ensuring that the algorithm does not take longer than a certain amount of time.  

#### **Formal Definition**  
A function \( f(n) \) is said to be **O(g(n))** (read as "Big-O of g(n)") if there exist **positive constants** \( c \) and \( n_0 \) such that:

\[
0 \leq f(n) \leq c \cdot g(n) \quad \text{for all } n \geq n_0
\]

#### **Explanation of Terms:**
- **\( f(n) \)** → Actual time complexity of the algorithm.
- **\( g(n) \)** → A simpler function that describes the upper bound.
- **\( c \)** → A constant multiplier.
- **\( n_0 \)** → The point from which the inequality holds.

### **Example Proof (Using Big-O Definition)**  
We want to show that:

\[
3n^2 + 10n \in O(n^2)
\]

#### **Step 1: Compare \( f(n) \) and \( g(n) \)**
- \( f(n) = 3n^2 + 10n \)  
- \( g(n) = n^2 \)  

We need to prove that:

\[
3n^2 + 10n \leq c n^2  \quad \text{for all } n \geq n_0
\]

#### **Step 2: Factor Out \( n^2 \)**
\[
3n^2 + 10n = n^2 (3 + \frac{10}{n})
\]

For **large \( n \)**, \( \frac{10}{n} \) becomes small.

#### **Step 3: Choose \( c \) and \( n_0 \)**
We want:

\[
3 + \frac{10}{n} \leq c
\]

For \( n \geq 10 \), the largest value of \( \frac{10}{n} \) is:

\[
\frac{10}{10} = 1
\]

So:

\[
3 + 1 = 4
\]

Thus, for \( c = 4 \) and \( n_0 = 10 \), we get:

\[
3n^2 + 10n \leq 4n^2
\]

which satisfies the **Big-O definition**.

### **Final Conclusion**
Since we found valid constants \( c = 4 \) and \( n_0 = 10 \), we have proved:

\[
3n^2 + 10n \in O(n^2)
\]


### **Big-O (O), Big-Omega (Ω), and Big-Theta (θ) Definitions**  

Just like **Big-O** describes the **upper bound** of an algorithm's growth, **Big-Omega (Ω)** describes the **lower bound**, and **Big-Theta (θ)** describes **the exact bound**.

---

### **1. Big-O (O) - Worst Case (Upper Bound)**
- **Definition:**  
  A function \( f(n) \) is **O(g(n))** if there exist **positive constants** \( c \) and \( n_0 \) such that:

  \[
  0 \leq f(n) \leq c \cdot g(n) \quad \text{for all } n \geq n_0
  \]

- **Meaning:**  
  - The algorithm will **never** take more than **c⋅g(n)** time.
  - **Example:**  
    - If \( f(n) = 3n^2 + 10n \), we showed earlier that \( f(n) \in O(n^2) \).

---

### **2. Big-Omega (Ω) - Best Case (Lower Bound)**
- **Definition:**  
  A function \( f(n) \) is **Ω(g(n))** if there exist **positive constants** \( c \) and \( n_0 \) such that:

  \[
  0 \leq c \cdot g(n) \leq f(n) \quad \text{for all } n \geq n_0
  \]

- **Meaning:**  
  - The algorithm will **at least** take **c⋅g(n)** time.
  - **Example:**  
    - If \( f(n) = 3n^2 + 10n \), we can prove that \( f(n) \in Ω(n^2) \), meaning it **at least** grows as fast as \( n^2 \).

---

### **3. Big-Theta (θ) - Tight Bound (Average Case)**
- **Definition:**  
  A function \( f(n) \) is **θ(g(n))** if there exist **positive constants** \( c_1, c_2, \) and \( n_0 \) such that:

  \[
  0 \leq c_1 \cdot g(n) \leq f(n) \leq c_2 \cdot g(n) \quad \text{for all } n \geq n_0
  \]

- **Meaning:**  
  - The algorithm's time complexity is **exactly** proportional to \( g(n) \) in both upper and lower bounds.
  - **Example:**  
    - If \( f(n) = 3n^2 + 10n \), we can prove \( f(n) \in θ(n^2) \), meaning it **grows exactly** at the rate of \( n^2 \).

---

### **Summary of Notation Differences**
| Notation  | Definition  | Meaning |
|-----------|------------|---------|
| **O(g(n))**  | \( f(n) \leq c \cdot g(n) \) | Upper bound (Worst case) |
| **Ω(g(n))** | \( c \cdot g(n) \leq f(n) \) | Lower bound (Best case) |
| **θ(g(n))** | \( c_1 \cdot g(n) \leq f(n) \leq c_2 \cdot g(n) \) | Tight bound (Average case) |

---

### **Visual Representation**
If \( f(n) \) is an algorithm's complexity and \( g(n) \) is a reference function:

```
Ω(g(n))        θ(g(n))       O(g(n))
------|-----------|-------------------
       |-----------|
```
- **Ω(g(n))** (Lower Bound) → Algorithm takes at least this much time.
- **θ(g(n))** (Tight Bound) → Algorithm takes this much time on average.
- **O(g(n))** (Upper Bound) → Algorithm takes at most this much time.