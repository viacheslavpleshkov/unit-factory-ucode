#include <stdbool.h>

bool mx_is_space(char c)
{
	if (c == 32 || c == '\t' || c == '\n' 
	|| c == '\v' || c == '\r' || c == '\f') 
	{
		return true;
	}

	return false;
}
