/*
Program Name: week2.c
program to enter information for up to 100
people, The program prints a report
based on the numbers entered.
 */

//included files
#include <stdio.h>
#include <stdlib.h>

//defined constants
#define MAX 100 
#define YES 1
#define NO 0

//variables
struct record
{
	char fname[15+1];	//first name + NULL
	char lname[20+1];	//last name + NULL
	char phone [9+1];	//phone number + NULL
	long income ;
	int month;
	int day;
	int year;
};

struct record list[MAX];	//declare actual strcture

int last_entry = 0;		//total number of entries.


//function prototypes
void get_data(void);
void display_report(void);
int continue_function(void);
void clear_kb(void);

//start of program

int main(int argc, char const *argv[])
{
	int cont = YES;
	int ch;

	while(cont == YES){
		printf("\n" );
		printf("\nMENU");
		printf("\n===========\n");
		printf("n1.Enter names\n");
		printf("n2.Print report\n");
		printf("n3.Quit\n");
		printf("\n\nEnter Selection ==>");

		ch = getchar();

		fflush(stdin);//remove extra characters from keyboard buffer

		switch(ch){
			case '1':get_data();
			break;

			case '2':display_report();
			break;

			case '1':printf("Thank you for using this program!\n");
			cont = NO;
			break;

			default:printf("Invalid choice, please select 1 to 3\n");
			break;
		}

	}

	return 0;
}

/*
Function: get_data()
Purpost: This function gets the data from the user.
It continous to get data until either 100 people are entered, or user
chooses not to continue.
Returns:nothing
Note: This allows 0/0/0 to be entered for birthdates in case the uesr
is unsure. 
It also allows for 31 days in each month.
 */

void get_data(void){
	for(cont = YES;last_entry < MAX && cont == YES;last_entry++){
		printf("Enter information for Person %d\n", last_entry +1);
		printf("Enter first name\n");
		gets(list[last_entry].fname);

		printf("Enter last name:\n");
		gets(list[last_entry].lname);




	}


}


