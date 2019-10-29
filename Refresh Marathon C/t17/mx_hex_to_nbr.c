unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long res = 0;

	for (int i = 0; hex[i] != '\0'; ++i) {
        if (hex[i] >= '0' && hex[i] <= '9' ){
        	res = res * 16  + (hex[i] - 48);
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F' ){
        	res = res * 16  + (hex[i] - 55);
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f' ){
        	res = res * 16  + (hex[i] - 87);
        }
    }
    return res;
}
