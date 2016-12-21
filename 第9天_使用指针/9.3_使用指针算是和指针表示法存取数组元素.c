/*
Demonstrates using pointer arithmetic to access array
 elements with pointer notation.
 */
#include <stdio.h>
#define MAX 10

int i_array[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int *i_ptr;

float f_array[MAX] = {.0, .1, .2, .3, .4, .5, .6, .7, .8, .9};

float *f_ptr;

int main(int argc, char const *argv[])
{
	i_ptr = i_array;
	f_ptr = f_array;


	for (int i = 0; i < MAX; ++i)
	{
		printf("%d\t%f\n",*i_ptr++, *f_ptr++ );
	}
	return 0;
}