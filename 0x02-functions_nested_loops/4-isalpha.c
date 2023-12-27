#include "main.h"
/**
* _isalpha - check for lowercase charcter.
* @c: variable
* Return: Always 0.
*/
int _isalpha(int c)
{
	char b, a;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (c == b)
		{
			return (1);
		}
		else
		{
			for (a = 'A'; a <= 'Z'; a++)
			{
				if (c == a)
				{
					return (1);
				}
			}
		}
	}
	return (0);
}
