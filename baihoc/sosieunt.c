#include <stdio.h>
#include <math.h>

int kiemtra_snt(int n)
{
    if (n < 2) return 1;
    if (n == 2) return 0;
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int kiemtra_sieu_nt(int n)
{
    if (n < 2) return 1;
    if (n == 2) return 0;
    
    while (n > 0)
    {
        if (kiemtra_snt(n) == 1)
        {
            return 1;
        }
        n = n/10;
    }
    return 0;
}

int main()
{
    int n;
    printf("nhap vao so n: ");
    scanf("%d", &n);

    int k = kiemtra_sieu_nt(n);
    
    if(k == 0)
    {
        printf("%d la so sieu nguyen to", n);
    }
    else
    {
        printf("%d khong phai so sieu nguyen to", n);
    }
    return 0;
}