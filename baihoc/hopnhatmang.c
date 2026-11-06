#include <stdio.h>

int main ()
{
    int a[] = {4, 7, 11, 15};
    int b[] = {1, 9, 13, 24, 50, 90};
    int c[100];
    int a_n = 4, b_m = 6, c_n = a_n + b_m;
    int dem_a = 0, dem_b = 0, dem_c = 0;

    while (dem_a < a_n && dem_b < b_m)
    {
        if (a[dem_a] < b[dem_b])
        {
            c[dem_c] = a[dem_a];
            dem_a++;
        }
        else
        {
            c[dem_c] = b[dem_b];
            dem_b++;
        }
        dem_c++;
    }
    
    while (dem_a < a_n)
    {
        c[dem_c] = a[dem_a];
        dem_a++;
    }
    while (dem_b < b_m)
    {
        c[dem_c++] = b[dem_b++];
    }
    
    printf("sau khi hop nhat mang\n");
    for (int i = 0; i < c_n; i++)
    {
        printf("%d \n", c[i]);
    }
    
    return 0;
}