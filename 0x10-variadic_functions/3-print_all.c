#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of all argument types
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *str;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
