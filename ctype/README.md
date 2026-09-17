# Custom implementation of <ctype.h>

This directory contains custom implementations of the functions provided by the standard C library `<ctype.h>` header. The primary goal is to understand character classification, ASCII mapping, and bit/value manipulations at a low level without relying on standard library binaries.

## What is `<ctype.h>`?

In the C standard library, `<ctype.h>` declares a set of functions used to test and map individual characters. 

Instead of treating characters merely as text, C represents characters internally as small integers corresponding to their values in the ASCII table (ranging from `0` to `127` for standard ASCII). The `<ctype.h>` header provides fast, lightweight routines to inspect these character values.

## Key Categories & Functions

### 1. Character Testing Functions
These functions return a non-zero integer (`true`) if the passed character meets the specific criteria, and `0` (`false`) if it does not:

* **`ft_isalpha(int c)`**: Checks if the character is alphabetic (`A-Z` or `a-z`).
* **`ft_isdigit(int c)`**: Checks if the character is a decimal digit (`0-9`).
* **`ft_isalnum(int c)`**: Checks if the character is alphanumeric (`isalpha` or `isdigit`).
* **`ft_isascii(int c)`**: Checks if the character fits within the standard 7-bit ASCII set (`0` through `127`).
* **`ft_isprint(int c)`**: Checks if the character is printable, including space (`32` through `126`).
* **`ft_isspace(int c)`**: Checks for white-space characters (space `' '`, form feed `'\f'`, line feed `'\n'`, carriage return `'\r'`, horizontal tab `'\t'`, vertical tab `'\v'`).
* **`ft_isupper(int c)` / `ft_islower(int c)`**: Checks if the character is uppercase or lowercase.
* **`ft_ispunct(int c)`**: Checks for any printable character that is not a space or an alphanumeric character.
* **`ft_isgraph(int c)`**: Checks for any printable character except space.

### 2. Case Mapping Functions
These functions convert character casing:

* **`ft_toupper(int c)`**: Converts a lowercase letter to uppercase.
* **`ft_tolower(int c)`**: Converts an uppercase letter to lowercase.

---

## How it Works Under the Hood

### Parameter Type (`int c`)
Although these functions process single characters, they accept an `int` parameter rather than a `char`. This design choice allows the functions to handle any valid `unsigned char` value as well as `EOF` (End-Of-File), which is typically defined as `-1`.

### ASCII Range Checking
Character classification functions evaluate where the integer representation of `c` falls on the ASCII chart. 

For example, checking if a character is an uppercase letter involves comparing its ASCII value to the range `['A', 'Z']` (`65` to `90`):

```c
int ft_isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}
