#include "main.h"
#include <unistd.h>

/**
* print_d - print an int
*
* @args : argument list
*
* Return: count of numbers
*/
int print_d(va_list args)

{
int n = va_arg(args, int);
int count = 0;
unsigned int num;
char buff[12];
int i = 0;

	if (n < 0)
{
	count += write(1, "-", 1);
	num = -n;
}
	else
{
	num = n;
}
	if (num == 0)
	return (count + write(1, "0", 1));

	while (num > 0)
{
	buff[i++] = (num % 10) + '0';
	num /= 10;
}
	while (i--)
	count += write(1, &buff[i], 1);
	return (count);
}
