#include "poly.h"

int32_t poly_clean(polynomial_t *ptr) {
memset(ptr->coef,0,ptr->mem*sizeof(int32_t));
return NO_ERROR;
}
