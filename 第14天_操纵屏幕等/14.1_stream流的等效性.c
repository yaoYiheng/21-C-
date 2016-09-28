/*Demonstrates the equivalence of stream input and output
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char buffer[256];

	//Input a line,  then immediately output it
	puts(gets(buffer));
	

	return 0;
}