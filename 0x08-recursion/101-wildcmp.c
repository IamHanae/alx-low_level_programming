#include "main.h"

/**
 * strlen_noWilds - Return the length of s.
 * @s: The string to mesure.
 * Return: The length.
 */
int strlen_noWilds(char *s)
{
	int len = 0;
	int i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			len++;
		i++;
		len += strlen_noWilds(str + i);
	}
	return (len);
}

/**
 * iter_wild - Iterate through s to locate a *
 * @s: The string to iterate through.
 * Return: Void
 */
void iter_wild(char **s)
{
	if (**s == '*')
	{
		(*s)++;
		iter_wild(s);
	}
}

/**
 * postfix_match - Check if two strings match.
 * @s: The string to match.
 * @postfix: The postfix
 * Return: If identical, a pointer to the last byte location
 * Otherwise, a pointer to the first unmatch char
 */
char *postfix_match(char *s, char *postfix)
{
	int len = strlen_noWilds(s) - 1;
	int postfix_len = strlen_noWilds(postfix) - 1;

	if (*postfix == '*')
		iter_wild(&postfix);
	if (*(s + len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(s, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: If identical 1, Otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iter_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
