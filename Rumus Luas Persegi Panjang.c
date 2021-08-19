#include <stdio.h>

int main ()
{
int Panjang, Lebar, Luas;
printf("\nMasukkan Nilai Panjang Persegi Panjang :");
scanf("%d",&Panjang);

printf("\nMasukkan Nilai Lebar Persegi Panjang :");
scanf("%d",&Lebar);

Luas = Panjang*Lebar;
printf("\nLuas Persegi Panjang adalah:%d", Luas);

return (0);
}
