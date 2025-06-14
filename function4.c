#include<stdio.h>

float squarearea( float side );
float circlearea( float rad );
float Rectangle( float a , float b );
int main ()
{
  float a = 5.9;
  float b = 10.0 ; 

  printf("area is :  %f", Rectangle(a,b) );
  return 0 ;
 }

 float squarearea(float side ){
  return side * side ;

 }

 float circlearea(float rad ){

  return 3.14 * rad * rad ;
 }

 float Rectangle( float a , float b )
 {
  return a * b ;
 }