#include <stdio.h>

int main() {
    int Position , Time , Project;

    printf("Enter your Position(1-3): ");
    scanf("%d", &Position);
    printf("Enter your Time in work: ");
    scanf("%d", &Time);
    printf("Enter your Project success this years: ");
    scanf("%d", &Project);

    //Base salary เงินเริ่มต้นของแต่ละแผนก
    int Base = 0;

    switch( Position ) {
        case 1:
            Base = 20000;
            printf("Base salary: %d THB\n", Base);
            break;
        case 2:
            Base = 35000;
            printf("Base Salary: %d THB\n", Base);
            break;
        case 3:
            Base = 50000;
            printf("Base Salary: %d THB\n", Base);
            break;
        default:
            printf("Please input only number 1-3!\n");
            return 0;
    }

    //Experience_bonus โบนัสเวลาทำงาน
    int Time_bonus = 0;

    if( Time > 5 ) {
        Time_bonus = Base * 20 / 100;
        printf("Experience Bonus: %d THB\n", Time_bonus);
    }
    else if( Time >= 4 ) {
        Time_bonus = Base * 15 / 100;
        printf("Experience Bonus: %d THB\n", Time_bonus);
    }
    else if( Time >= 1 ) {
        Time_bonus = Base * 10 / 100;
        printf("Experience Bonus: %d THB\n", Time_bonus);
    }
    else {
        printf("Experience Bonus: 0 THB\n");
    }

    //Special Bonus โบนัสโปรเจ็คที่เสร็จ
    int Project_bonus = 0;

    if( Project > 5 ) {
        Project_bonus = Base * 5 / 100;
        printf("Special Bonus: %d THB\n", Project_bonus);
    }
    else {
        printf("Special Bonus: 0 THB\n");
    }

    int Total = 0;
    Total = Base + Time_bonus + Project_bonus;
    printf("Net Salary: %d THB\n", Total);

    return 0;
}
