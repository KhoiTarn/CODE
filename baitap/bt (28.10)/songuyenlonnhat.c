#include <stdio.h>

int main() {
    int a,songuyen, solonnhat = 0;
    printf("nhap so nguyen: ");
    scanf("%d", &songuyen);
    do
    {
        a = songuyen % 10;
        if (solonnhat < a)
         {
            solonnhat = a;
         }
         songuyen = songuyen / 10;
    } while (songuyen != 0);
    
    printf("so lon nhat la: %d", solonnhat);

    return 0;
}