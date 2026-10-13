#include <stdio.h>

int main()
{
    int thang;
    printf("nhap thang: ");
    scanf("%d", &thang);
    
    switch (thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
        printf("thang %d co 31 ngay", thang);
        break;
    }
    case 4: case 6: case 9: case 11: {
        printf("thang %d co 30 ngay", thang);
        break;
    }
    case 2: {
        printf("thang %d co 28 ngay", thang);
        break;
    }
    default:
         printf("thang khong hop le");
        break;
    }
    
    return 0;

}