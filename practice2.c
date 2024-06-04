#include <stdio.h>
int main()
{
    int radius;
    int height;
    float pi = 3.14;
    printf("Type the value of radius \n");
    scanf("%d", &radius);

    printf("The area is %f meter square \n", radius * radius * pi);
    printf("now we will find the volume of the cylinder made with the circle \n");
    printf("type the height \n");
    scanf("%d", &height);
    printf("the volume of the cylinder is %f meter cube", radius * radius * pi * height);

    return 0;
}