#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _print_str(va_list val);
int _print_char(va_list val);
int _print_pers(void);
int _putchar(char c);
/*
* this a struct contuins
* two data types
* char pointers @fs && fun pointer
* @f
*/typedef struct funcation_find {
char *fs;
int (*f)();
} ff;
#endif
