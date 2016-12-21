/*
Passing an array to a function
 */

#include <stdio.h>

#define MAX 10

int array[MAX];

int  largest(int num_array[], int length);
/*
也可以这样编写函数头和函数声明:
int largest(int *num_array, int length);
这与前一种等价, int num_array[]和int *num_array 指的都是指向int变量的指针.
 */

int main(int argc, char const *argv[])
{
	/* Input MAX values from the keyboard */

	for (int i = 0; i < MAX; ++i)
	{
		printf("Enter an integer value:");
		scanf("%d", &array[i]);
	}

	printf("\nLargest value = %d\n", largest(array, MAX));


	return 0;
}
int  largest(int num_array[], int length){
	int biggest = -12000;

	for (int i = 0; i < length; ++i)
	{
		if (num_array[i] > biggest)
		{
			biggest = num_array[i];
		}
	}
	return biggest;
}
