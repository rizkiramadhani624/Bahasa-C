#include <stdio.h>
#include <stdlib.h>

/*
    Nama            : Rizki
    NIM             : 160801087
    Modifikasi      : -
    Judul           : menghitung volume tabung
*/

    float vol, phi=3.14;
    int d, t, r;

int main()
{
    printf("========== Menghitung Volume Tabung ==========\n");
    printf("Diketahui :  \n");
    printf("Diameter tabung = ");
    scanf("%f",&d);
    printf("Tinggi tabung   =  ");
    scanf("%f",&t);
    printf("Jari-Jari tabung   = ");
    scanf("%f",&r);
    printf("============================ \n");
    printf("Dengan rumus = Phi*r^2*t\n");
    printf("============================ \n");
    vol=phi*(r^2)*t;
    puts("");
    printf ("Maka volume tabung = %.2f\n", vol);
return 0;
}
