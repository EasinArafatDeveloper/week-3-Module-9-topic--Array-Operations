![Array Operations Banner](file:///C:/Users/WALTON/.gemini/antigravity/brain/02914493-a978-47e8-8cdf-a179656a6427/array_operations_banner_1776947023249.png)

# 🚀 Fundamental Array Operations & Competitive Programming

[![Codeforces Profile](https://img.shields.io/badge/Codeforces-Profile-blue?style=for-the-badge&logo=codeforces&logoColor=white)](https://codeforces.com/profile/easin_arafat)
[![Portfolio](https://img.shields.io/badge/Portfolio-Personal_Site-brightgreen?style=for-the-badge&logo=googlechrome&logoColor=white)](https://easin-portfolio.netlify.app/)

Welcome to my repository focused on **Mastering Array Manipulations** in C. This project showcases a blend of fundamental data structure operations and their applications in solving complex **Codeforces** problems. Designed with a focus on efficiency, logic, and clean code, this repo reflects my journey in building a solid foundation in Computer Science.

---

## 🛠️ Core Array Operations

Implementing these basic operations is the first step toward understanding how memory and data structures work at a low level.

### 🔹 1. In-Place Array Reversing (`reversing.c`)
- **Logic**: Implemented using the **Two-Pointer Technique**.
- **Efficiency**: Swaps elements from both ends moving inward, achieving $O(N)$ time complexity with $O(1)$ space complexity.
- **Key Skill**: Memory efficiency and pointer logic.

### 🔹 2. Element Insertion (`insert.c`)
- **Logic**: Dynamically shifts elements to the right to accommodate a new value at a specific index.
- **Key Skill**: Index management and edge-case handling.

### 🔹 3. Element Deletion (`delete.c`)
- **Logic**: Removes an element by shifting all subsequent elements to the left.
- **Key Skill**: Maintaining data continuity within sequential memory.

### 🔹 4. Value Swapping (`swap.c`)
- **Logic**: A fundamental utility used across many algorithms (sorting, reversing, etc.).
- **Key Skill**: Understanding temporary variable usage and reference handling.

---

## 🏆 Competitive Programming (Codeforces)

Applying theoretical knowledge to real-world competitive challenges. Here are the problems I've solved in this module:

| Problem | File | Concept Applied |
| :--- | :--- | :--- |
| **F. Reversing** | [F_Reversing.c](file:///e:/Phitron/Phitron%20-%20Batch%20-%209/week%203%20Module%209%20topic-Array%20Operations/F_Reversing.c) | Linear Array Reversal |
| **G. Palindrome Array** | [G_Palindrome_Array.c](file:///e:/Phitron/Phitron%20-%20Batch%20-%209/week%203%20Module%209%20topic-Array%20Operations/G_Palindrome_Array.c) | Symmetric Comparison / Two-Pointers |
| **M. Replace MinMax** | [M_Replace_MinMax.c](file:///e:/Phitron/Phitron%20-%20Batch%20-%209/week%203%20Module%209%20topic-Array%20Operations/M_Replace_MinMax.c) | Extremum Identification & Swapping |

---

## 🔍 Technical Deep Dive

### **Palindrome Detection**
In `G_Palindrome_Array.c`, I optimized the check by only iterating through half of the array. If `arr[i]` does not equal `arr[n-1-i]`, the function returns early, demonstrating the **Early Exit** optimization.

### **Min-Max Swapping**
In `M_Replace_MinMax.c`, the challenge was finding both the minimum and maximum indices in a single pass $O(N)$ and then performing a surgical swap. This demonstrates linear search efficiency.

---

## 📊 Skills Demonstrated

- **Language Proficiency**: Advanced C programming.
- **Algorithms**: Two-Pointers, Linear Search, In-place manipulations.
- **Problem Solving**: Translating complex problem statements into efficient C code.
- **Code Quality**: Clean, documented, and recruiter-ready implementations.

---

## ⚙️ How to use this repository

1. **Clone the repository**:
   ```bash
   git clone <repo-url>
   ```
2. **Compile any file**:
   ```bash
   gcc F_Reversing.c -o solution
   ```
3. **Run the executable**:
   ```bash
   ./solution
   ```

---
<div align="center">
  <h3>Connect with me</h3>
  <p>Exploring the world of Algorithms & Data Structures, one problem at a time.</p>
  <a href="https://codeforces.com/profile/easin_arafat">
    <img src="https://img.shields.io/badge/Codeforces-easin__arafat-FFD700?style=flat-square&logo=codeforces&logoColor=white" alt="Codeforces Profile" />
  </a>
  <a href="https://easin-portfolio.netlify.app/">
    <img src="https://img.shields.io/badge/Portfolio-Website-blue?style=flat-square&logo=react&logoColor=white" alt="Portfolio" />
  </a>
</div>
