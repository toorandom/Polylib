#include "poly.h"

int32_t poly_eval(polynomial_t *f, int32_t x) {
int32_t i,r=0,evar=0;
poly_sync(f);
for(i=0;i<f->deg;i++) {
	evar = (int)pow(x,i);
	r += evar*f->coef[i];
}
return r;
}
