#include <stdio.h>

/*
NAMA    : Rizki Ramadhani
NIM     : 160801087
JUDUL   : Tipe Array 2 Dimensi
*/

int main(void)
{
  int bilangan[2][2];

  bilangan[0][0] = 100;
  bilangan[0][1] = 101;
  bilangan[1][0] = 110;
  bilangan[1][1] = 111;

  printf("Isi array bilangan: \n");
  printf("%d, %d \n",bilangan[0][0],bilangan[0][1]);
  printf("%d, %d \n",bilangan[1][0],bilangan[1][1]);

  return 0;
}
