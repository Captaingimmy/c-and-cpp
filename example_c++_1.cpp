#include <iostream>

using namespace std;

int main()
{
    int elenco[10],k;
    
    for(k = 0;k < 10;k++)
    {
        cout << "numero: ";
        cin >> elenco[k];
    }
    for(k = 9;k >= 0;k--)
    {
        cout << elenco[k] << endl;
    }
}
    
