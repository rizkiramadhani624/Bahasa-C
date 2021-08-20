#include <stdio.h>

int main(void)
{
  printf("=========================================================== \n");
  printf("========= Program Menghitung Nilai Kelulusan Ujian ======== \n");
  printf("=========================================================== \n");
  puts("");
  int a;

  printf("Input nilai ujian: ");
  scanf("%d",&a);

  printf("\n");

  if (a >= 75) {
    printf("Selamat, anda lulus \n");
  }
  else {
    printf("Maaf, silahkan coba lagi tahun depan \n");
  }

  return 0;
}
