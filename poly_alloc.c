#include "poly.h"

void *poly_alloc(uint32_t deg) {
	polynomial_t *ptr;
	ptr = calloc(deg,sizeof(struct polynomial));
	if(ptr == NULL) 
		return NULL;
	ptr->coef = calloc(deg+1,sizeof(int32_t));
	ptr->mem = deg;
	return ptr;
}
