#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Number of bytes to copy from the second string.
 * Return: Pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len = n;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		len++;
		i++;
	}

	s3 = malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
		return (NULL);
	len = 0;

	for (i = 0; s1[i]; i++)
		s3[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s3[len++] = s2[i];
	s3[len] = '\0';
	return (s3);
}
