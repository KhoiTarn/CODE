#include <stdio.h>

int main()
{
    int a, n = 0;
    printf("nhap vao so ma ban muon dem: ");
    scanf("%d", &a);
    do
    {
        a = a / 10;
        n++;
    } while (a != 0);
    printf("a co %d", n);
    return 0;
}