#include <stdio.h>
#include <stdlib.h>
/*
NAMA    : Rizki
NIM     : 160801087
JUDUL   : menghitung keterlambatan mahasiswa
*/

    int hasil;
    int selisihjam, selisihmenit, selisihdetik;
    int jam1, menit1, detik1, jam2, menit2, detik2;


int main()
{

    printf("=========================================================== \n");
    printf("========== Program Waktu Keterlambatan Mahasiswa ========== \n");
    printf("=========================================================== \n");
    puts("");
    printf("Masukan data jam masuk kelas mahasiswa : \n");
        printf("Jam \t : ");
            scanf("%d",&jam1);
        printf("Menit \t : ");
            scanf("%d",&menit1);
        printf("Detik \t : ");
            scanf("%d",&detik1);
                puts("===========================================================");
                printf("Waktu jadwal masuk kelas = %dj:%dm:%dd \n",jam1, menit1, detik1);
                puts("=========================================================== \n");
    printf("Masukan data jam kedatangan mahasiswa : \n");
        printf("Jam \t : ");
            scanf("%d",&jam2);
        printf("Menit \t : ");
            scanf("%d",&menit2);
        printf("Detik \t : ");
            scanf("%d",&detik2);
                puts("===========================================================");
                printf("Waktu kedatangan mahasiswa = %dj:%dm:%dd \n",jam2, menit2, detik2);
                puts("=========================================================== \n");
    printf("Selisih waktu keterlambatan mahasiswa : \n");
    printf("\t %dj:%dm:%dd \n",jam2, menit2, detik2);
    printf("\t %dj:%dm:%dd \n",jam1, menit1, detik1);
    printf("\t ========(-) \n");
    selisihjam=jam2-jam1;
    selisihmenit=menit2-menit1;
    selisihdetik=detik2-detik1;
    printf("\t %dj:%dm:%dd \n",selisihjam, selisihmenit, selisihdetik);

    hasil=(selisihjam*3600)+(selisihmenit*60)+(selisihdetik);
    puts("===========================================================");
    printf("Maka lama keterlambatan mahasiswa = %d detik \n", hasil);
    puts("===========================================================");


    return 0;
}
