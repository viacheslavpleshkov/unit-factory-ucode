void mx_printchar(char c);
void mx_printint(int num);

void mx_print_arr_int(const int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        mx_printint(arr[i]);
        mx_printchar('\n');
    }
}
