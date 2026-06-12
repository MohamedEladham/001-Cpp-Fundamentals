# Bitwise AND Operator (&)

## Overview

The Bitwise AND operator (`&`) compares each bit of two numbers.

It returns `1` only when both corresponding bits are `1`.

## Truth Table

| Bit A | Bit B | A & B |
|--------|--------|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

---

## Example 1

```cpp
cout << (8 & 7) << endl;
```

Binary Representation:

```text
  8 = 00001000
  7 = 00000111
----------------
AND = 00000000
```

Result:

```text
0
```

---

## Example 2

```cpp
cout << (12 & 10) << endl;
```

Binary Representation:

```text
 12 = 00001100
 10 = 00001010
----------------
AND = 00001000
```

Result:

```text
8
```

---

## Example 3

```cpp
cout << (5 & 3) << endl;
```

Binary Representation:

```text
  5 = 00000101
  3 = 00000011
----------------
AND = 00000001
```

Result:

```text
1
```

---

## Example 4

```cpp
cout << (15 & 7) << endl;
```

Binary Representation:

```text
 15 = 00001111
  7 = 00000111
----------------
AND = 00000111
```

Result:

```text
7
```

---

## How Bitwise AND Works

The operator compares each bit position independently:

```text
1 & 1 = 1
1 & 0 = 0
0 & 1 = 0
0 & 0 = 0
```

If both bits are `1`, the result is `1`.

Otherwise, the result is `0`.

---

## Common Uses

- Working with binary data.
- Low-level programming.
- Embedded systems.
- Bit masking.
- Permission and flag management.
- Performance optimizations.

---

## Key Takeaway

The Bitwise AND operator (`&`) returns a new value whose bits are `1` only where both input numbers have `1` in the same bit position.

