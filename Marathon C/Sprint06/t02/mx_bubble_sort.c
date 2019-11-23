int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size)
{
    char *temp;
    int count = 0;

    for (int i = 0; i < size; ++i)
    {
        for (int j = i; j < size; ++j)
        {
            if (mx_strcmp(arr[i], arr[j]) > 0)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                ++count;
            }
        }
    }
    
    return count;
}
