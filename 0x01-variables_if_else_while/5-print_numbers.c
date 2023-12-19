#include <stdio.h>
/**
 * main - prints a string
 * Return: 0 (succes)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

