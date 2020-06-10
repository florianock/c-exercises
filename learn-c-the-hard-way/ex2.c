#include <stdio.h> 

/* This is a comment */
int main(int argc, char *argv[])
{
	int distance = 100;

	// this is also a comment
	printf("You are %d miles away.\n", distance);

	if (argc<2) return 0;

	printf("Found %d arguments.\n", argc-1);

	for(int i=1; i<argc; i++)
	{
		printf("Argument %d: %s.\n", i, argv[i]);
	}


	return 0;
}
