#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints out half of the word id the length of the word is odd
 * @str: the string
 */

void puts_half(char *str)
{
	if (strlen(str % 2))
	{
		printf("%s",str[n]);
	}
	else
	{
		printf("%s\n", str + strlen(str) / 2);
	}
}
