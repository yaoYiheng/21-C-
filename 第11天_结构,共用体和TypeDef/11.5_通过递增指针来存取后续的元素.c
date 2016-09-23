# include <stdio.h>

#define MAX 4

struct part
{
	short number;
	char name[10];
}data[MAX] = {
	1, "Smith",
	2, "Jones",
	3, "Adams",
	4, "Wilson"
};

struct part *p_part;

int main(int argc, char const *argv[])
{
	p_part = data;

	for (int i = 0; i < MAX; ++i)
	{		
		printf("At address %d:%d %s\n",p_part, p_part->number, p_part->name );

		p_part++;
	}



	return 0;
}