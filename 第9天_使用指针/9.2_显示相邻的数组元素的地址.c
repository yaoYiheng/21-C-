/*
Demonstrates the relationship between addresses and 
elements of array of different data types
 */

#include <stdio.h>

int ctr;

short array_s[10];
float array_f[10];
double array_d[10];

int main(int argc, char const *argv[])
{
	printf("\t\tShort\t\tFloat\t\tDouble");
	printf("\n============================");
	printf("============================");

	printf("Print the addresses of each array element\n");

	for (ctr = 0; ctr < 10; ctr++){
		printf("\nElement %d: \t%ld\t\t%ld\t\t%ld\n", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);
	}
	printf("\n============================");
	printf("============================");
	return 0;
}