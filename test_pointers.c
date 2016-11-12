#include <stdio.h>

int main(void)
{
	int a;
	int *p;
	a = 5;
	p = &a;

	printf("%d\n", a);
	
	*p = 10;
	printf("%d\n", a);

	printf("printing p %d, printing *p %d, printing &&p %d\n",p ,*p, &p);

	return 0; 
}
