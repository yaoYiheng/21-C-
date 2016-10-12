/*
Initializing an array of pointers to type char.
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char *message[8] = {"Four", "score", "and", "seven", 
	"years", "age", "our", "forefathers"};

	for (int i = 0; i < 8; ++i)
		printf("%s\n",message[i] );

	printf("\n");
	

	return 0;
}