/*
Demonstrates the sizes of multidimensional array elements.
 */
#include <stdio.h>

int multi[2][4];

int main(int argc, char const *argv[])
{
	printf("multi = %u\n", sizeof(multi) );
	printf("multi[0] = %u\n",sizeof(multi[0]) );
	printf("multi[0][0] = %u\n", sizeof(multi[0][0]));


	return 0;
}