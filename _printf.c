#include "main.h"
/*
 * fun will cheack if there is a format spacfier
 * on the argument passed @format
 * thin it will pass the argument to funcation
 * using the stract @ff
 * and return the value of @find_fun.f()
*/int _printf(const char *format, ...)
{
ff find_fun[] = {
{"%c", _print_char},
{"%s", _print_str}, {"%%", _print_pers},
};
va_list args;
int i = 0, len = 0;
int j;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{
return (-1);
}
again:
while (format[i])
{
j = 2;
while (j >= 0)
{
if (find_fun[j].fs[0] == format[i] && find_fun[j].fs[1] == format[i + 1])
{
len += find_fun[j].f(args);
i += 2;
goto again;
}
j--;
}
_putchar(format[i]);
i++;
len++;
}
va_end(args);
return (len);
}
