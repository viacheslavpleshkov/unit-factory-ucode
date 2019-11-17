#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{

    if (n == 0)
    {
        return NULL;
    }

    size_t i = 0;
    unsigned char *dst_temp = (unsigned char *)dst;
    unsigned char *src_temp = (unsigned char *)src;

    for (size_t i = 0; i < n; i++)
    {
        dst_temp[i] = src_temp[i];
        if (src_temp[i] == (unsigned char)c)
        {
            break;
        }
    }

    return &(dst_temp[i]);
}
