#include "main.h"
#include <stdio.h>
/**
 * print_add - prints the address of a variable
 * @arg: .
 * @buf: buffer pointer.
 * @buff: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int print_add(va_list arg, char *buf, unsigned int buff)
{
	void *add;
	long int int_input;
	int i, count, first_digit, isnegative;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	add = (va_arg(arg, void *));
	if (add == NULL)
	{
		for (i = 0; nill[i]; i++)
			buff = handl_buf(buf, nill[i], buff);
		return (5);
	}
	int_input = (intptr_t)add;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = fill_hex_array(binary, hexadecimal, 0, 16);
	buff = handl_buf(buf, '0', buff);
	buff = handl_buf(buf, 'x', buff);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			buff = handl_buf(buf, hexadecimal[i], buff);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
