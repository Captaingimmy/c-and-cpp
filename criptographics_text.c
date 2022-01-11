#include <string.h>
#include <stdio.h>

int main()
{
    char parola[1000],choice[30];
    int k,appo,temp,boolean;
    boolean = 0;

    while(boolean != 1)
    {
    printf("choice: ");
    gets(choice);
    if(choice[0] == '1')
    {
        printf("parola: ");
        gets(parola);
        for(k=0;k< strlen(parola);k++)
        {
            parola[k]++;
        }
        puts(parola);
    }
    else if(choice[0] == '2')
    {
        printf("parola: ");
        gets(parola);
        for(k=0;k < strlen(parola);k++)
        {
            parola[k]--;
        }
        puts(parola);
    }
    else if(choice[0] == '3')
    {
        printf("parola: ");
        gets(parola);
        int j;
        for(j=0;j<strlen(parola);j++)
        {
            char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
            char b[26] = {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
            for(k=0;k< strlen(a);k++)
            {
                if(parola[j] == a[k])
                {
                    temp = k;
                }
            }
            appo = a[temp];
            a[temp] = b[temp];
            b[temp] = appo;
            parola[j] = a[temp];
            
        }
        puts(parola);
    }
    else if(choice[0] == '4')
    {
        printf("parola: ");
        gets(parola);
        for(k = 0;k < strlen(parola);k++)
        {
            parola[k] = parola[k] - 32;
        }
        puts(parola);
    }
    else if(choice[0] == '5')
    {
        printf("parola: ");
        gets(parola);
        for(k = 0;k < strlen(parola);k++)
        {
            parola[k] = parola[k] + 32;
        }
        puts(parola);
    }
    else if(choice[0] == 'e')
    {
        boolean = 1;
    }
    }
}
