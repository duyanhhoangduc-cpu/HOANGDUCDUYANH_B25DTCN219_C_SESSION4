#include <stdio.h>

int main() {
    int thang, nam;

    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);
    if (thang == 2) {
        printf("Nhap nam: ");
        scanf("%d", &nam);

        if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
            printf("Thang 2 co 29 ngay (nam nhuan)\n");
        } else {
            printf("Thang 2 co 28 ngay\n");
        }
    } 
    else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
             thang == 8 || thang == 10 || thang == 12) {
        printf("Thang %d co 31 ngay\n", thang);
    } 
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        printf("Thang %d co 30 ngay\n", thang);
    } 
    else {
        printf("Thang khong hop le\n");
    }

    return 0;
}

