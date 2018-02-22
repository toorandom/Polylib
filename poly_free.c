#include "poly.h"

void poly_free(polynomial_t *ptr) {
	free(ptr->coef);
	free(ptr);
	return;
}
