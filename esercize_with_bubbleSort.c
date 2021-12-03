#include <stdio.h>

int main()
{
    int n[10000],boolean,k,j,frontiera,i,appo,scambio;
    k = 0;
    boolean = 0; //vero
    while(boolean != 1) // se boolean = 1 esce
    {
        printf("numero: ");
        scanf("%d", &n[k]);
        if(n[k] == 0)
        {
            boolean = 1; //falso
        }
        
        k++;
    }
    
    j = 0;
    for(j=0;j<k - 1;j++)
    {
        printf("array = %d,", n[j]);
    }
    
    k = k - 1;
    frontiera = k;
    scambio = 1;
    
    while(scambio != 0)
    {
        scambio = 0;
        for(i = 0;i < frontiera;i++)
        {
            if(n[i] > n[i + 1])
            {
                appo = n[i];
                n[i] = n[i + 1];
                n[i + 1] = appo;
                scambio++;
            }
        }
        frontiera--;
    }
    
    printf("\n\n\n");
    for(i = 1;i < k + 1;i++)
    {
        printf("array ordinato= %d,", n[i]);
    }
}
