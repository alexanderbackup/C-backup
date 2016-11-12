#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 5;

	printf("Argc number: %d\n", argc);

	while(i > argc){
		printf("Backwards: %d\n", i);
		i--;
	}
	char *smthing[] = {
		"Cyka", "Blyat",
		"Rush", "B", "Dimitrii"
	};

	i = 4;

	while(i > argc-2){
		printf("Whaterver: %s, %d\n", smthing[i], i);
		i--;
	}
	return 0;
}
