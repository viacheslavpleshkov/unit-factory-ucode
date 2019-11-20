int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int s1_len = mx_strlen(s1);
    int s2_len = mx_strlen(s2);
    int total_len = s1_len + s2_len;

    for (int i = s1_len, j = 0; i < total_len; i++, j++) {
        s1[i] = s2[j];
    }
    s1[total_len] = '\0';
    return &s1[0];
}
