#include <stdio.h>

int main() {
    int getNumber;

    printf( "Enter your number: " );
    scanf( " %d" , &getNumber );

    printf( "output:" );

    int i = getNumber;

    do {
        int Prime = 1;
        int j = 2;

        do {
            if ( i % j == 0 ) {
                Prime = 0;
                break;
            }
            j++;
        } while ( j < i );

        if ( Prime == 1 ) {
             printf( " %d " , i );
        }

        i--;

    } while ( i >= 2 );
}