#include "main.h"
/*
 * this the _strlen funcation
 * will count the number
 * of the string
*/int _strlen(const char *s)
{
if (*s == '\0')
{
return (0);
}
else
return (1 + _strlen(s + 1));
}
