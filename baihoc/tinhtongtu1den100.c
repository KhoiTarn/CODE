#include <stdio.h>

int main ()
{
    int i, n, tong =0;
    printf("nhap n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i=i+2)
    { 
            tong= tong + i;
    }
    printf("tong cac so chan tu 1-100: %d\n", tong);
    return 0;
}