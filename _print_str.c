#include "main.h"
/*
 * this funcation p-rint string to
 * to the stdout
 * and return the lenghth of the
 * str @len to the function
*/int _print_str(va_list val)
{
int i = 0, len = 0;
char *s = va_arg(val, char*);
if (s == NULL)
{
s = "(null)";
len = _strlen(s);
for (i = 0; i < len; i++)
_putchar(s[i]);
return (len);
}

while (s[i])
{
_putchar(s[i]);
i++;
len++;
}
return (len);
}
