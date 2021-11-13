#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>

using namespace std;

int
main ()
{
  float n, operazione, n2, risultato;
  char risp[50];

  cout << "numero: ";
  cin >> n;

  cout << "operazione: + - / * : ";
  cin >> risp[0];

  cout << "secondo numero: ";
  cin >> n2;
  
  for(int i = 0;i < 101;i++)
  {
      cout << "loading:" << i << endl;
      sleep(1);
  }

  if (risp[0] == '+')
    {
      risultato = n + n2;
      cout << "risultato: " << risultato;
    }
  if (risp[0] == '-')
    {
      risultato = n - n2;
      cout << "risultato: " << risultato;
    }
  if (risp[0] == '*')
    {
      risultato = n * n2;
      cout << "risultato: " << risultato;
    }
  if (risp[0] == '/')
  {
      if(n2 == 0 && n != 0)
      {
          cout << "risultato impossibile";
      }
      if(n == 0 && n2 == 0)
      {
          cout << "risultato indeterminato";
      }
      else if(n2 != 0)
      {
          risultato = n / n2;
          cout << "risultato: " << risultato;
      }
  }
      



  return 0;
}
