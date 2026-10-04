#include <stdio.h>

int main ()
{
    int a;
    printf("nhập vào 1 số nguyên: ");
    scanf("%d, &a");

    if (a < 0)
    {
        a = 0 - a;
    }
    printf("giá trị tuyệt đối là: %d", a);
    return 0;
}