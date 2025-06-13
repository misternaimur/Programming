#include<stdio.h>

void multiple (int n );

int main()
 {
  int n ;
   
  printf("Enter n Value :");
  scanf("%d",&n);

  multiple(n); // argument 


 }

void multiple(int n ){ // parameter / actual Perameter 
 
     for ( int i = 1 ; i<=10 ; i++ ) 
     {
          printf("%d\n",i*n);
     }
}
