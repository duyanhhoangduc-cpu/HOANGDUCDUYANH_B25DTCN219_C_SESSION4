#include <stdio.h>

int main() {
    int ngay, thang, nam;
    int hop_le = 1; 
    printf("Nhap ngay: ");
    scanf("%d", &ngay);

    printf("Nhap thang: ");
    scanf("%d", &thang);

    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (thang < 1 || thang > 12) {
        hop_le = 0;
    } else {
        int so_ngay_trong_thang;

        
        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
            thang == 8 || thang == 10 || thang == 12) {
            so_ngay_trong_thang = 31;
        } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
            so_ngay_trong_thang = 30;
        } else if (thang == 2) {
            
            if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
                so_ngay_trong_thang = 29;
            } else {
                so_ngay_trong_thang = 28;
            }
        }

        if (ngay < 1 || ngay > so_ngay_trong_thang) {
            hop_le = 0;
        }
    }

    if (hop_le == 1) {
        printf("Ngay thang nam hop le\n");
    } else {
        printf("Ngay thang nam khong hop le\n");
    }

    return 0;
}

