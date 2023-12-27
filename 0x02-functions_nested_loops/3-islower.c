#include "main.h"

/**
 * _islower - check for lowercase charcter.
 * @c: variable
 * Return: Always 0.
 */
int _islower(int c)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (c == b)
		{
			return (1);
		}
	}

	return (0);

}
