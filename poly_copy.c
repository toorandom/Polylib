#include "poly.h"

int32_t poly_copy(polynomial_t *dst , polynomial_t *src) {
	poly_clean(dst);
	poly_sync(src);
	dst->deg = src->deg;
	memcpy(dst->coef,src->coef,src->deg*sizeof(int32_t));
	return NO_ERROR;
}
