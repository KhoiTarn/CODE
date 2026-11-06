#include <stdio.h>

int main (){
    int d, m, y;
    printf ("nhap vao ngay thang nam: ");
    scanf("%d %d %d", &d, &m, &y);

    d--;
    if (d == 0 && (m == 5 || m == 7 || m == 10 || m == 12))
    {
        d = 30;
        m--;
    }
    else if (d == 0 && (m == 1 || m == 2  ||m == 4 || m == 6 || m == 8 || m == 9 || m == 11))
    {
        d = 31;
        m--;
        if (m == 0)
        {
            m = 12;
            y--;
        }
    }
    else if (m == 3 && d == 0)
    {
        if (((y % 4 == 0 && y % 100 != 0)  || y % 400 == 0) )
        {
            d = 29;
            m--;
        }
        else if (!((y % 4 == 0 && y % 100 != 0)  || y % 400 == 0))
        {
            d=28;
            m--;
        }
    }
    printf("ngay hom qua la: %d/%d/%d", d,m,y);
    return 0;
}