#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
	if (!sub || !replace || mx_strlen(str) <= mx_strlen(sub))
	{
		return NULL;
	}
	else
	{
		int num = (mx_strlen(replace) - mx_strlen(sub);
		int len = mx_strlen(str) + mx_count_substr(str, sub) * num);
		char *memory = mx_strnew(len);
		int i = 0;
		int j = 0;

		while (i < len)
		{
			if (!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub)))
			{
				str += mx_strlen(sub);
				while (j < mx_strlen(replace))
				{
					memory[i] = replace[j];
					i++;
					j++;
				}
			}
			memory[i] = *str;
			str++;
			i++;
		}

		return memory;
	}
}
