#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ทำเองเด้อ

int main() {
    while (1) {
        srand( time( NULL ) ) ;

        int randomNumber = rand() % 100 + 1;
        int Want_to_play = 0;

        printf( "Do you want to play game? (1 = play | -1 = exit): \n" );
        int result = scanf( " %d" , &Want_to_play );
        if ( result != 1 ) { //เช็คว่าเป็นตัวเลขมั้ย ถ้าscanfรับค่าเป็นตัวเลข%dจะคืนค่ามาให้ 1 และเก็บไว้ใน result
            printf( "\n" );
            printf( "Please enter only 1 or -1\n\n" );
            while (getchar() != '\n'); // เคลียร์ buffer
            continue;
        }
        printf( "\n" );

        if ( Want_to_play == 1 ) { //เช็คว่าต้องการเล่นเกมมั้ย
            printf( "(Score=100)\n\n" );

            int Userscore = 100;
            int min = 1;
            int max = 100;

            while (1) {
                int Usernumber = 0;

                printf( "Guess the winning number (%d-%d) : \n" , min , max );
                scanf( " %d" , &Usernumber );
                printf( "\n" );

                if ( Usernumber == randomNumber ) {
                    printf( "That is correct! The winning number is %d.\n" , Usernumber );
                    printf( "Score this game: %d\n\n" , Userscore );
                    break;
                } else {
                    Userscore -= 10;

                    while (1) {
                        if ( Usernumber > randomNumber ) {
                            printf( "Sorry, the winning number is LOWER than %d. (Score %d)\n\n" , Usernumber , Userscore );
                            max = Usernumber - 1;
                            break;
                        } else {
                            printf( "Sorry, the winning number is HIGHER than %d. (Score %d)\n\n" , Usernumber , Userscore);
                            min = Usernumber + 1;
                            break;
                        }
                    } //จบ while เช็คตัวเลขผู้เล่น
                }
            } //จบ while ทายตัวเลข
        }else {
            printf( "See you again" );
            break;
        }
    } //จบ while หลัก
}