#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number ofagurments
 * @argv: string array of arguments
 *
 * Return: Always 0(success)
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
