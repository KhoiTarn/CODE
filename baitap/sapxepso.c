#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("nhap 3 so a b c: ");
    scanf("%d %d %d", &a, &b, &c);

    int tmp;
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("so thu tu tang dan la: %d, %d, %d", a,b,c );
        }else if (c > b)
        {
            printf("so thu tu tang dan la: %d, %d, %d", a,c,b );
        }
    }else if (b > a && b > c)
    {
        if (a > c)
        {
            printf("so thu tu tang dan la: %d, %d, %d", b,a,c );
        }else if (c > a)
        {
            printf("so thu tu tang dan la: %d, %d, %d", b,c,a );
        }
    }else if (c > a && c > b)
    {
        if (b > a)
        {
            printf("so thu tu tang dan la: %d, %d, %d", c,b,a );
        }else if (a > b)
        {
            printf("so thu tu tang dan la: %d, %d, %d", c,a,b );
        }
    }else{
        printf("vui long nhap lai");
    }
    
    return 0;
}