#include<stdio.h>

void Print_Hello_world( int n ); // function delaration 

// recursive function
void Print_Hello_world( int n )
{
  if ( n == 0 ){
     return;
  }
     printf("Hello World!\n");
  Print_Hello_world( n - 1 );
}



int main()
{
   Print_Hello_world(5);

     return 0;
}