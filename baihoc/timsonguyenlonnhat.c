#include <stdio.h>

int main()
{
    int sothu1, sothu2, sothu3;
    printf("nhập số thứ 1: ");
    scanf("%d", &sothu1);
    printf("nhập số thứ 2: ");
    scanf("%d", &sothu2);
    printf("nhập số thứ 3: ");
    scanf("%d", &sothu3);

    int max;
    if(sothu1 > sothu2)
    {
        max = sothu1;
    }
    else
    {
        max= sothu2;
    }
    if(max < sothu3)
    {
        max = sothu3;
    }
    printf ("%d là số lớn nhất", max);
    return 0;
}