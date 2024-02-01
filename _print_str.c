#include "main.h"
/*
 * this funcation p-rint string to
 * to the stdout
 * and return the lenghth of the
 * str @len to the function
*/int _print_str(va_list val)
{
int i = 0;
char *s = va_arg(val, char*);
while (s[i])
{
_putchar(s[i]);
i++;
}
return (i);
}
