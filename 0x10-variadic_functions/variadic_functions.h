#ifndef VARIADIC_fUNCTIONS_H
#define VARIADIC_fUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct printfunc - pointer to a list of types of function arguments
 * @ch: input
 * @func: output function
 **/
struct printfunc
{
	char *ch;
	void (*func)(va_list arg);
};
typedef struct printfunc printer_t;
#endif /* VARIADIC_fUNCTIONS_H */
