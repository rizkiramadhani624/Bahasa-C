#include <stdio.h>

int main(void)
{
  printf("=========================================================== \n");
  printf("========= Program Penilaian Kinerja Belajar Siswa ========= \n");
  printf("=========================================================== \n");
  puts("");
  int nilai;

  printf("Input Nilai Anda (0 - 100): ");
  scanf("%i",&nilai);

  if (nilai >= 90 )
  {
    printf("Pertahankan Jagoan! \n");
  }
  else if (nilai >= 80 && nilai < 90)
  {
    printf("Harus lebih baik lagi \n");
  }
  else if (nilai >= 60 && nilai < 80)
  {
    printf("Perbanyak belajar Lagi  \n");
  }
  else if (nilai >= 40 && nilai < 60)
  {
    printf("Jangan keseringan main Game \n");
  }
  else if (nilai < 40)
  {
    printf("Kebanyakan bolos... \n");
  }
  else
  {
    printf("Maaf, format nilai tidak sesuai \n");
  }
  return 0;
}
