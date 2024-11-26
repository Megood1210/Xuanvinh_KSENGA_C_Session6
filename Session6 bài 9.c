#include <stdio.h>

int main() {
    int number, a, b, c, tong;

    for (number = 100; number <= 999; number++) {
        a = number / 100;       
        b = (number / 10) % 10; 
        c = number % 10;     

        tong = a * a * a + b * b * b + c * c * c;

        if (tong == number) {
            printf("%d ", number);
        }
    }

    printf("\n");
    return 0;
}



