#include <stdio.h>

int main()
{
    int a[100], n;
    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);

    //nhap
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }

    int max;
    for (int i = 0; i < n - 1; i++)
    {
        max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[max] > a[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            int tmp = a[max];
            a[max] = a[i];
            a[i] = tmp;
        }
    }

    printf("mang sau khi duoc sap xep\n");
    //xuat
    for (int i = 0; i < n; i++)
    {
        printf(" a[%d] = %d\n", i, a[i]);
    }
    return 0;
}