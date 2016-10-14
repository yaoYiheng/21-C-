/*
Using a pointer to cal different functions
 */
#include <stdio.h>

void func1(int x);
void one(void);
void two(void);
void other(void);

int main(int argc, char const *argv[])
{
	int nbr;
	for (; ;)
	{
		puts("\nEnter an integer between 1 and 10, 0 to exit");

		scanf("%d", &nbr);

		if (nbr == 0)
		{
			break;
			func1(nbr);
		}


	}

	return 0;
}

void func1(int x){
	void (*pointer)(void);
	if (1 == x)
	{
		pointer = one;
	}else if (2 == x)
	{
		pointer = two;
	}
	else{
		pointer = other;
	}
}
void one(void){
	printf("You entered 1.\n");
}
void two(void){
	printf("You entered 2.\n");
}
void other(void){
	printf("You entered something other than 1 or 2\n");
}