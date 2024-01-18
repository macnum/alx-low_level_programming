#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: number of arguments passed
 * @argv: string array of arguments
 *
 * Return:0(success)
 */

int main(int argc, char  __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
