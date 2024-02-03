#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @r: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *r)
{
	int curr_r = *r + 1;
	int size = 0;

	if (format[curr_r] == 'l')
		size = S_LONG;
	else if (format[curr_r] == 'h')
		size = S_SHORT;

	if (size == 0)
		*r = curr_r - 1;
	else
		*r = curr_r;

	return (size);
}

