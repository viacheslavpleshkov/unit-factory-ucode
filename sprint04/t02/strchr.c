#include <stdio.h>

char *mx_strchr(const char *s, int c){
    int i =0;
    while(s[i] != '\0'){
        if(s[i] == c){
            return s[i]
        }
        i++;
    }
}

int main() {
    char word[] = "Hello word";
    int search = 1;

    mx_strchr(word, search);
}

//#include <stdio.h>
//#include <string.h>
//
//int main () {
//    const char str[] = "Pleshkove";
//    const char ch = 'h';
//    char *ret;
//
//    ret = strchr(str, ch);
//
//    printf("String after |%c| is - |%s|\n", ch, ret);
//
//    return(0);
//}
