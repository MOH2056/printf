#include "main.h"

/**
 * character - this function is to print character
 * @alpha: parameter
 * Return: 0
 */

int c_specifier(va_list alpha)
{
	char c;

	c = va_arg(alpha, char);
	mr_putchar('c');
}
/**
 * percentage_s - this is a function
 *
 * Return: 0
 */
char percentage_s(void)
{
	mr_putchar('%');
}
