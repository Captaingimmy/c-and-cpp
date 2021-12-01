#include <stdio.h>

int main()
{
    int elenco[10],k,scambio,appo;
    
    for(k = 0;k < 10;k++)
    {
        printf("numero: ");
        scanf("%d", &elenco[k]);
    }
    
    int frontiera = 9;
    scambio = 1;
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
    for(k = 0;k < 10;k++)
    {
        printf("%d,", elenco[k]);
    }
}
