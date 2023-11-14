#include "main.h"
/**
 * character - this function is to print character
 * @alpha: parameter
 * Return: 0
 */
int character(va_list alpha)
{
	char c;

	c = va_arg(alpha, char);
	mr_putchar('c');
}
