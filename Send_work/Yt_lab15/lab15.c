#include <stdio.h>
#include <stdlib.h>

int CheckCharacter(int character);
int CheckSpace(int character);

int main() {
    char filename[100];
    FILE *filePointer; // ตัวชี้ไฟล์
    int Character; // อักขระที่อ่านได้ทีละตัว
    int totalWord = 0; // ตัวนับคำทั้งหมด
    int Out_or_InsideTheword = 0; // อยู่นอกคำกำหนดเป็น 0

    printf("Enter file name: ");
    scanf("%100s", filename);

    // 2. เปิดไฟล์ fopen = File OPEN
    filePointer = fopen(filename, "r"); //คำสั่งที่ทำให้เปิดไฟล์ในโหมดอ่าน (read mode)

    // ตรวจสอบว่าเปิดไฟล์สำเร็จหรือไม่ เช่น ไฟล์ชื่อผิด, ไม่มีไฟล์ในโฟลเดอร์, ไฟล์ถูกล็อกอยู่
    if (filePointer == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // วนอ่านไฟล์ทีละตัว fgetc = File GET Character
    while ((Character = fgetc(filePointer)) != EOF) { //EOF = End Of File ตรวจสอบว่าอักขระที่เพิ่งอ่านเป็นจุดสิ้นสุดของไฟล์
        
        // กรองเครื่องหมายสัญลักษณ์ออก
        if (!CheckCharacter(Character) && !CheckSpace(Character)) { 
            Out_or_InsideTheword = 0; // ตั้งสถานะเป็น 'นอกคำ' เพื่อตัดคำที่ติดมา
            continue;
        }

        // กรองตัวแบ่งคำออก
        if (CheckSpace(Character)) {
            Out_or_InsideTheword = 0;

        } else {
            // ตรวจสอบว่าเพิ่งเริ่มต้นคำใหม่หรือไม่ (สถานะเดิมเป็น 0)
            if (Out_or_InsideTheword == 0) {
                totalWord++;      // นับคำเพิ่ม
                Out_or_InsideTheword = 1; // เปลี่ยนสถานะเป็น 'อยู่ในคำ'
            }
        }
    }

    // ปิดไฟล์และแสดงผลลัพธ์
    fclose(filePointer);
    printf("Total number of words in '%s' : %d words\n", filename, totalWord);

    return 0;
}


int CheckCharacter(int character) {
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') || (character >= '0' && character <= '9')) {
        return 1;
    }
    return 0;
}


int CheckSpace(int character) {
    if (character == ' ' || character == '\n' || character == '\t' || character == '\r') {
        return 1;
    }
    return 0;
}
