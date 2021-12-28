/*
Faccio inserire 20 numeri. Se sono tutti diversi mando a video “diversi”, altrimenti  mando a video il numero che si ripete più volte degli altri. 
*/

#include <stdio.h>

int main()
{
    int arr[20],k,diverso,cont,frontiera,scambio,arr_appo[20],appo,j,ripetizioni_max,numero_ripetuto;

    for(k = 0;k < 20;k++)
    {
        printf("numero: \n");
        scanf("%d", &arr[k]);
    }
    
    // ordinamento 
    frontiera = 19;
    scambio = 1;
    while(scambio != 0)
    {
        scambio = 0;
        for(k = 0;k < frontiera;k++)
       {
            if(arr[k] > arr[k + 1])
            {
                appo = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = appo;
                scambio++;
            }
        }
        frontiera--;
    }

    j = 0;
    diverso = arr[0];
    for(k = 0;k< 19;k++)
    {
        if(diverso != arr[k])
        {
            cont++;
        }
        diverso = arr[k];
    }

    if(cont == 18)
    {
        printf("diverso");
    }
    else
    {
        ripetizioni_max = 0;
        for(k = 0;k < 20;k++)
        {
            int volte = 0;
            for(int j = 0;j < 20;j++)
            {
                if(arr[k] == arr[j])
                {
                    volte++;
                }
            }
            if(volte > ripetizioni_max)
            {
                ripetizioni_max = volte;
                numero_ripetuto = arr[k];
            }
        }
        printf("il numero che si ripete di più è: %d", numero_ripetuto);
    }

}
