#include <stdio.h>

int quytrongnam(int n)
{
    
    return ((n-1)/3) + 1;
}

int main()
{
    int n;
    printf("nhap thang: ");
    scanf("%d", &n);

    if (n < 1 || n > 12)
    {
        printf("thang khong hop le");
        return 0;
    }
        
    printf("thang %d thuoc quy: %d", n, quytrongnam(n));
    return 0;
}