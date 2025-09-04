#include <stdio.h>

int main() {
    int getNumber;


    printf( "Enter your Number: " );
    scanf( " %d" , &getNumber );

    printf( "Output: " );

    int i = getNumber;

    while( i >= 2 ) {
        int Prime = 1;
        int j = 2;

        while( j < i ) {
            if( i % j == 0 ) {
                Prime = 0;
                break;
            }
            j++;
        }

        if( Prime == 1 ) {
            printf( "%d " , i );
        }

        i--;

    }
}