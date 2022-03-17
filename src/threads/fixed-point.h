#include <stdint.h>

#define F (1 << 14)
#define INT_MAX ((1 << 31) - 1)
#define INT_MIN (-(1 << 31))

int int_to_fp (int n) {
    return n * F;
}

int fp_to_int_zero (int x) {
    return x / F;
}

int fp_to_int_nearest (int x) {
    return (x >= 0) ? (x + F/2) : (x - F/2);
}

int fp_add (int x, int y) {
    return x + y;
}

int fp_sub (int x, int y) {
    return x - y;
}

int fp_add_int (int x, int n) {
    return x + n * F;
}

int fp_sub_int (int x, int n) {
    return x - n * F;
}

int fp_mult (int x, int y) {
    return ((int64_t) x) * y / F;
}

int fp_mult_int (int x, int n) {
    return x * n;
}

int fp_div (int x, int y) {
    return ((int64_t) x) * F / y;
}

int fp_div_int (int x, int n) {
    return x / n;
}