/*
   Faccio inserire 20 numeri. Mando a video quanti sono i pari, quanti i dispari, quanti i
positivi, quanti i negativi, quanti i multipli di 5.
*/

#include <stdio.h>

int main()
{
    int arr[20],k,cont_pari,cont_dispari,cont_pos,cont_neg,multipli;
    
    cont_pari = 0;
    cont_dispari = 0;
    cont_pos = 0;
    cont_neg = 0;
    multipli = 0;

    for(k = 0;k < 20;k++)
    {
        printf("numero: ");
        scanf("%d", &arr[k]);
    } 

    for(k = 0;k < 20;k++)
    {
        if(arr[k] % 2 == 0)
        {
            cont_pari++;
        } 
        else cont_dispari++;

        if(arr[k] >= 0)
        {
            cont_pos++;
        } 
        else cont_neg++;

        if(arr[k] % 5 == 0)
        {
            multipli++;
        } 
    }

    printf("i numeri pari sono: %d\n", cont_pari);
    printf("i numeri dispari sono: %d\n", cont_dispari);
    printf("i numeri positivi sono: %d\n", cont_pos);
    printf("i numeri negativi sono: %d\n", cont_neg);
    printf("i numeri multipli di 5 sono: %d\n", multipli);
}    
