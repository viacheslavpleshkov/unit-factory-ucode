#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    int len;
    char *new;

    if (str && sub && replace && mx_strlen(str) >= mx_strlen(sub)) {
        len = mx_strlen(str) + mx_count_substr(str, sub) * (mx_strlen(replace) - mx_strlen(sub));
        new = mx_strnew(len);
   		for (int i = 0; i < len; ) {
   			if (mx_memcmp(str, sub, mx_strlen(sub)) == 0)  {
        	str += mx_strlen(sub);
       		for (int k = 0; k < mx_strlen(replace); k++)
       			new[i++] = replace[k];
    			continue ;
       	    }
             new[i] = *str;
   		   str++;
   		   i++;
   	    }
   		return new;
    }
  	return NULL;
}
