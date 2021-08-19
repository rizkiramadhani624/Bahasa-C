#include <stdio.h>
#include <math.h>

#define PHI 3.14

int main()
{
    float radius, luas;//

    printf("Masukkan nilai dari jari-jari lingkaran: ");
    scanf("%f",&radius);

    luas = PHI*radius*radius;
    printf("\nLuas lingkaran yang diperoleh adalah: %.2f", luas);

	return 0;
}
