#include <stdio.h>
int main()
{
    int celcius;
    float farhenite;
    float formula = 1.8;
    int number = 32;
    printf("type the temperature in celcius \n");
    scanf("%d", &celcius);
    printf("the temperature in farhenite is %f", celcius * formula + number);
    return 0;
}