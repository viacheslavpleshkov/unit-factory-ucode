void mx_sort_arr_int(int *arr, int size) {
    int *a = arr;
    int n = size;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] > a[i]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
