#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};
	

	// first, print them out raw
	printf("numbers: %d %d %d %d\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n",
		name[0], name[1],
		name[2], name[3]);

	printf("name: %s\n", name);
	
	printf("sizeof numbers: %ld, sizeof name: %ld\n",
		sizeof(numbers), sizeof(name));
	
	printf("\n");
	// setup the numbers
	numbers[0] = 'P';
	numbers[1] = 'e';
	numbers[2] = '6';
	numbers[3] = 'o';

	// setup the name
	name[0] = 1;
	name[1] = 2;
	name[2] = 3;
	name[3] = 4;
	
	char *smth = "name";

	printf("Numbers: %d and Name %s. \n",
		*numbers, smth);

	printf("AGAIN! sizeof numbers: %ld, sizeof name: %ld\n",
		sizeof(numbers), sizeof(name));
	
	
	return 0;
}
