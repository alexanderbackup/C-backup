#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	if(argc == 1){
		printf("You have only 1 arg, LOOSER!\n");
	}else if(argc > 1 || argc < 4){
		for(i=0;i < argc; i++){
			printf("Your args are: %s\n", argv[i]);
		}
	}else{
		printf("SHEMALE!\n");
	}

	return 0;
}
