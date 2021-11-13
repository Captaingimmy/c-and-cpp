#include <iostream>

using namespace std;

int main()
{
    int weeks;
    
    cout << "giorno della settimana: ";
    cin >> weeks;
    
    switch(weeks){
        
        case 1:
        cout << "lunedi" << endl;
        break;
        
        case 2:
        cout << "martedi" << endl;
        break;
        
        case 3:
        cout << "mercoledi" << endl;
        break;
        
        case 4:
        cout << "giovedi" << endl;
        break;
        
        case 5:
        cout << "venerdi" << endl;
        break;
        
        case 6:
        cout << "sabato" << endl;
        break;
        
        case 7:
        cout << "domenica" << endl;
        break;
        
        default:
        cout << "error";
    }

    return 0;
}
