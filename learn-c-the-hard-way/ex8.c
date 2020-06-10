#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 1) {
		printf("You only have one argument. You suck.\n");
	} else if (argc > 1 && argc <= 10) {
		printf("Here's your arguments:\n");

		for (int i = 0; i < argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else if (argc > 10) {
		printf("You have too many arguments. You suck.\n");
	}

	return 0;
}
