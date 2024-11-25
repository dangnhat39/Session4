#include <stdio.h>

int main() {
    int number;

 
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    if (number % 3 == 0) {
        printf("So %d la so chia het cho 3 .\n", number);
    } else {
        printf("So %d la so le.\n", number);
    }

    return 2;
}

