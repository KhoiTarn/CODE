#include <stdio.h>

int main()
{
    int a, b = 0;
    printf("nhap vao so ma ban muon dem: ");
    scanf("%d", &a);
    do
    {
        int c = a % 10;
        b = b * 10 + c;
        a = a / 10;
    } while (a != 0);
    printf("%d", b);
    return 0;
}