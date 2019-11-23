int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size)
{
    char *min;
    int loc;
    char *temp;
    int count = 0;

    for (int i = 0; i < size - 1; ++i)
    {
        min = arr[i];
        loc = i;

        for (int j = i + 1; j < size; ++j)
        {
            if (mx_strlen(min) > mx_strlen(arr[j]))
            {
                min = arr[j];
                loc = j;
            }
            else if (mx_strlen(min) == mx_strlen(arr[j]))
            {
                if (mx_strcmp(min, arr[j]) > 0)
                {
                    min = arr[j];
                    loc = j;
                }
            }
        }
        if (loc != i)
        {
            ++count;
        }
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }
    
    return count;
}
