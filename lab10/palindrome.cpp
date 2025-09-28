#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    char reverse[100];
    int len, i;

    printf("Enter word: ");
    scanf("%s", text);

    len = strlen(text); //หาความยาว text

    for(i = 0; i < len; i++) {
        reverse[i] = text[len - i - 1]; //มาเอาตัวท้าย สมมุติ tanwa = 5 (รอบแรก text[5 - 0 - 1 = 4] ตัวสุดท้ายarrayพอดี)
    }
    reverse[len] = '\0'; //จบstring

    for(i = 0; i < len; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + 32;   // แปลงเป็นเล็ก
        }
        if(reverse[i] >= 'A' && reverse[i] <= 'Z') {
            reverse[i] = reverse[i] + 32;
        }
    }

    if(strcmp(text, reverse) == 0) {
        printf("Pass.");
    } else {
        printf("Not Pass.");
    }

    return 0;
}
