#include <stdio.h>
/**
 * main - prints a string
 * Return: 0 (succes)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
