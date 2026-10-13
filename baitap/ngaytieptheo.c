#include <stdio.h>

int main (){
    int d, m, y;
    printf ("nhap vao ngay thang nam: ");
    scanf("%d %d %d", &d, &m, &y);

    d++;
    if (d > 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
    {
        d = 1;
        if (m >= 12)
        {
            m = 1;
            y++;
        }else{
            m++;
        }
        
    }
    else if (d > 30 && (m == 4 || m == 6 || m == 9 || m == 11))
    {
        d = 1;
        m++;
    }else if (m == 2)
    {
        if (((y % 4 == 0 && y % 100 != 0)  || y % 400 == 0) && d > 29)
        {
            d = 1;
            m++;
        }
        else if (!((y % 4 == 0 && y % 100 != 0)  || y % 400 == 0) && d > 28)
        {
            d=1;
            m++;
        }
    }
    
    printf("ngay tiep theo la: %d/%d/%d", d,m,y);
    return 0;
}