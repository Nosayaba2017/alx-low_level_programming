#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of the executable file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
