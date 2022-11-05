#include "main.h"

/**
 * _strlen - Return the string length.
 * @s: The string to mesure.
 * Return: The length.
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}

/**
 * chk_palindrome - Checks if string is palindrome.
 * @s: The string to check.
 * @len: The length of s.
 * @i: The index of s.
 * Return: If palindrome 1. Otherwise 0.
 */
int chk_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (chk_palindrome(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - Checks if string is a palindrome.
 * @s: The string to check.
 * Return: If palindrome 1. Otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (!(*s))
		return (1);
	return (chk_palindrome(s, len, 0));
}
