#include "main.h"

int check_pal(char *s, int i, int len);

/**
 * is_palindrome - checks if  a string is palindrome
 * @s: string to check
 *
 * Return: 1 if a string is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return the length of a string
 * @s: string to check
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: character array to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i > len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
