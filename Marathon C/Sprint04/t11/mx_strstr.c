#include <stdlib.h>

int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);

char *mx_strstr(const char *haystack, const char *needle)
{
    char *temphaystack = (char *)haystack;
    char *tempneedle = (char *)needle;
    
    if ((!haystack) || (!needle))
    {
        return NULL;
    }
    if (!mx_strlen(needle))
    {
        return temphaystack;
    }

    while (*temphaystack)
    {
        if (!mx_strncmp(temphaystack, tempneedle, mx_strlen(tempneedle)))
        {
            return temphaystack;
        }
        temphaystack++;
    }

    return NULL;
}
