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
  printf("\n");

  int matrix[2][3] = {{1,2,3},{7,8,9}};

  printf("Isi array matrix: \n");
  printf("%d %d %d \n", matrix[0][0], matrix[0][1], matrix[0][2]);
  printf("%d %d %d \n", matrix[1][0], matrix[1][1], matrix[1][2]);

  return 0;
}
