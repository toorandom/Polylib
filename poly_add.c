#include "poly.h"

int32_t poly_add(polynomial_t *p, polynomial_t *q, polynomial_t *r) {
	int32_t i,dmin = min(p->deg,q->deg);
	poly_clean(r);
	poly_sync(p);
	poly_sync(q);
	if(p->deg > q->deg) 
		poly_copy(r,p);
	if(p->deg < q->deg) 
		poly_copy(r,q);
	for(i=0;i<=dmin;i++) 
		r->coef[i] = p->coef[i] + q->coef[i]; 
	poly_sync(r);
	return NO_ERROR;
}
