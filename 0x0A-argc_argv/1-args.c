#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments received
 * @argc: Arg count
 * @argv: Array of arg strings
 *
 * Return: 0 for successful exit
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
