#include "main.h"

/**
 * print_str - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_str(va_list arguments, char *buf, unsigned int ibuff)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuff = handl_buf(buf, nill[i], ibuff);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuff = handl_buf(buf, str[i], ibuff);
	return (i);
}
