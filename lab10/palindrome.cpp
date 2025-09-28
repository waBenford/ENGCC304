#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
        text[i] = tolower(text[i]);
        reverse[i] = tolower(text[i]);
    }

    if(strcmp(text, reverse) == 0) {
        printf("Pass.");
    } else {
        printf("Not Pass.");
    }

    return 0;
}
