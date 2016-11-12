#include <stdio.h>

int main(int argc, char *argv[])
{

	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f.\n",
		bugs, bug_rate);
	
	//izpolzvame l vmesto L za unsigned long
	long universe_of_defects = 1l * 9999l *9999l;
	printf("The entire universe has %ld bugs.\n",
	universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n",
	expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n",
	part_of_universe);

	//this makes no sense, just a demo of something weird
	//umnojavame char s int ,za6toto char-ovete sa int v osnovata
	//v tozi slu4ai '\0' otgovarq character s int 0, koeto ot
	//svoq strana e NULL v C (None v Pythone)
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n",
	care_percentage);
	printf("First try : %c  ;\nSecond try:%s.\n",
	nul_byte, nul_byte);
	
	return 0;
}
