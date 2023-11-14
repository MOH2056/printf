#include "main.h"

/**
 * c_specifier - this function is to print character
 * @alpha: parameter
 * Return: 0
 */

int c_specifier(va_list alpha)
{
	char c = va_arg(alpha, int);
	mr_putchar(c);
	return (1);
}

/**
 * percentage_s - this is a function
 *
 * Return: 0
 */
int percentage_s()
{
	mr_putchar(37);
	return (0);
}
