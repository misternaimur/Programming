#include<stdio.h>
int main ()
{
     int row , col ;

     for (row = 1 ; row <= 3 ; row++  )
     {
        for ( col = 1 ; col <= row; col++)
        {
          printf("8");
        }
        printf("\n");
     
     }
}