/*
	Illustrates variable scope
 */
#include <stdio.h>

int x = 99;

void print_value(void);

int main(int argc, char const *argv[])
{
	
	printf("%d\n",x );

	print_value();

	return 0;

}
void print_value(void){
	printf("%d\n",x );
}
/*

注意: 如果没哟显示地初始化外部变量(给它赋值), 那么在定义外部变量时, 
编译器将会把它初始化为0.
 */