#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;


int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);
int print_int(va_list l, flags_t *f);

#endif
