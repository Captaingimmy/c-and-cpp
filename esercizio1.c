/*
   Faccio inserire una parola di al massimo 20 lettere. La mando a video con tutte le
vocali sostituite da asterisco (carattere ‘*’)
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char parola[21];
    int boolean,k,cont_parola;

    k = 0;
    boolean = 0;
    cont_parola = 0;

    printf("stringa: \n");
    gets(parola);

    // in alternativa a questo potevo usare la funzione strlen(variabile stringa) per calcolare la lunghezza della stringa
    while(boolean != 1)
    {
        if(parola[k] == '\0')
        {
            boolean = 1;
        }
        else
        {
            k++;
            cont_parola++;
        }
    }

    for(k = 0;k < cont_parola;k++)
    {
        if((parola[k] == 'a') || (parola[k] == 'e') || (parola[k] == 'i') || (parola[k] == 'o') || (parola[k] == 'u'))
        {
            parola[k] = '*';
        }
    }

    puts(parola);

        
} 
