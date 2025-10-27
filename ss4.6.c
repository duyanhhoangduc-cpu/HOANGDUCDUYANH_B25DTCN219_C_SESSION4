#include <stdio.h>

int main() {
    int chi_so_cu, chi_so_moi, so_dien;
    int tien_dien;

    printf("Nhap chi so cu: ");
    scanf("%d", &chi_so_cu);

    printf("Nhap chi so moi: ");
    scanf("%d", &chi_so_moi);

    // Tính s? di?n tiêu th?
    so_dien = chi_so_moi - chi_so_cu;

    if (so_dien < 0) {
        printf("Chi so moi phai lon hon chi so cu!\n");
        return 0;
    }

    // Xác d?nh don giá theo m?c tiêu th?
    if (so_dien < 50) {
        tien_dien = so_dien * 10000;
    } else if (so_dien < 100) {
        tien_dien = so_dien * 15000;
    } else if (so_dien < 150) {
        tien_dien = so_dien * 20000;
    } else if (so_dien < 200) {
        tien_dien = so_dien * 25000;
    } else {
        tien_dien = so_dien * 30000;
    }

    printf("So dien tieu thu: %d kWh\n", so_dien);
    printf("So tien phai tra: %d VND\n", tien_dien);

    return 0;
}

