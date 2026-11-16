#include <stdio.h>

int tongchuso(int n)
{
    int k = 0;
    while (n != 0)
    {
        k = k + (n % 10);
        n = n / 10;
    }
    return k;
}

int main()
{
    int n;
    printf("nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    printf("tong cac chu so %d", tongchuso(n));
    return 0;
}