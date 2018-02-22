#include "poly.h"
int main(void) {
polynomial_t *a,*b,*c;
a = poly_alloc(100);
b = poly_alloc(100);
c = poly_alloc(100);
a->deg = 1;
a->coef[0] = 1;
a->coef[1] = 1;
poly_exp(a,4,b);
poly_print(b);
poly_add(b,a,c);
poly_print(c);
b->deg = 2;
b->coef[0]=1;
b->coef[1]=2;
b->coef[2]=1;
poly_mult(c,b,a);
poly_print(a);
/* We eval in 0 we get the constant term */
printf("Eval of last polynomial in 0: f(0) = %d\n",poly_eval(a,0));  
/* We eval in a root if b(x) and a(x) must be 0 */
printf("Eval of last polynomial in 0: f(-1) = %d\n",poly_eval(a,-1));  
poly_free(a);
poly_free(b);
poly_free(c);
return 0;
}
