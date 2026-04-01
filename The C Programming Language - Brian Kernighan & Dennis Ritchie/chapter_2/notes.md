# Chapter 2 notes

---
## Implicit arithmetic conversions
- If either operand is `long double`, convert the other to `long double`
- Otherwise, if either operand is `double`, convert the other to `double`
- Otherwise, if either operand is `float`, convert the other to `float`
- Otherwise, convert `char` and `short` to `int`
- Then, if either operand is `long`, convert the other to `long`.