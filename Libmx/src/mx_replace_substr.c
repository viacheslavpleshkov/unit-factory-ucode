#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
	if (!sub || !replace || mx_strlen(str) <= mx_strlen(sub))
	{
		return NULL;
	}
	{
		//Memory
		int len = mx_strlen(str) + mx_count_substr(str, sub) * (mx_strlen(replace) - mx_strlen(sub));
		char *new = mx_strnew(len);

		int i = 0, j = 0;

		while (i < len)
		{
			if (!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub)))
			{
				str += mx_strlen(sub);
				while (j < mx_strlen(replace))
				{
					new[i] = replace[j];
					i++;
					j++;
				}
			}
			new[i] = *str;
			str++;
			i++;
		}
		return new;
	}
}
