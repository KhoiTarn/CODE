#include <stdio.h>

int main()
{   
    float a,b;
    printf("nhap a: ");
    scanf("%f", &a);
    printf("nhap b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", -b/a);
    }
    return 0;
}