#include <stdio.h>

int main(void)
{
	char smth = '\0';
	int smthewse = 0;

	//Tezi 2te sa kakto se o4akva
	//%c - prazen string; %ld - 1 za char (koeto e dosta polzeno)
	printf("Using %c with value: %ld.\n", 
		smth, sizeof(smth));
	//...dokato %ld tuk vr16ta 4 !!!
	//%d si e 0
	printf("Using %d but this time with value: %ld.\n",
		smthewse, sizeof(smthewse));
	
	//smth tuk moje da se izvika kato int s %d
	//makar i asigne-nat kato char i ima value 0!!! :D
	printf("Trying this for the lelz %d.\n", smth);
	
	return 0;
}
