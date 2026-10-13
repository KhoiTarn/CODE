#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("vui long nhap 3 canh: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("3 canh nay la tam giac");
    }
    else
    {
        printf("3 canh nay khong phai la tam giac");
    }
    
    return 0;
}