#include <stdio.h>

// p. 18
// copy input to output; 1st version
int main(int argc, char *argv[])
{
	int c, result;

//	while ((c = getchar()) != EOF) {
	result = (c = getchar()) != EOF; 
	do {
		putchar(c);
		printf(":\t%d\n", result);
	} while(result);
}
