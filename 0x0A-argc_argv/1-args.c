#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
