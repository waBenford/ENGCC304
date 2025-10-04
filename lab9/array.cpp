#include <stdio.h>

int main() {
    int N = 0;

    printf("Enter N : ");
    scanf("%d", &N);

    int block_N[N];

    // ลูปนอกสุด ไล่ array ทีละตัว
    for (int i = 0; i < N; i++) {
        int prime = 1;

        printf("Enter value[%d] : \n", i);
        scanf("%d", &block_N[i]);   

        // ลูปใน เอาตัว array ที่ไล่มา เช็คว่ามีตัวหารลงตัวมั้ย
        for (int j = 2; j < block_N[i]; j++) {
            if (block_N[i] % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 0) {
            block_N[i] = -1;
        }
    }

    printf("Index : ");
    // ลูป print Index
    for (int i = 0; i < N; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Array : ");
    // ลูป print Array
    for (int i = 0; i < N; i++) {
        if (block_N[i] == -1) {
            printf("# ");
        } else {
            printf("%d ", block_N[i]);
        }
    }

    return 0;
}
