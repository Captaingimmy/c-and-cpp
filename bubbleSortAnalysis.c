#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int elenco[1000],k,scambio,appo;
    
    for(k = 0;k < 1000;k++)
    {
        elenco[k] = rand();
    }
    
    int frontiera = 999;
    scambio = 1;
    clock_t start = clock();
    while(scambio != 0)
    {
        scambio = 0;
        for(k = 0;k < frontiera;k++)
        {
            if(elenco[k] > elenco[k + 1])
            {
                appo = elenco[k];
                elenco[k] = elenco[k + 1];
                elenco[k + 1] = appo;
                scambio++;
            }
        }
        frontiera--;
    }
    clock_t end = clock();
    printf("Time elapsed: %f second \n", (double)(end-start) / CLOCKS_PER_SEC);
    for(k = 0;k < 1000;k++)
    {
        printf("%d,", elenco[k]);
    }
}
