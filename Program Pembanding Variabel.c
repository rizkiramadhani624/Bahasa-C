#include <stdio.h>

int main(void)
{
   printf("=========================================================== \n");
   printf("========== Program Pembanding Variabel a terhadap b ======= \n");
   printf("=========================================================== \n");
   puts("");
   int a, b;

   printf("Input variabel a: ");
   scanf("%d",&a);

   printf("Input variabel b: ");
   scanf("%d",&b);

   printf("\n");

   if (a > b)
   {
   printf("Variabel a lebih besar dari variabel b \n");
   }
   if (a < b)
   {
   printf("Variabel a lebih kecil dari variabel b \n");
   }
   if (a == b)
   {
   printf("Variabel a sama besar dengan variabel b \n");
   }
   return 0;
}
