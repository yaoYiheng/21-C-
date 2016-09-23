#include <stdio.h>

struct data
{
	float amout;
	char fname[30];
	char lname[30];
}rec;

int main(int argc, char const *argv[])
{
	printf("Enter the donor's first and last name,\n");
	printf("separeted by a space\n");

	scanf("%s %s", rec.fname, rec.lname);

	printf("Enter the donation amout:\n");
	scanf("%f", &rec.amout);

	printf("Donor %s %s gave $%.2f\n",rec.fname, rec.lname, rec.amout );


	return 0;
}