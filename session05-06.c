#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    // nhap gia tri cho num1 num2 
    printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);

    do {
        // Hien thi menu
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        // Tinh toan theo lua chon cua nguoi dung 
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Tong cua 2 so ban nhap la: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Hieu cua 2 so ban nhap la: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Tich cua 2 so ban nhap la: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Thuong cua 2 so ban nhap la: %.2f\n", result);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (choice != 5);

    return 0;
}

