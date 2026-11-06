#include <stdio.h>

int main()
{
    int n,b=0;
    int a[100];
    float tong = 0;

    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] =  ", i);
        scanf("%d", &a[i]);
        if (a[i] % 3 == 0)
        {
            tong = tong + a[i];
            b++;
        }
    }
    printf("trung binh cua cac so chia het cho 3 la %.2f", tong/b);
    

    return 0;
}