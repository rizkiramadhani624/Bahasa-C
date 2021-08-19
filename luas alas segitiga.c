#include <stdio.h>
#include <stdlib.h>

void main()
{
int tinggi, alas;
float ans;
printf("Masukkan Tinggi dan Alas?\n");
scanf("%d %d",&tinggi, &alas);
ans= (tinggi*alas)/2;

printf("luas Alas segitiga adalah %f",ans);
return 0;
}
