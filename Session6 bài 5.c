#include <stdio.h>

int dayInMonth(int month, int year) {
    int namNhuan = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return namNhuan ? 29 : 28;
        default:
            return -1;  
    }
}

int main() {
    int year, month, day;

    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Thang khong hop le.\n");
        return 1;  
    }

    day = dayInMonth(month, year);
    if (day == -1) {
        printf("Thang khong hop le.\n");
    } else {
        printf("Thang %d, nam %d co %d ngay.\n", month, year, day);
    }

    return 0;
}

