#include <iostream>

using namespace std;

int main()
{
    int elenco[10],max,min,somma,dis,k;
    float media;
    somma = 0;
    
    cout << "numero: ";
    cin >> elenco[0];
    min = elenco[0];
    max = elenco[0];
    somma = somma + elenco[0];
    
    for(k = 1;k < 10;k++)
    {
        cout << "numero: ";
        cin >> elenco[k];
        somma = somma + elenco[0];
        
        if(elenco[k] > max)
        {
            max = elenco[k];
        }
        if(elenco[k] < min)
        {
            min = elenco[k];
        }
        
    }
    media = somma / 10.0;
    cout << "numero maggiore:" << max << endl;
    cout << "numero minore: " << min << endl;
    cout << "media: " << media << endl;
    if((max -media) > (media - min))
    {
        dis = max;
        cout << "più distante: " << dis;
    }
    else
    {
        dis = min;
        cout << "più distante: " << dis;
    }
}
    
    
