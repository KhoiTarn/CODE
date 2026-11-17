#include <stdio.h>

void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int xoapt(int a[], int n)
{
    int k;
    printf("\nnhap phan tu muon xoa: ");
    scanf("%d", &k);
    for (int i = k; i < n; i++)
    {
        a[i] = a[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("mang sau khi xoa\n");
        printf("a[%d] = %d ", i, a[i]);
    }
    return 0;
}

void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d ", i, a[i]);
    }
}

int main() {
    int a[100], n;
    printf("nhap vao kich thuoc mang: ");
    scanf("%d", &n);


    nhapmang(a,n);
    xuatmang(a,n);
    xoapt(a,n);
    return 0;
}