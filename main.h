#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Prototypes */
int _printf(const char *format, ...);
int handle_specifier(const char *format, int i, va_list args);
int print_string(va_list args);
int print_char(va_list args);
int print_i(va_list args);
int print_d(va_list args);

#endif /* MAIN_H */
