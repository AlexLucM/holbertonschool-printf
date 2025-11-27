#include "main.h"

/**
* handle_specifier - handles the specifiers
*
* @format : format string
*
* @i : current index
*
* @args : list of arguments
*
* Return: number of chararacters printed
*/
int handle_specifier(const char *format, int i, va_list args)

{
	if (format[i] == 'c')
	return (print_char(args));
	if (format[i] == 's')
	return (print_string(args));
	if (format[i] == 'd')
	return (print_d(args));
	if (format[i] == 'i')
	return (print_i(args));
	if (format[i] == '%')
{
	write(1, "%", 1);
	return (1);
}
	else
{
	write(1, "%", 1);
	write(1, &format[i], 1);
	return (2);
}
}

/**
* _printf - custom printf function, prints accordint to a format
*
* @format : character string with the format
*
* Return: count of number of character printed
*/
int _printf(const char *format, ...)

{

	va_list args;
	int i = 0;
	int count = 0;

	if (format == NULL)
	return (-1);

	va_start(args, format);

	while (format[i] != '\0')
{
	if (format[i] == '%')
{
	i++;

	if (!format[i])
{
	va_end(args);
	return (-1);
}
	count += handle_specifier(format, i, args);
}
	else
{
	write(1, &format[i], 1);
	count++;
}
	i++;
}
	va_end(args);
	return (count);
}
