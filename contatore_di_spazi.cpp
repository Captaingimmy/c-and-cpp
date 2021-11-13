#include <iostream>

using namespace std;

int main()
{
    char arr[20] = {"ciao mi chiamo mattia"};
    int spazio = 0,k;

    
    
    for(k = 0;k < 20;k++)
    {
        if(arr[k] == ' ')
        {
            
            spazio++;
        }
    }
    cout << spazio;
    
    

    return 0;
}
