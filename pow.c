#include <stdio.h>
int main()
{
  int base, exp;
  double double int value=1;
  printf("Enter base number and exponent respectively: ");
  scanf("%d%d", &base, &exp);
  while (exp!=0)
  {
      value*=base;  /* value = value*base; */
      --exp;
  }
  printf("Answer = %d", value);
}
