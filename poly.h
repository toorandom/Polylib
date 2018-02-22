#include <stdint.h>
#include <stdio.h>
#define NO_ERROR 0

typedef struct polynomial {
uint32_t deg;
int32_t *coef;
uint32_t field; 
uint32_t mem;
} polynomial_t;

