#include<stdio.h>
int main()
{
     int num,divisore_max,boolean=0;  
    printf("numero: ");
    scanf("%d", &num);
    
    int k = num - 1;
    while(boolean != 1)
    {
         if(num % k == 0)
         {
             divisore_max = k;
             boolean = 1;
         }   
         else k--;
     }
    printf("divisore max: %d", divisore_max);
    if(k==1)
    {
       printf("numero primo");
    }
    else printf("non primo");
}
