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

int main()
{
    int n;
    printf("nhap vao so n: ");
    scanf("%d", &n);

    int k = kiemtra_snt(n);
    if(k == 0)
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        printf("%d khong phai so nguyen to", n);
    }
    return 0;
}