#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int numbers[4] = { 0 };
	char name[4] = { 'a' };

  //printf("name size: %ld\n", sizeof(name));
  //printf("char size: %ld\n", sizeof(name[0]));
  //printf("int size: %ld\n", sizeof(11));

	// first, print them out raw
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);

	printf("name: %s\n", name);

	// setup the numbers
	numbers[0] = 65;
	numbers[1] = 90;
	numbers[2] = 97;
	numbers[3] = 122;

	// setup the name
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	//then print them out initialized
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);

	// print the name like a string
	printf("name: %s\n", name);

	// another way to use name
	char *another = "Zed";

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c\n",
			another[0], another[1], another[2], another[3]);

  	// let's play with memcopy
  	const char *src = "Flo";
  	int dest = 56;
	char *test = "Zed";

  	printf("src before: %s\ndest before: %d\n", src, dest);
  	memcpy(&dest, &src, 4);
  	printf("src after: %s\ndest after: %d\n", src, dest);
	printf("test before: %s\n", test);
	memcpy(&test, &dest, 4);
	printf("test after: %s\n", test);

	return 0;
}

