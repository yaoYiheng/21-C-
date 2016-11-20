/*
Demonstrates basic pointer use
 */
#include <stdio.h>

int var = 1;

//Declare a pointer to int

int * ptr;

int main(int argc, char const *argv[])
{
	//Initlialize ptr to point to var
	
	ptr = &var;

	//Access var directly and indirectly
	
	printf("direct Access, var = %d\n", var);

	printf("Indirect Access, var = %d\n", *ptr);

	//Display the address of var two ways
	
	printf("The address of var = %d\n", &var);
	printf("The address of var = %d\n", ptr);	
	return 0;
}