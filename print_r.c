#include "main.h"

/**
 * print_r - print reverse
 * @list: va_list
 *
 * Return: string
 */
char *print_r(va_list list)
{
	char *s, *z;
	char w[1024];
	char b;
	int a, x, y;

	z = w;
	s = va_arg(list, char *);
	if (s == NULL)
		return (s = "(null)");

	y = _strlen(s);
	x = _strlen(s) / 2;

	a = 0;
	while (s[a] != '\0')
	{
		w[a] = s[a];
		a++;
	}

	for (a = 0; a < x; a++)
	{
		b = w[a];
		w[a] = w[y - 1 - a];
		w[y - 1 - a] = b;
	}
	w[y] = '\0';
	return (z);
}
