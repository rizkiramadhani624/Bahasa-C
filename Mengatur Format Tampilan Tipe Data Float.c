#include <stdio.h>

/*
NAMA    : Rizki Ramadhani
NIM     : 160801087
JUDUL   : Mengatur Format Tampilan Tipe Data Float
*/

int main(void)
{
  printf("=========================================================== \n");
  printf("====== Mengatur Format Tampilan Tipe Data Float =========== \n");
  printf("=========================================================== \n");
  puts("");

  float angka1 = 1234.5678;

  printf("Isi variabel angka1: %f \n",angka1);
  printf("Isi variabel angka1: %15f \n",angka1);
  printf("Isi variabel angka1: %015f \n",angka1);
  printf("Isi variabel angka1: %.3f \n",angka1);
  printf("Isi variabel angka1: %010.3f \n",angka1);

  printf("Isi variabel angka1: %e \n",angka1);
  printf("Isi variabel angka1: %E \n",angka1);

  printf("\n");
  return 0;
}
