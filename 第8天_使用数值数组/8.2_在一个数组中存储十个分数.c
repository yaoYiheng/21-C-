/*
Get 10 grades and then average them
 */

#include <stdio.h>

#define MAX_GRADE 100
#define STUDENTS 10

int grades[STUDENTS];

int idx;
int total = 0;	//used for average

int main(int argc, char const *argv[])
{
	for(idx = 0; idx < STUDENTS; idx++){
		printf("Enter Person %d's grade: \n",idx +1 );
		scanf("%d", &grades[idx]);

		while(grades[idx] > MAX_GRADE){
			printf("The highest grade possible is %d\n",MAX_GRADE );
			printf("Enter correct grade;\n");
			scanf("%d", &grades[idx]);
		}

		total += grades[idx];


	}
	printf("THe average score is %d\n", (total / STUDENTS));

	return 0;
}