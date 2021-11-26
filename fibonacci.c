#include <stdio.h>

int main ()
{
  int fibonacci[10], arr[10], k;
  for(k=0;k<10;k++)
  {
      fibonacci[k] = 0;
  }
  fibonacci[0] = 1;
  for(k=2;k<10;k++)
  {
      fibonacci[k] = fibonacci[k - 1] + fibonacci[k - 2];
  }
  for(k=1;k<10;k++)
  {
      printf("%d,", fibonacci[k]);
  }
}
