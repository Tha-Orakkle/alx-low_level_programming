#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: separating string
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (!str)
			str = "(nil)";

		if (i == n - 1)
			printf("%s", str);
		else if (separator)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	va_end(strings);
	printf("\n");
}
