#include <stdio.h>

int main(void)
{
   printf("=========================================================== \n");
   printf("========== Program Menghitung Angka Ganjil atau Genap ===== \n");
   printf("=========================================================== \n");
   puts("");
   int a;

   printf("Input sembarang angka: ");
   scanf("%d",&a);

   printf("\n");

   if (a % 2 == 0)
   {
   printf("%d adalah angka genap \n", a);
   }
   if (a % 2 == 1)
   {
   printf("%d adalah angka ganjil \n", a);
   }

   return 0;
   }
