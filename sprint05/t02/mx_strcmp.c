int mx_strcmp(const char *s1, const char *s2) {
int i = 0;
int diff = 0;

   while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
       i++;
       if (s1[i] != s2[i]) {
           return diff = s1[i] - s2[i];
       }
       else {
           return 0;
       }

}
