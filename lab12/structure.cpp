#include <stdio.h>

void Grade(float a);

struct Student {
    char Name[20];
    char ID[3];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
}typedef S;

int main() {
    int i = 0;
    int n = 3;
    S Stu[n];

    printf( "Enter the details of 3 students :\n");
    for( i = 0 ; i < 3 ; i++ ) {
        printf( "Student %d :\n" , i + 1 );
        printf( "Name: " );
        scanf( "%s" , Stu[i].Name );
        printf( "ID: " );
        scanf( "%s" , Stu[i].ID );
        printf( "ScoreSub in Subject 1: " );
        scanf( "%f" , &Stu[i].ScoreSub1 );
        printf( "ScoreSub in Subject 2: " );
        scanf( "%f" , &Stu[i].ScoreSub2 );
        printf( "ScoreSub in Subject 3: " );
        scanf( "%f" , &Stu[i].ScoreSub3 );
        printf( "ScoreSub in Subject 4: " );
        scanf( "%f" , &Stu[i].ScoreSub4 );
        printf( "ScoreSub in Subject 5: " );
        scanf( "%f" , &Stu[i].ScoreSub5 );
        printf( "\n" );
    }

    for( i = 0 ; i < 3 ; i++ ) {
        printf( "Studen %d :\n" , i + 1 );
        printf( "Name: %s\n" , Stu[i].Name );
        printf( "Id: %s\n" , Stu[i].ID );
        printf( "Score:" );
        printf( " %.0f" , Stu[i].ScoreSub1 );
        printf( " %.0f" , Stu[i].ScoreSub2 );
        printf( " %.0f" , Stu[i].ScoreSub3 );
        printf( " %.0f" , Stu[i].ScoreSub4 );
        printf( " %.0f" , Stu[i].ScoreSub5 );
        printf( "\n" );

        float Point[5] = {Stu[i].ScoreSub1 , Stu[i].ScoreSub2 , Stu[i].ScoreSub3 , Stu[i].ScoreSub4 , Stu[i].ScoreSub5};

        printf( "Grade:" );
        for( int o = 0 ; o < 5 ; o++ ){
            Grade(Point[o]);
            printf( " " );
        }

        float sum = 0.0f;
        for (int o = 0; o < 5; o++) sum += Point[o];
        float avg = sum / 5.0f;
        printf( "\nAverage: %.2f" , avg );

        printf( "\n\n" );
    }
}



void Grade(float a) {
    if( a >= 80 ) printf( "A" );
    else if( a >= 75 ) printf( "B+" );
    else if( a >= 70 ) printf( "B" );
    else if( a >= 65 ) printf( "C+" );
    else if( a >= 60 ) printf( "C" );
    else if( a >= 55 ) printf( "D+" );
    else if( a >= 50 ) printf( "D" );
    else printf( "F" );
}