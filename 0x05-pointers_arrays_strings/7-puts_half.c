#include "main.h"
/**
*puts_half - puts half of a string
*@str: string
*Return:void
*/
void puts_half(char *str)
{
int i, len;

len = _strlen(str);
for (i = len / 2; i < len; i++)
_putchar(str[i]);

_putchar('\n');
}


/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
