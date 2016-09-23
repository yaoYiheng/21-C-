# include <stdio.h>

struct data
{
	int data1, data4;
	float data2, data3;

}info;

int main(int argc, char const *argv[])
{
	info.data1 = 100;
	//声明一个指向结构体的指针.
	struct data *p_info;

	//以下为错误写法
	 // *p_info = info;
	 //正确写法: 
     p_info = &info;


     //以下两种为指针表示法.
	 p_info->data2 = 5.5;
	 (*p_info).data3 = 6.6;

	 //通过结构名表示
	 info.data4 = 99;

	 printf("%d, %f, %f, %d\n",info.data1, info.data2, info.data3 , info.data4);

	return 0;
}