#include <stdio.h>

int main() {
    int n[3];
    int sum = 0;

    printf("Enter number: \n");
    scanf("%d %d %d", &n[0], &n[1], &n[2]);

    for(int i = 0; i < 3; i++) {
        sum += n[i];
    }

    printf("Answer = %d\n", sum);
    return 0;
}