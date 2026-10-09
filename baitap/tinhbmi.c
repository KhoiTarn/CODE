#include <stdio.h>

int main()
{   
    float bmi, cannang,chieucao;
    printf("nhap chieu cao: ");
    scanf("%f", &chieucao);
    printf("nhap can nang: ");
    scanf("%f", &cannang);

    bmi=cannang/(chieucao*chieucao);

    if (bmi < 18.5) {
        printf("Gay");
    } else if (bmi >= 18.5 && bmi < 25)
    {
        printf("Binh thuong");
    }else if (bmi >= 25 && bmi < 30)
    {
        printf("Thua can");
    }
    else {
        printf("Beo phi");
    }
    return 0;
}