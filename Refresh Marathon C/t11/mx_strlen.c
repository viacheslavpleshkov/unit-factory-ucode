int mx_strlen(const char *s) {
	int count = 0;
	for (int i = 0; s[i] != '\0'; ++i)
	{
		count++;
	}
	return count;
}
