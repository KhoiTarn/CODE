#include <stdio.h>

int main()
{
    int a[100], ln = 0 , n;
    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] =  ", i);
        scanf("%d", &a[i]);
        if (a[ln] < a[i])
        {
            ln = i;
        }

    }
    printf("phan tu lon nhat trong mang la a[%d] = %d", ln ,a[ln]);
    return 0;
}