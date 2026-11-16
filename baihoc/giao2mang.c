#include <stdio.h>

int nhapmang(int a[], int n )
{
    for (int i = 0; i < n; i++)
    {
        printf("\nnhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
    return 0;
}

int giaomang(int a[], int b[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("\nphan tu trung nhau: %d", b[j]);
            }
        }
    }
    return 0;
}

int main()
{
    int a[100], b[100], n,m;
    printf("nhap vao kich thuoc mang a: ");
    scanf("%d", &n);
    printf("nhap vao kich thuoc mang b: ");
    scanf("%d", &m);

    nhapmang(a,n);
    nhapmang(b,m);
    giaomang(a,b,n,m);

    return 0;
}