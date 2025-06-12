#include <stdio.h>

int sum ( int a , int b );

int sum ( int a , int b )
 {
     return a+b ;
 }


int main ()
{
     int a , b ; 
   printf("Enter the Value A : ");

   scanf("%d",&a);

   printf("Enter the Value B : ");

   scanf("%d",&b);
   
   int s = sum (a,b);
   
   printf("the value is %d",s);

     return 0 ;
}