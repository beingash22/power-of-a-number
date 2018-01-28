#include <stdio.h>
#include <math.h>

void main ()
{
  int num, power, res;
  scanf ("%d\n%d", &num, &power);
  
  res= pow(num, power);
  
  printf ("%d", res);
  
}  
