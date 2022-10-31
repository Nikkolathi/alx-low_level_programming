#include "main.h"

/**

 * binary_to_uint - Converts a binary number to an unsigned int.

 * @b: the binary to convert.

 * Return: The unsigned int representation of the binary number.

 */

unsigned int binary_to_uint(const char *b)

{

	unsigned int res = 0;

	int i = 0, n;



	n = _strlen(b);

	if (!b)

		return (0);

	for (i = 0; i < n; i++)

		if (b[i] == '1')

			res += _pow(2, n - 1 - i);

		else if (b[i] != '0')

			return (0);

	return (res);

