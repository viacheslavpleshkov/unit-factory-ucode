int mx_strlen(const char *s)
{
	int i = 0;

	for(;s[++i];);

	return i;
}
