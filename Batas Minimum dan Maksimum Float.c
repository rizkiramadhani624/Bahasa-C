#include <stdio.h>
#include <float.h>

/*
NAMA    : Rizki Ramadhani
NIM     : 160801087
JUDUL   : Batas Minimum dan Maksimum Float
*/

int main(void)
{
 printf("Ukuran memory untuk tipe data float: %d byte \n", sizeof(float));
 printf("Ukuran memory untuk tipe data double: %d byte \n",sizeof(double));
 printf("\n");

 printf("Nilai minimal tipe data float: %E \n", FLT_MIN);
 printf("Nilai maksimal tipe data float: %E \n", FLT_MAX);
 printf("\n");

 printf("Nilai minimal tipe data double: %E \n", DBL_MIN);
 printf("Nilai maksimal tipe data double: %E \n", DBL_MAX);
 printf("\n");

 printf("Ketelitian float: %d digit\n", FLT_DIG );
 printf("Ketelitian double: %d digit\n", DBL_DIG );

 printf("\n");
 return 0;
}
