#include <stdbool.h>
#include <stdlib.h>

int mx_count_words(const char *str, char c)
{
    if (str == NULL)
    {
        return -1;
    }
    else
    {
        bool state = true;
        unsigned wordcount = 0;
        int i = 0;

        while (str[i])
        {
            if (str[i] == c)
                state = true;
            else if (state == true)
            {
                state = false;
                ++wordcount;
            }
            ++i;
        }
        
        return wordcount;
    }
}