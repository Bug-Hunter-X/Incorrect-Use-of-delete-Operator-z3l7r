# C++ Bug: Incorrect Use of delete Operator

This repository demonstrates a common error in C++: incorrectly using the `delete` operator on a pointer to a variable allocated on the stack.  The `delete` operator should only be used with memory allocated using `new`. Using `delete` on stack-allocated memory can lead to unpredictable behavior and crashes.

**Bug:** The code in `bug.cpp` allocates an integer variable `x` on the stack and attempts to use `delete` on its pointer. This is incorrect and will likely cause a program crash or other undefined behavior.

**Solution:** The corrected code in `bugSolution.cpp` removes the `delete` statement as it is not needed for stack-allocated variables. 