#include <stdio.h>
#include <stdlib.h>

/**
 * main - return alphabetes
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}
