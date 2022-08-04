#include "variadic_functions.h"

/**
 * print_numbers - prints number
 * @separator: string separating the numbers
 * @n: fixed parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(numbers, int));
		}
		else if (separator)
			printf("%d%s", va_arg(numbers, int), separator);
		else
			printf("%d", va_arg(numbers, int));
	}
	va_end(numbers);
	printf("\n");
}
