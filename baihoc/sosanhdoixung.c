#include <stdio.h>

int main()
{
    int a, b = 0;
    printf("nhap vao so ma ban muon dem: ");
    scanf("%d", &a);
    int d = a;
    do
    {
        int c = a % 10;
        b = b * 10 + c;
        a = a / 10;
    } while (a != 0);
    //cach1
    //d == b ? printf("doi xung") : printf("doi xung");
    //cach2
    if (d == b)
    {
        printf("doi xung");
    }
    else
    {
        printf("khong doi xung");
    }
    return 0;
}