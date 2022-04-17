#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdint.h>

/**
 * struct _formatter - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct _format
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} _formatter_t;

int print_add(va_list arg, char *buf, unsigned int buff_index);
char *print_s(va_list list);

#endif