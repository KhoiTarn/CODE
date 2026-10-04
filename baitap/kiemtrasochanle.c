#include <stdio.h>

int main()
{
    int a;
    printf("nhập vào 1 số nguyên: ");
    scanf("%d", &a);

    if(a % 2 == 0 )
    {
        printf ("%d la so chan", a);
    }
    else
    {
        printf ("%d la so le", a);
    }

    return 0;
}