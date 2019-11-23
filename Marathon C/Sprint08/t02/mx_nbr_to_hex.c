#include <stdlib.h>

char *mx_strnew(const int size);

char *mx_nbr_to_hex(unsigned long nbr)
{
	int i = 0;
	int num = 0;
	unsigned long copy = nbr;
	int p = 0;
	char b;
	char *hex = NULL;

	while (nbr >= 16)
	{
		nbr = nbr / 16;
		i++;
	}
	hex = mx_strnew(i);

	while (copy > 0)
	{
		num = copy % 16;
		if (num >= 10)
		{
			hex[p] = (copy % 16) + 87;
		}
		else
			hex[p] = (copy % 16) + 48;

		copy = copy / 16;
		p++;
	}

	for (int x = 0; i > 0; i--, x++)
	{

		b = hex[i];
		hex[i] = hex[x];
		hex[x] = b;
	}

	return hex;
}
