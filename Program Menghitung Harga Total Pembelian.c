#include <stdio.h>

/*
NAMA    : Rizki Ramadhani
NIM     : 160801087
JUDUL   : Menghitung Harga Total Pembelian
*/

int main(void)
{
  int Total;
  int harga1, harga2;

  printf("=========================================================== \n");
  printf("========= Program Menghitung Harga Total Pembelian ======== \n");
  printf("=========================================================== \n");
  puts("");

  printf("Masukkan Harga Barang: Rp ");
  scanf("%d",&harga1);
  printf("Masukkan Harga Barang: Rp ");
  scanf("%d",&harga2);
  Total= harga1+harga2;
  printf("\nTotal Harga Barang adalah: Rp %d", Total);
  printf("\n");

  return (0);
}
