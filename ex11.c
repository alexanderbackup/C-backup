#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argv
	
	int i = 0;	
	while(i < 100)if(i < 50){
		printf("arg %d\n", i);
		i++;
		}else if(i >= 50){
			printf("SMTH !!!! %d\n", i);
		
		i++;
	}

	// Let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;
	i = 0; // watch for this
	while(i < num_states){
		printf("state %d: %s\n", i, states[i]);
		//i++;	
	}

	return 0;
}
