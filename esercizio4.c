/*
Faccio inserire una parola di al massimo 20 lettere. La mando a video con le sue
lettere ordinate alfabeticamente.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char parola[21];
    int boolean,i,cont_parola,scambio,k,appo,frontiera;

    boolean = 0;
    cont_parola = 0;
    i = 0;

    printf("parola: ");
    gets(parola);

    while(boolean != 1)
    {
        if(parola[i] == '\0')
        {
            boolean = 1;
        }
        else
        {
            i++;
            cont_parola++;
        }
    }

    frontiera = cont_parola - 1;
    scambio = 1;
    while(scambio != 0)
    {
        scambio = 0;
        for(k = 0;k < frontiera;k++)
        {
            if(parola[k] > parola[k + 1])
            {
                appo = parola[k];
                parola[k] = parola[k + 1];
                parola[k + 1] = appo;
                scambio++;
            }
        }
        frontiera--;
    }

    printf("parola ordinata alfabeticamente: ");
    puts(parola);
}
