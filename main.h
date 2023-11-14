#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>
#include <unistd.h>


/* function declerations/prototypes */

int _printf(const char *format, ...);
int mr_putchar(char c);
int i_specifier(va_list digit);
int d_specifier(va_list digit);
int s_specifier(va_list wawu);
int character(va_list alpha);
char percentage_s(void);

/* structures and typedef*/
/**
 * struct element - formatter
 *
 * @pointer: character pointer
 * @v: function for specifier conversion
 *
 */

typedef struct element print
{
	char *pointer;
	int (*v)();
} new;

#endif
