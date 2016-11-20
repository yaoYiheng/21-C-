/*
Demonstrates the sizeof() opertator
 */
#include <stdio.h>

/*
Declare several 100 element arrays
 */

int intarray[100];
float floatarray[100];
double doublearray[100];

int main(int argc, char const *argv[])
{
	printf("\n\nSize of int = %d bytes", sizeof(int));

	printf("\nSize of short = %d bytes", sizeof(short));

	printf("\nSize of long = %d bytes", sizeof(long));

	printf("\nSize of long long = %d bytes", sizeof(long long));

	printf("\nSize of float = %d bytes", sizeof(float));

	printf("\nSize of double = %d bytes", sizeof(double));


	printf("Size of intarray = %d bytes\n", sizeof(intarray));
	printf("Size of floatarray = %d bytes\n", sizeof(floatarray));
	printf("Size of doublearray = %d bytes\n", sizeof(doublearray));

	return 0;
}