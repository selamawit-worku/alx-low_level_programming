#include "main.h"

/**
 * _str_len_rec - str
 * @s: str ptr
 * Return: int
 */

int _str_len_rec(char *s)
{
	if(*s == '\0')
		return (0);
	return (_str_len_rec(s + 1) + 1);
}

/**
 * palin_rec - rec palindrome
 * @s: str ptr
 * @i: i
 * @j: j
 * Return: int
 */

int palin_rec(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] - s[j]);
	if (s[i] != s[j])
		return (0);
	return (palin_rec(s, i + 1, j - 1));
}

/**
 * is_palindrome - identify string as palindrome
 * @s: str ptr
 * Return: int
 */

int is_palindrome(char *s)
{
	int len;

	len = _str_len_rec(s);
	if (len == 0 || *s != s[len - 1])
		return (0);
	return (palin_rec(s, 0, len - 1));
}
