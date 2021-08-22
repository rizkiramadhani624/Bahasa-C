#include <stdio.h>

/*
NAMA    : Rizki Ramadhani
NIM     : 160801087
JUDUL   : menghitung keterlambatan mahasiswa
*/

int main(void)
{
  printf("=========================================================== \n");
  printf("========= Program Menghitung Nilai Kelulusan Ujian ======== \n");
  printf("=========================================================== \n");
  puts("");
  char nilai;

  printf("Input Nilai Anda (A - E): ");
  scanf("%c",&nilai);

  switch (nilai)
  {
    case 'A':
      printf("Pertahankan! \n");
      break;
    case 'B':
      printf("Harus lebih baik lagi \n");
      break;
    case 'C':
      printf("Perbanyak belajar \n");
      break;
    case 'D':
      printf("Jangan keseringan main \n");
      break;
    case 'E':
      printf("Kebanyakan bolos... \n");
      break;
    default:
      printf("Maaf, format nilai tidak sesuai \n");
  }

  return 0;
}
