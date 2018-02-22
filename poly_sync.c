#include "poly.h"

void poly_sync(polynomial_t *f) {
int32_t i,c=0;
for(i=0;i<f->mem;i++) {
	if(f->coef[i] != 0) 
		c++;
}
f->deg = c;
}
