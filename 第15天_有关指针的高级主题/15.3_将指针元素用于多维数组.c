/*
Demonstrates pointer arithmetic with pointers
 */

#include <stdio.h>

int multi[2][4];

int main(int argc, char const *argv[])
{
	printf("The value of (multi) = %u\n", multi);
	printf("The value of (multi+1) = %u\n", multi + 1);
	printf("The value of (multi[1]) = %u\n", &multi[1]);

	return 0;
}
/*
输出结果如下:

The value of (multi) = 154062880
The value of (multi+1) = 154062896
The value of (multi[1]) = 154062896
在不同的及机器上运行时, 显示的值可能不用, 但这些值之间的关系是相同的.
multi+1的值比multi大16, 它指向数组的下一个元素:multi[1].
从这个例子可知, multi是一个指针, 它指向multi[0].
另外multi[0]本身也是一个指针, 它指向multi[0][0].
因此, multi是一个指向指针的指针.
要通过multi来存取数组的数据, 必须使用两个间接运算符.
要打印multi[0][0]的值, 可以使用下述三天语句中的任何一条:
printf("%d", multi[0][0]);
printf("%d", *multi[0]);
printf("%d", **multi);
 */