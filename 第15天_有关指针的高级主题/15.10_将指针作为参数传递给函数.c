/*
Passing a pointer to a function func1() takes as its
one argument a pointer to a function that takes no
argument and has no return value
 */
#include <stdio.h>
void func1(void(*p)(void));
void one(void);
void two(void);
void other(void);
int main(int argc, char const *argv[])
{
	//The pointer to a function
	
	void (*pointer)(void);
	int nbr;

	for(;;){
		printf("Enter an integer between 1 and 10, 0to exit\n");
		scanf("%d", &nbr);
		if (0 == nbr)
		{
			break;
		}else if (1 == nbr)
		{
			pointer = one;
		}
		else if (2 == nbr)
		{
			pointer = two;
		}
		else{
			pointer = other;
		}
		func1(pointer);

	}



	return 0;
}
void func1(void(*p)(void)){
	p();
}
void one(void){
	printf("You enterd 1.\n");
}
void two(void){
	printf("You enterd 2.\n");
}
void other(void){
	printf("You enterd something other than 1 or 2.\n");
}