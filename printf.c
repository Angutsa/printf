#include "main.h"

#define debug_here(i) printf("Here %i\n", i)
#define debug_char(c) printf("Value -> %c\n", c)

/**
  * _printf - produces output according to a format
  * @format: character string to format and output
  * Return: number of characters printed excluding the null byte
  */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0, count = 0, tmp = 0;
	
	if (format == NULL)
		return (-1);

	va_start(ptr, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '\\' && format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%')
		{
			tmp = 0;
			tmp = handle_specifier(format[i + 1], ptr);

			if (tmp == -1)
			{
				_putchar(format[i]);
				continue;
			}

			count += tmp;
			i++;
		}
	}
	va_end(ptr);
	return (count);
}
