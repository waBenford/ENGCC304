#include <stdio.h>

int main() {
    int n;

    printf("User Input :");
    scanf("%d", &n);

    printf("Result : ");
    switch (n) {
        case 0:  puts("zero");   break;
        case 1:  puts("one");    break;
        case 2:  puts("two");    break;
        case 3:  puts("three");  break;
        case 4:  puts("four");   break;
        case 5:  puts("five");   break;
        case 6:  puts("six");    break;
        case 7:  puts("seven");  break;
        case 8:  puts("eight");  break;
        case 9:  puts("nine");   break;
        case 10: puts("ten");    break;
        case 11: puts("eleven"); break;
        case 12: puts("twelve"); break;
        default:
            puts("out of range");
    }
    return 0;
}
