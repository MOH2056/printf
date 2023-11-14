#include "main.h"

/**
 * i_specifier - prints integer to the standard output
 *
 * @digit: function argument
 *
 * Return: success always
 *
 */

int i_specifier(va_list digit)
{
	int retain = va_arg(digit, int);

	int start;
	int end = retain % 10;
	int pv = 1;
	int v;
	int a = 1;

	retain = retain / 10;
	start = retain;

	if (end < 0)
	{
		mr_putchar('-');
		start = -start;
		retain = -retain;
		end = -end;
		a++;
	}
	if (start > 0)
	{
		while (start / 10 != 0)
		{
			pv = pv * 10;
			start = start / 10;
		}
		start = retain;
		while (pv > 0)
		{
			v = start / pv;
			putchar(v + '0');
			start = start - (v * pv);
			pv = pv / 10;
			a++;
		}
	}
	putchar (end + '0');
	return (a);
}

/**
 * d_specifier - prints integer to the standard output
 *
 * @digit: function argument
 *
 * Return: success always
 *
 */

int d_specifier(va_list digit)
{
	int retain = va_arg(digit, int);

	int start;
	int end = retain % 10;
	int pv = 1;
	int v, a = 1;

	retain = retain / 10;
	start = retain;

	if (start > 0)
	{
		while (start / 10 != 0)
		{
			pv = pv * 10;
			start = start / 10;
		}
		start = retain;
		while (pv > 0)
		{
			v = start / pv;
			putchar(v + '0');
			start = start - (v * pv);
			pv = pv / 10;
			a++;
		}
	}
	if (end < 0)
	{
		mr_putchar('-');
		start = -start;
		retain = -retain;
		end = -end;
		a++;
	}
	putchar (end + '0');
	return (a);
}
