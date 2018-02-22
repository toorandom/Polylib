
#include "poly.h"

int32_t max(int p,int q) {
	return (p + q + abs (p - q)) / 2;
}
int32_t min(int p, int q) {
	return (p + q - abs(p-q) ) / 2; 
}

