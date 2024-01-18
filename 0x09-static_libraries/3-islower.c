#include "main.h"
/**
 * _islower - Entry point
 * @c:  first operand
 * Return: 0 (sucess)
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
