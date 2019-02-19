Tutorial 4
==========

Pointer is the most important topic in C language, and understanding how you
can manipulate memory is also the starting point of learning future knowledge
in CSO.

This tutorial gives you more exercises about pointer.

Type **make** to compile.

Exercise 1
------------
Carefully read e1.c and decide what is the correct value of **answer** on line
56 in order to print **3363486** instead of 1198. Note that you can only
modify line 56.

Hint: Try to figure out which function calls may change the value of
**answer** and which may not.

Question: From the mathematical view, there is only one solution. However,
there are multiple solutions for e1.c. Why?

Exercise 2
-----------
Implement a function printb() that takes a pointer to a 4 byte value and
prints its binary representation (preceded by `0b`). The skeleton code is in
**e2.c**.

Question: Can you NOT print out the leading zeros? (You will get the full
score even if you print out the leading zeros.)


What to submit and how to submit
----------------
Before submitting your solution, type **git diff** to see what youchange. 
Be sure to only change those lines or functions specified in above
descriptions.  You need to submit all two modified files.

**git add e1.c e2.c**  
**git commit -m "r04"**  
**git push origin master**  

**Due: Feb 20, 2019 11 PM**
