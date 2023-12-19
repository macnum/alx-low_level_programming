#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - prints a set of charactyer strings to the stdout
 * Return: 0 (success)
 */
int main(void)
{
	char *value = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	strlen(value));
	return (1);
}
