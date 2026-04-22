# Week 3: Module 9 - Fundamental Array Operations in C

This repository contains a collection of fundamental array operations implemented in C. These exercises are part of the Phitron Batch 9 curriculum and focus on mastering the core concepts of data manipulation within arrays.

## 🚀 Overview

Array manipulation is a foundational skill for any software engineer. In this module, I have implemented several key operations that demonstrate a deep understanding of memory management, indexing, and algorithmic efficiency in C.

---

## 🛠️ Operations Implemented

### 1. Element Insertion (`insert.c`)
- **Concept**: Adding a new element at a specific index without losing existing data.
- **Implementation**: 
    - Dynamically takes the array size and elements as input.
    - Specifies target index and value.
    - Shifts elements to the right to create space.
    - **Complexity**: $O(n)$ time complexity due to element shifting.

### 2. Element Deletion (`delete.c`)
- **Concept**: Removing an element from a specific index and maintaining array continuity.
- **Implementation**:
    - Identifies the target element by index.
    - Shifts all subsequent elements to the left.
    - Effectively reduces the logical size of the array.
    - **Complexity**: $O(n)$ time complexity.

### 3. Array Reversing (`reversing.c`)
- **Concept**: Reversing the order of elements within the array.
- **Implementation**:
    - Uses the **Two-Pointer Technique** (highly efficient).
    - Swaps elements from the start (`i`) and end (`j`) of the array, moving towards the middle.
    - Operates **in-place**, meaning no extra memory is used for a second array.
    - **Complexity**: $O(n/2)$ which simplifies to $O(n)$.

### 4. Variable Swapping (`swap.c`)
- **Concept**: The fundamental mechanism used in sorting and reversing algorithms.
- **Implementation**: Demonstrates the logic of using a temporary variable to exchange values between two memory locations.

---

## 💻 Tech Stack
- **Language**: C
- **Compiler**: GCC
- **Core Concepts**: Indexing, Loops, In-place modification, Two-pointer technique.

---

## 📖 How to Run

1. **Prerequisites**: Ensure you have a C compiler (like GCC) installed on your system.
2. **Compilation**:
   ```bash
   gcc filename.c -o filename
   ```
3. **Execution**:
   ```bash
   ./filename
   ```

---

## 🎯 Key Learning Outcomes
As a developer, these exercises helped me solidify:
- **Index Management**: Preventing "off-by-one" errors during insertion and deletion.
- **Algorithmic Thinking**: Implementing efficient "in-place" algorithms like array reversal.
- **Resource Efficiency**: Understanding how shifting elements impacts performance in linear data structures.

---
*Developed as part of my continuous learning journey in Computer Science fundamentals.*
