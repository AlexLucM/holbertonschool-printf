#include "main.h"

/**
* print_string - prints a string
*
* @args : argument list
*
* Return: number of characters printed
*/
int print_string(va_list args)

{
int i;
char *str = va_arg(args, char*);

	if (str == NULL)
{
	str = "(null)";
}
	for (i = 0; str[i]; i++)
{
	write(1, &str[i], 1);
}
	return (i);
}
