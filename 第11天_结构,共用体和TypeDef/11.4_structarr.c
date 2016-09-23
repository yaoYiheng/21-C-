# include <stdio.h>

struct entry
{
	char fname[20];
	char lname[20];
	char phone[10];
};

struct entry list[4];


int main(int argc, char const *argv[])
{
	
	for (int i = 0; i < 4; ++i)
	{
		printf("Enter first name:\n");
		scanf("%s", list[i].fname);

		printf("Enter last name:\n");
		scanf("%s", list[i].lname);

		printf("Enter phone in 123-4567 format\n");
		scanf("%s", list[i].phone);

	}

	for (int i = 0; i < 4; ++i)
	{
		printf("Name: %s %s\n",list[i].fname, list[i].lname );
		printf("\t\tPhone: %s\n",list[i].phone );
	}



	return 0;
}