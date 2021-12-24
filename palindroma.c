// palindroma 


#include <stdio.h>
#include <string.h>

int main()
{
    //definizione variabili
    char parola[10],parola_inverse[10];
    int boolean,k; 
    printf("stringa: ");
    // scittura a video
    gets(parola);

    // lettura a video 
    printf(
    puts(parola);

    boolean = 0;
    int cont = 0,i = 0;
    while(boolean != 1)
    {
        if(parola[i] == '\0')
        {
            boolean = 1;
        }
        else
        {
            i++;
            cont++;
        }
    }

    int j = cont;
    int count = 0;

    for(k = 0;k< cont;k++)
    {
        if(parola[k] == parola[j - 1])
        {
            count++;
        }
        j--;
    }

    printf("\n");
    if(count == cont)
    {
        printf("parola palindroma");
    }
    else
    {
        printf("non palindroma");
    }
    printf("\n");



}

