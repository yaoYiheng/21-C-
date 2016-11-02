/*
Demonstrates use of an array
 */
#include <stdio.h>

/*
Declare an array to hold expenses, and a counter variable
 */

float expenses[13];


int main(int argc, char const *argv[])
{
	//Input data from keyboard into array
	
	for (int i = 0; i < 13; ++i)
	{
		printf("Enter expenses for month %d\n",i );
		scanf("%f", &expenses[i]);
	}

	//Print array contents
	
	for (int i = 0; i < 13; ++i)
	{
		printf("Month %d = $%.2f\n",i, expenses[i] );
	}
	return 0;
}