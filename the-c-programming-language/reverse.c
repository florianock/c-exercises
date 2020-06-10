#include <stdio.h>
#include <string.h>

// page 55
/* reverse: reverse string s in place */
void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int main(int argc, char *argv[]) 
{
	int i = 0;
	for (i = 1; i < argc; i++) {
		reverse(argv[i]);
		printf("%s ", argv[i]);
	}
	printf("\n");

	return 0;
}
