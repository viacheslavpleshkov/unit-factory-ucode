#include "libmx.h"

char *mx_itoa(int number)
{
	int copy = number;
	int i = 0;
	char *num;
	int flag = 0;

	if (number == -2147483648)
	{
		num = "-2147483648";
		return num;
	}
	if (number < 0)
	{
		number = number * -1;
		copy = copy * -1;
		flag = 1;
		i++;
	}
	while (number >= 1)
	{
		i++;
		number = number / 10;
	}

	num = mx_strnew(i);
	for (int y = 1; y <= i; y++)
	{
		num[i - y] = (copy % 10) + 48;
		copy = copy / 10;
	}
	if (flag == 1)
	{
		num[0] = '-';
	}
	
	return num;
}
