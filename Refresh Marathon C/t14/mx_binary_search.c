int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count){
	*count = 0;
	int midd = 0,left = 0, right = size - 1;
    while (1){
    	(*count)++;
        midd = (left + right) / 2;
        if (mx_strcmp(s,arr[midd]) == 0) {
        	return midd;
        }
        else if (mx_strcmp(s,arr[midd]) > 0) {
        	left = midd + 1;
        }
        else {
        	right = midd - 1;
        }
        if (left > right) {
          *count = 0;
        	return -1;
        }
    }
}
