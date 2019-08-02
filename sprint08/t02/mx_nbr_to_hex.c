#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr) {

char *hex;

int buff = nbr;

int j = 0;

int temp = 0;

if (nbr == 0) {
	return 0;
	}

while (nbr / 16 != 0) {
	nbr = nbr / 16;
	j++;
	}

hex = mx_strnew(j);

for (int i = j; i >= 0; i--) {

	temp = buff % 16;

	if (temp >= 10 && temp <= 15) {
	hex[i] = temp + 87;
		}
	else {
	hex[i] = temp + 48;
		}
	buff = buff / 16;
	}
return hex;
}
