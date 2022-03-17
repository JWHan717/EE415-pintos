#define F (1 << 14)
#define INT_MAX ((1 << 31) - 1)
#define INT_MIN (-(1 << 31))

int int_to_fp (int n) {
    return n * F;
}

int fp_to_int (int x) {
    return x / F;
}

