#include "main.h"
/*
 * fun will print the val char
 * to the stdout @c will stor the char
 * 1 is the value of the char
*/int _print_char(va_list val)
{
char c = va_arg(val, int);
_putchar(c);
return (1);
}
