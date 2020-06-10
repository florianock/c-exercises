#include <stdio.h>
#include <ctype.h>

// page 54
/* atoi: convert s to integer; version 2 */
int atoi(char s[])
{
	int i, n, sign;

	for (i = 0; isspace(s[i]); i++) /* skip whitespace */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-') /* skip sign */
		i++;
	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}

int main(int argc, char *argv[])
{
	int i = 0;
	for (i = 1; i < argc; i++) {
		printf("%s:\t%d\n", argv[i], atoi(argv[i]));
	}

	return 0;
}
