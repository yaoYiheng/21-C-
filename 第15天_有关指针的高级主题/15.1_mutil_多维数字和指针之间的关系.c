/*
Demonstrates pointers and multidimensional arrays.
 */
#include <stdio.h>

int multi[2][4];

int main(int argc, char const *argv[])
{
	printf("multi = %u\n", multi);
	printf("multi[0] = %u\n",multi[0] );
	printf("multi[0][0] = %u\n", &multi[0][0]);


	return 0;
}