/*
Demonstration of declaring and using a pointer to a function
 */
#include <stdio.h>

double square(double x);

double (*ptr)(double x);

int main(int argc, char const *argv[])
{
	//Initialize p to point to square()
	
	ptr = square;

	//call square() two ways.
	
	printf("%f, %f\n",ptr(6.6), square(6.6) );


	return 0;
}
double square(double x){
	return x * x;
}