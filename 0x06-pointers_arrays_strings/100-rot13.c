#include "main.h"

/**
 * rot13 - encodes an string using  rot13
 * @s: input string
 *
 * Return: encoded string
*/

char *rot13(char *s)
{
	int i;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWYZABCDEFGHIJKLMnopqrstuvwyzabcdefghijklm";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
