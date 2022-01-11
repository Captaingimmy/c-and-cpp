#include<stdio.h>

int main()
{
    int num,num2,max,max2,m_c_m,boolean,i;
    
    printf("numero: ");
    scanf("%d", &num);
    printf("numero: ");
    scanf("%d", &num2);
    

    
    if(num2>num)
    {
        max = num2;
        max2 = num;
    }
    else
    {
        max = num;
        max2 = num2;
    }
    boolean = 0;
    i = 1;
    while(boolean != 1)
    {
        if((max * i) % max2 == 0)
        {
            m_c_m = max * i;
            boolean = 1;
        }
        else i++;
    }
    printf("minimo comune multiplo %d", m_c_m );
}
    
