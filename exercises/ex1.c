#include <stdio.h> 

/* This is a comment */
int main(int argc, char *argv[])
{
	int distance = 100;

	// this is also a comment
	printf("You are %d miles away.\n", distance);

	if (argc<2) return 0;

	printf("Found %d arguments.\n", argc);

	for(int i=1; i<argc; i++)
	{
		printf("Argumetn %d: %s.\n", i, argv[i]);
	}


	return 0;
}
