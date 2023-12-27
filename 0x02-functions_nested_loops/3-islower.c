#include "main.h"

/**
 * main - check for lowercase charcter.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (c == b)
		{
			return 1;
		}
	}

	return 0;

}
