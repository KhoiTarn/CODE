#include <stdio.h>

void nhapmang(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = 1;
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xeptat(int a[],int b[], int n, int t)
{
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                b[i] = 0;
                b[j] = 0;
                t++;
                break;
            }
        }
    }
    printf("tong so doi tat la: %d", t);
}

int main()
{
    int a[100], b[100], n, t = 0;
    printf("nhap vao kich thuoc mang: ");
    scanf("%d", &n);

    nhapmang(a,b,n);
    xeptat(a,b,n,t);
    return 0;
}