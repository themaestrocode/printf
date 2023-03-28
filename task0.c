#include <stdarg.h>
#include "main.h"
#include <stdio.h>
/**
 * _printf - a mini replica of printf
 * @format: strung specifier
 * @...: the arguments
 * Return: str_count
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char c;
	int str_count;

	va_start(ap, format);

	while ((c = *format++) != '\0')
	{
		if (c == '%')
		{
			c = *format++;
			switch (c)
			{
			case 'c':
				_putchar(va_arg(ap, int));
				str_count++;
				break;

			case 's':
				str_count += puts(va_arg(ap, char *));
				break;

			case '%':
				_putchar('%');
				str_count++;
				break;

			default:
				break;
			}
		}
		else
		{
			_putchar(c);
			str_count++;
		}
	}
	va_end(ap);
	return (str_count);
}
