### **1. Design an Algorithm to Find Maximum and Minimum Value in an Array of Size n**  
#### **Algorithm:**
```python
def find_min_max(arr):
    min_val = arr[0]
    max_val = arr[0]

    for num in arr:
        if num < min_val:
            min_val = num
        if num > max_val:
            max_val = num
    
    return min_val, max_val

# Example usage
arr = [5, 3, 8, 2, 9, 1]
min_value, max_value = find_min_max(arr)
print(f"Minimum: {min_value}, Maximum: {max_value}")
```

#### **Time Complexity Analysis:**
- **Best Case (Ω(n))** → If the array is already sorted, we still have to iterate once.
- **Worst Case (O(n))** → Every element is checked.
- **Average Case (θ(n))** → Each element is visited once.

---

### **2. Show that 2n² ∈ O(n³)**
#### **Proof:**
We use the definition of **Big-O notation**, which states that:  
If we can find **constants c > 0 and n₀ > 0** such that:

\[
0 \leq 2n^2 \leq c n^3  \quad \text{for all } n \geq n_0
\]

Let's choose **c = 2** and **n₀ = 1**:

\[
2n^2 \leq 2n^3
\]

For **n ≥ 1**, the equation holds true. Hence, **2n² ∈ O(n³)**.

---

### **3. Show that 3n² + 10n ∈ O(n²)**
#### **Proof:**
We need to find constants **c** and **n₀** such that:

\[
0 \leq 3n^2 + 10n \leq c n^2  \quad \text{for all } n \geq n_0
\]

Let's choose **c = 4** and **n₀ = 10**:

\[
3n^2 + 10n \leq 4n^2
\]

For **n ≥ 10**, the inequality holds. Hence, **3n² + 10n ∈ O(n²)**.

---

### **4. Show that n ∈ O(n log n)**
#### **Proof:**
We need to find **c** and **n₀** such that:

\[
0 \leq n \leq c (n \log n)  \quad \text{for all } n \geq n_0
\]

For **n ≥ 2**, we can choose **c = 1**:

\[
n \leq n \log n
\]

This holds true for **n ≥ 2**, so **n ∈ O(n log n)**.

---

### **5. Show that log n ∈ O(n)**
#### **Proof:**
We need to find **c** and **n₀** such that:

\[
0 \leq \log n \leq c n  \quad \text{for all } n \geq n_0
\]

For **n ≥ 1**, choosing **c = 1** gives:

\[
\log n \leq n
\]

Since **log n grows much slower than n**, this holds for all **n ≥ 1**. Hence, **log n ∈ O(n)**.

---

### **6. Show that 5n³ + 10n ≠ O(n²)**
#### **Proof (Contradiction):**
To be in **O(n²)**, we would need:

\[
5n^3 + 10n \leq c n^2
\]

Dividing both sides by **n²**:

\[
5n + 10/n \leq c
\]

For **large n**, **5n** dominates, meaning the left side grows indefinitely, while the right side is a constant.  
This contradiction proves that **5n³ + 10n ≠ O(n²)**.

---

Let me know if you need further explanations! 😊