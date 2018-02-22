#include "poly.h"

void
poly_print (polynomial_t * x)
{
  int32_t i, flag = 0;
  poly_sync(x);
  for (i = x->deg; i >= 1; i--)
    if (x->coef[i] != 0)
      {
	if (x->coef[i] > 0) 
	           printf ("+");
	
	else if(x->coef[i] < 0)  
	    printf ("-");
	if(abs(x->coef[i]) != 1) 
	printf("%d", abs(x->coef[i]));
	if (i > 1)
	  printf ("x%d", i);
	else
	  printf ("x");
      }
  printf ("%c%d\n ", x->coef[0] >= 0 ? '+' : '-', abs (x->coef[0]));
  return;
}
