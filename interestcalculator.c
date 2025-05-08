// Simple Interest (SI) = (P × R × T) / 100
#include <stdio.h>
int main()
{
     float  Principal , Rate , Time , SI ; 

     printf("Principal :");
     
     scanf("%f",&Principal);

     printf("Rate :");

     scanf("%f",&Rate);

     printf("Time : ");

     scanf("%f",&Time);

     SI = (Principal*Rate*Time)/100;

     printf("%.2f",SI);
     return 0;

}