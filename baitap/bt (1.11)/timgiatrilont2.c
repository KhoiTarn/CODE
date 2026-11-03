#include <stdio.h>

int main()
{
    int a[100], ln = 0 , n, lt2 = -1;
    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] =  ", i);
        scanf("%d", &a[i]);
        if (a[ln] < a[i])
        {
            lt2 = ln;
            ln = i;
        }
        else
        {
            if (lt2 = -1|| a[lt2] < a[i])
            {
                lt2 = i;
            }
        }
    }  
    if (lt2 == -1)
    {
        printf("khong co phan tu lon thu 2");
    }
    else
    {
        printf("phan tu lon thu 2 trong mang la a[%d] = %d", lt2 ,a[lt2]);
    }
    return 0;
}