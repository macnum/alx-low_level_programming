#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints two multiplication of  two numbers
 * @argc: number of arguments
 * @argv: array of argumnets
 *
 * Return: success (0) if program recives two arguments.
 *	if prgramdoes not  recieve two arguments (1).
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
