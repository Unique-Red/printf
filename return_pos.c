#include "main.h"
/**
 * return_position - return position on string
 * @s: string
 * @n: int
 * Return: i postion on string
 */
int return_position(const char *s, int n)
{
	int i;

	i = 0;

	while (*s)
	{
		if (s[n + 1] != ' ')
		{
			return (i);
		}
		n++;
		i++;
	}
	return (0);
}
