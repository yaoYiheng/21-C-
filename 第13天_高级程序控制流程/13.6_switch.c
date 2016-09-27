/*
Demonstrates the switch statement.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int reply;

	puts("\nEnter a number between 1 and 5");
	scanf("%d", &reply);

	switch(reply){
		case 0:
		break;
		case 1:
		{
			puts("You entered 1.");
			break;
		}
		case 2:
		{
			puts("You entered 2.");
			break;
		}
		case 3:{
			puts("You entered 3.");
			break;
		}
		case 4:{
			puts("You entered 5.");
			break;
		}
		case 5:
		{
			puts("You entered 5.");
			break;
		}
		default:{
			puts("Out of range , try again.");
		}
	}


	return 0;
}