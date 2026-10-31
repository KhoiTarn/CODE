#include <stdio.h>


int main()
{
    int a, tong = 0;
do
{
    printf("nhap so nguyen: ");
    scanf("%d", &a);
    tong = tong+a;
} while (a != 0);
 printf("tong la: %d", tong);
    return 0;
}

