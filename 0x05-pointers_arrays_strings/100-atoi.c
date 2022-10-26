#include <stdio.h>
#include "main.h"

/**
 * _atoi - Convert a string into an int
 * @s: the string to convert
 * Return: A number
 */
int _atoi(char *s)
{
	unsigned int count = 0, len = 0, i = 0, j = 0, n = 1, m;

	while (*(s + count) != '\0')
	{
		if (len > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			j *= -1;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (len > 0)
				n *= 10;
			len++;
		}
		count++;
	}

	for (m = count - len; m < count; m++)
	{
		i = i + ((*(s + m) - 48) * n);
		n /= 10;
	}
	return (i * j);

}
