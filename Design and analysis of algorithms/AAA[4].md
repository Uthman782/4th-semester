### **What is Asymptotic Analysis?**
It is a way to analyze how the running time of an **algorithm** grows as the **input size (n)** increases. Instead of exact numbers, we focus on the **growth rate** or **order of growth**.

---

### **Why Ignore Constants & Lower Order Terms?**
- We **only care about how an algorithm scales**, not exact execution time.
- **Example:**
  - Algorithm A takes **5n² + 3n + 10** steps.
  - Algorithm B takes **n²** steps.
  - **Both grow as n²**, so we ignore smaller terms and constants.

---

### **Common Growth Rates (Big-O Complexity Classes)**
1. **Constant Time – O(1)** → Fastest
   - Example: `return arr[0];` (Accessing first element in an array)

2. **Logarithmic Time – O(log n)**
   - Example: **Binary Search**
   - Cuts problem size in half each time.

3. **Linear Time – O(n)**
   - Example: **Looping through an array**

4. **Linearithmic Time – O(n log n)**
   - Example: **Merge Sort, Quick Sort (Average Case)**

5. **Quadratic Time – O(n²)**
   - Example: **Nested loops (Bubble Sort, Selection Sort)**

6. **Exponential Time – O(2ⁿ)**
   - Example: **Solving a problem recursively for all possibilities (e.g., Fibonacci using recursion)**

7. **Factorial Time – O(n!)** → Slowest
   - Example: **Solving Traveling Salesman Problem with brute force**

---

### **Asymptotic Notations**
1. **Big-O (O) → Worst Case**
   - Maximum time an algorithm will take.
   - Example: **O(n²)** for Bubble Sort.

2. **Theta (θ) → Average Case**
   - Expected running time.
   - Example: **θ(n log n)** for Merge Sort.

3. **Big-Omega (Ω) → Best Case**
   - Minimum time required.
   - Example: **Ω(n)** for Linear Search.

4. **Small-o (o) → Strict Upper Bound**
   - The function grows strictly slower than another.
   - Example: **o(n²) means it’s slower than O(n²) but faster than O(n³).**

5. **Small-Omega (ω) → Strict Lower Bound**
   - The function grows strictly faster.
   - Example: **ω(n log n) means it grows faster than O(n log n) but slower than O(n²).**

---

### **Comparing Algorithm Efficiency**
- **O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)**
- **Algorithms with smaller growth rates are more efficient.**

---

Would you like me to add examples or clarify anything further? 😊