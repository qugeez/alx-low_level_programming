#include "main.h"
/**
 * _strlwn - find length of a sting
 * @s: pointer to the string to chech
 * return: void
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i])
	i++;
	return (i);
}
