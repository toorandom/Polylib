#include "poly.h"


int32_t poly_mult(polynomial_t *p, polynomial_t *q, polynomial_t *r) {
	int32_t i,j;
	poly_clean(r);
	poly_sync(p);
	poly_sync(q);
	for(i=0;i<=p->deg;i++)
		for(j=0;j<=q->deg;j++) 
			r->coef[i+j] += (p->coef[i]*q->coef[j]);  
	r->deg = p->deg+q->deg;
	poly_sync(r);
	return NO_ERROR;
}


