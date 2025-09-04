#include <stdio.h>

int main() {
    int getNumber;

    printf( "Enter your number: " );
    scanf( " %d" , &getNumber );

    printf( "output:" );

    for ( int i = getNumber; i >= 2; i-- ) {
        int Prime = 1;

        for ( int j = 2; j < i; j++ ) {
            if ( i % j == 0 ) {
                Prime = 0;
                break;
            }
        }

        if ( Prime == 1 ) {
             printf( " %d " , i );
        }
    }
}