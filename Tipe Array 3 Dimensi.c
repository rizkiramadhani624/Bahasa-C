#include <stdio.h>

/*
NAMA    : Rizki Ramadhani
NIM     : 160801087
JUDUL   : Tipe Array 3 Dimensi
*/

int main(void)
{
  int matrix[2][3][4] =
  {
     { {7, 4, 12, 3}, {-9, 29, 3, 11}, {6, 34, 23, 20} },
     { {6, 15, 1, 5}, {17, 8, -3, 15}, {99, -1, 44, 9} }
  };

  printf("Isi matrix[0][0][0]: %d \n",matrix[0][0][0]);
  printf("Isi matrix[0][1][0]: %d \n",matrix[0][1][0]);
  printf("Isi matrix[1][1][3]: %d \n",matrix[1][1][3]);
  printf("Isi matrix[1][2][3]: %d \n",matrix[1][2][3]);

  return 0;
}
