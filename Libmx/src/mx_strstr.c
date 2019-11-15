#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle)
{
    char *temphaystack = (char *)haystack;
    char *tempneedle = (char *)needle;
    while (*temphaystack)
    {
        if (!mx_strncmp(temphaystack, tempneedle, mx_strlen(tempneedle)))
        {
            return temphaystack;
        }
        temphaystack++;
    }
    return temphaystack;
}
