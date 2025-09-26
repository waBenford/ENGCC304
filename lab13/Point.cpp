#include <stdio.h>

void swapNumbers( int a , int b) {
    printf( "Before swap (num1 & num2) : %d, %d\n" , a , b );
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap (num1 & num2) : %d, %d" , a , b);
}

int main() {
    int a , b , *PA , *PB;
    PA = &a;
    PB = &b;

    printf( "Enter Num1: " );
    scanf( "%d" , &a );
    printf( "Enter Num2: " );
    scanf( "%d" , &b );
    swapNumbers( *PA , *PB );
}