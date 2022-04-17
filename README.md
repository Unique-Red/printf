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

# Authors
<a href="https://github.com/Unique-Red/printf">Noah Useghan</a>
<br/>
<a href="https://github.com/bryansomto/printf">Ike-Adinnu Somtochukwu</a>



# End