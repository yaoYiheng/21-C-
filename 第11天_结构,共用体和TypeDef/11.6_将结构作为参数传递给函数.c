# include <stdio.h>

struct data
{
	float amount;
	char fname[30];
	char lname[30];
}rec;

void print_rec(struct data displayRec);

int main(int argc, char const *argv[])
{
	printf("Enter the donor's first and last names,\n");
	printf("separeted by a space:");
	scanf("%s %s", rec.fname, rec.lname);

	printf("\nEnter the donation amount");
	scanf("%f", &rec.amount);
	
	print_rec(rec);

	return 0;
}

void print_rec(struct data displayRec){

	printf("\nDonorn %s %s gave $%.2f.\n", displayRec.fname, 
											displayRec.lname,
											displayRec.amount);
}