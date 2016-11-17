/*random.c - Demonstrates using a multidimentsional array*/

#include <stdio.h>
#include <stdlib.h>

/*
Declare a 3D array with 1000 elements
 */

int random_array[10][10][10];
int a, b, c;

int main(int argc, char const *argv[])
{
	/* Fill the array with random numbers. The C library function
	rand() returns a random number. Use one for loop for each
	array subscript. */

	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++){
			for (int c = 0; c < 10; c++){
				random_array[a][b][c] = rand();
			}
		}
	}

	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++){
			for (int c = 0; c < 10; c++){
				printf("\nrandom_array[%d][%d][%d] = ", a, b, c);
				printf("%d",random_array[a][b][c] );
			}
			printf("\nPress Enter to continue, CTRL - C to quit");

			getchar();
		}
	}


	return 0;
}