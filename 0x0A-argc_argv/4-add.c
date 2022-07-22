#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
	/**
	 * This program does not check if a non-digit is entered as
	 * an argumennt to call the executable file
	 */
}
