#include <stdio.h>

void nhap_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("a[%d] = ",i);
    scanf("%d", &a[i]);
    }
}

void xuat_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }
    
}

void sapxepchon(int a[], int n)
{
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
}

int main() {

    int a[100], n;
    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);

    nhap_mang(a, n);

    printf("truoc khi sap xep");

    xuat_mang(a, n);

    sapxepchon(a, n);

    printf("\nsau khi sap xep");

    xuat_mang(a, n);
    return 0;
}