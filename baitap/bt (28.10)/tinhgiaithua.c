#include <stdio.h>

int main()
{
    int n,giaithua = 1;
    printf("nhap vao n!: ");
    scanf("%d", &n);
    if (n>0)
    {
        do
    {
        giaithua = giaithua * n;
        n--;
    } while (n != 0);
    printf("n! la: %d ", giaithua);
    }
    else if (n == 0)
    {
        printf("n! la 1");
    }
    else 
    {
        printf("vui long nhap lai!");
    }
    return 0;
}