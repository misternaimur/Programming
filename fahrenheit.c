// Fahrenheit (°F) = (Celsius × 9/5) + 32
#include<stdio.h>
int main()
{
     float Celsius, Fahrenheit;
     
     printf("Enter Celsius Value: ");
     scanf("%f", &Celsius);

     Fahrenheit = (Celsius * 9 / 5) + 32;

     printf("Fahrenheit Value: %f\n", Fahrenheit); 

     return 0;
}