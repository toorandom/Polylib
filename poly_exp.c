#include "poly.h"

int32_t poly_exp(polynomial_t *a, int32_t e, polynomial_t *b)  {

	int i;
	polynomial_t *t; 
	poly_clean(b);
	poly_sync(a);
	b->coef[0] = 1;
	t = poly_alloc(a->mem*e); 
	for(i=0;i<=e;i++) {
		poly_mult(a,b,t);
		poly_copy(b,t);
		
	}
	poly_sync(b);
	return NO_ERROR;
}
