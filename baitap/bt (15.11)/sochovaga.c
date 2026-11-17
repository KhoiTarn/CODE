#include <stdio.h>

void gacho(int sochan, int tong)
{
    for (int soga = 0; soga < tong; soga++)
    {
        for (int socho = 0; socho < tong; socho++)
        {
            if ((soga*2)+(socho*4) == sochan && (soga+socho) == tong)
            {
                printf("so ga la %d so cho la %d",soga, socho);
            }
        }
    }
}

int main ()
{
    int sochan = 100, tong = 36;
    
    gacho(sochan, tong);
    return 0;
}