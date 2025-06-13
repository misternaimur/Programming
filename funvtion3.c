#include <stdio.h>
void calculate_Price(float value );

void calculate_Price(float value )
{
     value = value + ( 0.18 * value );
     printf("final price is %f",value);


}



int main(){
     float value = 100.0 ;
     calculate_Price(value);

     return 0 ;
}