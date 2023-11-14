#include "main.h"
/**
 * _printf - this is a function
 * @format: parameter
 * Return: 0
 */
int _printf(const char * const format, ...)
{
	new print[] = {
		{"%s", s_specifier},
		{"%d", d_specifier},
		{"%%", percentage_s},
		{"%i", i_specifier},
		{"%c", c_specifier},
	};
	va_list name;
	int xy;
	int rz;

	va_start(name, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[1] != '\0')
	{
		rz = 4;
		while (rz >= 0)
		{
			if (print[rz].pointer[0] == format[xy]
					&& print[rz].pointer[1] == format[i + 1])
			{
				width += print[rz].v(name);
				xy = xy + 2;
				goto Here;
			}
			rz--;
		}
		mr_putchar(format[xy]);
		width++;
		xy++;
	}
	va_end(name);
	return (width);
}
