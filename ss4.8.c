#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap canh thu 1: ");
    scanf("%d", &a);

    printf("Nhap canh thu 2: ");
    scanf("%d", &b);

    printf("Nhap canh thu 3: ");
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0 && 
        a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac\n");
    } else {
        printf("Khong phai 3 canh tam giac\n");
    }

    return 0;
}

