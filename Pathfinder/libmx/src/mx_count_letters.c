#include "libmx.h"

int mx_count_letters(const char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i])
		i++;
	return i;
}
