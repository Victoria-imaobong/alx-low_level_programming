#include "main.h"
/**
 * _strchr - locates a characterin a string
 * @s: string
 * @c: character
 * Return: returns null if character is not found in string
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s = i);
		}
	}
	if (s[i] == c)
		return (s + i);

	return (0);
}
