#include "main.h"
/**
 * output - this is a function
 * @f: parameter
 * @s:parameter1
 * @t:parameter2
 * Return: successs
 */
ssize_t output(int f, const void *s, size_t t)
{
	return (write(f, s, t));
}
