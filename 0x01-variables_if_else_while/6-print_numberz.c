#include <stdio.h>
#include <unistd.h>

/**
 * main - this function
 * Description: print 0 - 10 without using char
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
	putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
