#include "main.h"
/**
 * s_specifier - this a function
 * @wawu: parameter
 * Return: 0
 */
int s_specifier(va_list wawu)
{
	int x, distance;

	char *string = va_arg(wawu, char *);

	if (string != NULL)
	{
		distance = strlen(string);
		for (x = 0; x < distance; x++)
		{
			putchar(string[x]);
			return (distance);
		}
	}
	else
	{
		string = "(null)";
		distance = strlen(string);
		for (x = 0; x < distance; x++)
		{
			putchar(string[x]);
			return (distance);
		}
	}
	return (distance);
}
