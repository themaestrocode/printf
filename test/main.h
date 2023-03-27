#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - works like the stanadrd printf
 * @format: the format string
 * @...: the arguments
 * Return: bla bla bla
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int it = 0, str_count = 0;

	va_start(ap, format);

	while (format[it] != '\0')
	{
		if (format[it] == '%')
		{
			format++;
			switch (format[it])
			{
				case 'c':
					_putchar(va_arg(ap, int));
					str_count += 1;
					break;

				case 's':
					puts(va_arg(ap, char *));
					str_count += 1;
					break;

				default:
					_putchar(format[it]);
					str_count += 1;
			}
			_putchar(format[it]);
			str_count += 1;
		}
		format++;
	}

	va_end(ap);

	return (str_count);
}


#endif /* MAIN_H */
