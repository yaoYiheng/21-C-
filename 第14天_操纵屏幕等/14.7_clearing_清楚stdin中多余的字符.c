/*
Clearing stdin of extra characters.
 */
#include <stdio.h>

void clear_kb(void);

int main(int argc, char const *argv[])
{
	
	int age;
	char name[20];

	//Prompt for user's age.
	puts("Enter your age.");
	scanf("%d", &age);

	clear_kb();

	//prompt for user's name.
	puts("Enter your first name:");
	scanf("%s", name);

	printf("Your age is %d\n",age );
	printf("Your name is %s\n",name );

	return 0;
}

void clear_kb(void){
	char junk[80];
	gets(junk);
}

