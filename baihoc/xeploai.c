#include <stdio.h>

int main()
{
    float diem;

    printf("Nhap diem: ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10){
        printf("Diem khong hop le"); 
    }else if (diem >= 8 && diem <= 10)
    {
        printf("Gioi");
    }else if (diem >= 6)
    {
        printf("Kha");
    }else if (diem >= 4)
    {
        printf("TB");
    }else
    {
        printf("Yeu");
    }
    return 0;
}