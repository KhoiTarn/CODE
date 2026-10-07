#include <stdio.h>

int main()
{
    int thang;
    printf("nhap thang: ");
    scanf("%d", &thang);
    
    if (thang < 1 || thang > 12)
    {
        printf("thang khong hop le");
    }else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
    {
        printf("thang %d co 31 ngay", thang);
    }else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        printf("thang %d co 30 ngay", thang);
    }
    else
    {
        printf("thang %d co 28 ngay", thang);
    }
    
    return 0;

}