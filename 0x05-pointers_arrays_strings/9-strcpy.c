#include "main.h"

/**
 * _strcpy - main function
 * @dest: first parameter
 * @src: second parameter
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
