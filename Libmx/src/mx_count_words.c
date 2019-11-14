#include "libmx.h"

int mx_count_words(const char *str, char c)
{
    //Validate
    if (str == NULL)
    {
        return -1;
    }
    bool state = true;
    unsigned wordcount = 0; // word count
    int i = 0;
    // Scan all characters one by one
    while (str[i])
    {
        // If next character is a separator, set the
        // state as true
        if (str[i] == c)
            state = true;

        // If next character is not a word separator and
        // state is true, then set the state as false and
        // increment word count
        else if (state == true)
        {
            state = false;
            ++wordcount;
        }

        // Move to next character
        ++i;
    }

    return wordcount;
}
