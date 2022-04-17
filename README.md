## Printf
---

### Summary
This is a simple implementation of printf function that formats and prints data
---

### Representation
The _printf() function produces output according to a format which is described below. This function write its output to the the standard output stream, stdout. It returns the count of printed characters when the function is successful and 1 when the function fails.

The available conversion specifiers are:
---

* %c: Prints a single character.

* %d: Prints integers.

* %b: Prints the binary representation of an unsigned decimal.

* %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters

* %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters

* %R: Prints the Rot13 interpretation of a string

* %s: Prints a string of characters.


### Usage
---

* All the files are to be compiled on Ubuntu 14.04 LTS

* Include the "main.h" header file on the functions using the _printf()

* Compile your code with  $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
---

### Example
---
```
#include "main.h"
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
  int a;
  int b;
  char *str;

  str = "school";
  a = _printf("%r\n", "Alx"); /*expected: xlA*/
  printf("--->%d\n", a); /*expected: 10*/

  b = _printf("%r\n", str); /*expected: loohcs*/
  printf("%d\n", b); /*expected: 7*/

  b = _printf("%r\n", str); /*expected: loohcs*/
  printf("%d\n", b); /*expected: 7*/
  return (0);
}
```
---
### File Functions
---

_printf.c
Custom Printf Function That Performs Formatted Output Conversion And Print Data.

#### main.h
Header File Were All Prototypes Are Saved.

#### get_print_func.c
Pointer To A Function That Selects The Correct Function To Perform The Operation.

#### print_buf.c
Function That Prints The Buffer.

#### handl_buf.c
Function That Concatenates The Buffer Characters.

#### print_chr.c
Function That Writes The Character C To Stdout.

/* Indetifier : %c */
#### print_str.c
Function That Writes The String To Stdout.

/* Indetifier : %s */
#### print_int.c
Function That Prints An Integer.

/* Indetifier : %i or %d */
#### print_bnr.c
Function That Prints Decimal In Binary.

/* Indetifier : %b */
#### print_oct.c
Function That Prints Decimal In Octal.

/* Indetifier : %o */
#### print_hex.c
Function That Prints Decimal In Hexadecimal.

/* Indetifier : %x */
#### print_upx.c
Function That Prints Decimal In Uppercase Hexadecimal.

/* Indetifier : %X */
#### print_usr.c
Function That Prints A String And Values Of Non-Printed Chars.

/* Indetifier : %S */
#### print_unt.c
Function That Prints An Unsigned Integer.

/* Indetifier : %u */
#### print_rev.c
Function That Writes The String To Stdout In Reverse.

/* Indetifier : %r */
#### print_rot.c
Function That Writes The String To Stdout In Rot13.

/* Indetifier : %R */
#### print_add.c
Function That Prints The Address Of An Input Variable.

/* Indetifier : %p */
#### print_long_oct.c
Function That Prints Long Decimal Number In Octal.

/* Indetifier : %lo */
#### print_long_hex.c
Function That Prints Long Decimal Number In Hexadecimal.

/* Indetifier : %lx */
#### print_long_int.c
Function That Prints A Long Integer.

/* Indetifier : %li */
#### print_long_upx.c
Function That Prints A Long Decimal In Uppercase Hexadecimal.

/* Indetifier : %lX */
#### print_long_unt.c
Function That Prints A Long Unsigned Integer.

/* Indetifier : %lu */
#### print_short_oct.c
Function That Prints Short Decimal Number In Octal.

/* Indetifier : %ho */
#### print_short_hex.c
Function That Prints Short Decimal Number In Hexadecimal.

/* Indetifier : %hx */
#### print_short_int.c
Function That Prints A Short Integer.

#### print_short_upx.c
Function That Prints A Short Decimal In Uppercase Hexadecimal.

/* Indetifier : %hX */
#### print_short_unt.c
Function That Prints A Short Unsigned Integer.

/* Indetifier : %hu */
#### print_num_hex.c
Function That Print A Number In Hexadecimal Begining With 0 And x.

/* Indetifier : %#x */
#### print_num_oct.c
Function That Prints A Number In Octal Begining With 0 And o.

/* Indetifier : %#o */
#### print_num_upx.c
Function That Prints A Number In Uppercase Hexadecimal.

/* Indetifier : %#X */
#### print_plus_int.c
Function That Prints An Integer With Plus Symbol.

/* Indetifier : %+i */
#### print_space_int.c
Function That Prints An Integer Begining With 0 And u.

/* Indetifier : % i */
#### ev_print_func.c
Function That Returns The Amount Of Indetifiers.


# Authors
<a href="https://github.com/Unique-Red/printf">Noah Useghan</a>
<a href="https://github.com/bryansomto/printf">Ike-Adinnu Somtochukwu</a>
<br/>
 

 
 # End
=======