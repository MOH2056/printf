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


	if (string == NULL)
	{
		string = "(null)";
		distance = strlen(string);
		for (x = 0; x < distance; x++)
		{
			mr_putchar(string[x]);
			return (distance);
		}
	}

	else
	{
		distance = strlen(string);

		x = 0;

		while (x < distance)
		{
			/*mr_putchar(string[x]);*/
			output(1, string, strlen(string));
			return (distance);
			x++;
		}
	}
	return (distance);
}
