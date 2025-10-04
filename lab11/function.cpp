#include <stdio.h>
#include <math.h>

int findlenNumber(int a);
int isArmstrong(int number);

int main() {
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    if(isArmstrong(number)) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }

    return 0;
}

// ฟังก์ชันหาความยาวของตัวเลข
int findlenNumber(int a) { 
    if( a == 0 ) {
        return 1;
    }
    int i = 0;
    int lennumber = a;
    while(lennumber > 0) {
        i++;
        lennumber = lennumber / 10;
    }
    return i;
}

// ฟังก์ชันตรวจว่าเป็น Armstrong number หรือไม่
int isArmstrong(int number) {
    int len = findlenNumber(number);
    int copynum = number;
    int sum = 0;

    while(copynum > 0) {    
        int lastnum = copynum % 10;
        sum += (int)pow(lastnum, len);  // pow คืนค่า double  แปลงเป็น int
        copynum /= 10;
    }

    if(sum == number) {
        return 1;
    } else {
        return 0;
    }
}