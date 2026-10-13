#include <stdio.h>
#include <math.h>

int main()
{
    int sonam;
    float tiengoc;
    printf("nhap tien goc: ");
    scanf("%f", &tiengoc);
    printf("nhap so nam: ");
    scanf("%d", &sonam);

    if (tiengoc < 0 || sonam <= 0)
    {
        printf("vui long nhap lai");
    }
    else if (sonam == 1)
    {
        printf("so tien nhan duoc sau %d la %.2f",sonam, tiengoc*1.05);
    }else if (sonam >= 2)
    {
        tiengoc = tiengoc * pow(1.05,sonam);
        printf("so tien nhan duoc sau %d la %.2f",sonam, tiengoc);
    }
    return 0;
}