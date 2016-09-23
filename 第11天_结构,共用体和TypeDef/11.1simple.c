#include <stdio.h>

int length, width;
long area;

struct coord
{
	int x;
	int y;

}myPoint;

struct rectangle
{
	struct coord topleft;
	struct coord bottomrt;
};
int main(int argc, char const *argv[])
{
	myPoint.x = 12;
	myPoint.y = 14;

	struct coord yourPoint;
	yourPoint.x = 11;
	yourPoint.y = 15;



	printf("The coordinate are:(%d, %d)\n",myPoint.x, myPoint.y );
	printf("The coordinate are:(%d, %d)\n",yourPoint.x, yourPoint.y );
	return 0;
}
