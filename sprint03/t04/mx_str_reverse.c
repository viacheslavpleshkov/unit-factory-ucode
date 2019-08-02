void mx_str_reverse(char *s) {
    int i = 0;
    int j = mx_strlen(s);
    while (i <= j / 2) {
        mx_swap_char(&s[i], &s[j]); 
        i++;
        j--;
    }
}
