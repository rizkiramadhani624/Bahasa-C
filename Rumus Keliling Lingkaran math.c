#include <stdio.h>
#include <math.h>

#define PHI 3.14

int main()
{
    float radius, Keliling;//

    printf("Masukkan nilai dari jari-jari lingkaran: ");
    scanf("%f",&radius);

    Keliling = 2*PHI*radius;
    printf("\nKeliling lingkaran yang diperoleh adalah: %.2f", Keliling);

	return 0;
}
