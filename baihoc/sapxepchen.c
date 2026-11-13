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

void sapxepchen(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        int k = a[i];

        while (j > 0 && a[j-1] < k)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = k;
    }
}

int main() {

    int a[100], n;
    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);

    nhap_mang(a, n);

    printf("truoc khi sap xep");

    xuat_mang(a, n);

    sapxepchen(a, n);

    printf("\nsau khi sap xep");

    xuat_mang(a, n);
    return 0;
}