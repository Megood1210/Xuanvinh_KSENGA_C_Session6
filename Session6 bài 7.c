#include <stdio.h>

int main() {
    int number;

    printf("Nhap so nguyen: ");
    scanf("%d", &number);
    printf("Cac uoc cua %d la: ", number);
    
    int i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


