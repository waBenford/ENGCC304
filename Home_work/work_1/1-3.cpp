#include <stdio.h>
#include <string>

int main() {
    char Firstname[90];
    char Lastname[90];

    printf( "Test case:\n" );
    printf( "   First Name: " );
    scanf( "%s", Firstname );
    printf( "   Last Name: " );
    scanf( "%s", Lastname );

    printf( "Output:\n" );
    printf( "   %s %s TC, RMUTL, Chiang Mai, Thailand", Firstname , Lastname );
    return 0;
}