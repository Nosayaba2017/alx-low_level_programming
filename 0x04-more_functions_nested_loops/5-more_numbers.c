#include "main.h"

/**
 * more_numbes - Print 14 times the numbers since 0 up to 14
 * followed by a new line
 * Return: 14 times of the numbers since 0 up to 14
 */

void more_numbers(void)

{

	int x, y;

	for (x = 0; x < 14; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
