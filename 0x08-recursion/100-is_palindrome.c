#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string to be checked
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * _check_palindrome - checks if palindrome
 * @beg: start point
 * @end: end point
 * @s: string
 * Return: 0 or 1
 */
int _check_palindrome(int beg, int end, char *s)
{
	if (beg < end)
	{
		if (s[beg] != s[end])
			return (0);
		return (_check_palindrome(beg + 1, end - 1, s));
	}
	return (1);
}

/**
 * is_palindrome - checks if is palindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s) - 1;

	return (_check_palindrome(0, i, s));
}
