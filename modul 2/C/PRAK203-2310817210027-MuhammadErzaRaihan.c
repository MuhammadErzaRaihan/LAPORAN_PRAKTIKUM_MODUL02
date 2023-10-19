#include <stdio.h>

int main() {
    float a, b, i, j, x, y;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &i);
    scanf("%f", &j);
    scanf("%f", &x);
    scanf("%f", &y);

    // Operasi Penjumlahan
    float hasil = (a - b) * (i / j) - (x + y);

    // Result
    printf("adalah %.3f", hasil);

    return 0;
}
