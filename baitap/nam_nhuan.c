#include <stdio.h>

int main()
{
    int year;
    printf("nhập vào năm: ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0  || year % 400 == 0)
    {
        printf ("%d là năm nhuận", year);
    }
    else
    {
        printf ("%d là năm không nhuận", year);
    }

    return 0;
}