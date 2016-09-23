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
}myBox;
int main(int argc, char const *argv[])
{
    printf("Enter the top left x coordinate:");
    scanf("%d", &myBox.topleft.x);

    printf("Enter the top left y coordinate:");
    scanf("%d", &myBox.topleft.y);

    printf("Enter the bottomrt x coordinate:");
    scanf("%d", &myBox.bottomrt.x);

    printf("Enter the bottomrt y coordinate:");
    scanf("%d", &myBox.bottomrt.y);

    width = myBox.bottomrt.x - myBox.topleft.x;
    length = myBox.bottomrt.y - myBox.topleft.y;

    area = width * length;
    
    printf("The area is %ld units\n",area );
    
    
    
    return 0;
}
