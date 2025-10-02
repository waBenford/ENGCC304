#include <stdio.h>

int main() {
    char Name[50];
    int Age = 0;

    printf("Enter your name: ");
    scanf("%s", Name);  // อ่านชื่อ
    printf("Enter your age: ");
    scanf("%d", &Age);  // อ่านอายุ (ต้องใช้ &)

    printf("- - - - - -\n");
    printf("Hello %s\n", Name);  // แสดงชื่อ
    printf("Age = %d\n", Age);   // แสดงอายุ

    return 0;
}