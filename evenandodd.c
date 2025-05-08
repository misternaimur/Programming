// Find the number Even and Odd 
#include<stdio.h>
int main ()
{
     int number; 
     printf("Enter the Value : ");
     scanf("%d", &number);
     if( number%2 == 0  )
     {
          printf("Even");
     }
     else 
     {
          printf("Odd");
     }
     return 0; 
}