#include<stdio.h>
void main()
{
    float cel, fah;
    printf("enter temperature in celsius=");
    scanf("%f",&cel);
    fah=(cel*(9/5))+32;
    printf("temperature in fahrenheit=%0.2f",fah);
    
}