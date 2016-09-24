/*
	Illustrates declaring external variables
 */
 # include <stdio.h>

int x = 999;

void print_value(void);
int main(int argc, char const *argv[])
{
	extern int x;

	printf("%d\n",x );

	print_value();

	return 0;
}
void print_value(void){
	extern int x ;
	printf("%d\n",x );
}

/*
	该程序的输出为:
	999
	999

	变量定义和extern声明是不同的, 前者为变量预留存储空间, 后置则指出"该函数
	使用了一个在其他地方定义的外部变量, 其名称是什么, 类型是什么."

 */
/*
注意: 编译器不会自动将局部变量初始化为0, 如果在定义局部变量时没有对它进行初始化, 
则它的值将不是确定的.使用局部变量之前, 必须明确的给它赋值.

 */
