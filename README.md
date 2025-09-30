# Stack in C++

Name: Pal Jain   
PRN: 24070123067  
Class: ENTC A3 

---

## Theory

A **Stack** is a linear data structure that works on the **LIFO (Last In, First Out)** principle.

* The most recently inserted element is the first one to be removed.
* It supports two primary operations:

  * **Push** → Insert an element at the top of the stack.
  * **Pop** → Remove the element from the top of the stack.

---

## Representation

* A stack can be implemented using either **arrays** or **linked lists**.
* A variable (`top`) is used to keep track of the position of the top element.

---

## Program: Stack Implementation Using Array

### Logic

* A `Stack` class is defined with:

  * An array for storing elements.
  * An integer `top` to track the current top position.
* **push()** → Inserts a new element at the top.
* **pop()** → Removes the topmost element.
* **display()** → Prints all elements from bottom to top.
* Overflow and underflow conditions are checked before performing operations.

---

### Algorithm

1. Start
2. Define a class `Stack` with an array and a variable `top`.
3. Initialize `top = -1` (stack is empty).
4. **Push Operation**:

   * If `top >= MAX - 1` → Stack Overflow.
   * Else increment `top` and insert the value.
5. **Pop Operation**:

   * If `top < 0` → Stack Underflow.
   * Else remove the element and decrement `top`.
6. **Display Operation**:

   * Traverse the array from index `0` to `top` and print each element.
7. In `main()`, perform push and pop operations to test functionality.
8. End

---

## Conclusion

Stacks are a fundamental data structure widely used in:

* **Expression evaluation** (postfix, prefix conversions).
* **Function call management** (call stack in programming).
* **Undo/Redo operations** in applications.

Using arrays, stack operations can be implemented efficiently while properly handling **overflow** and **underflow** conditions.

