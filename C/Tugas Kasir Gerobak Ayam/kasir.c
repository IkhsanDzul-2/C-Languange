#include <stdio.h>
//author ikhsan
int main() {
    int banyakJenis, i;
    char kode;
    int banyakPotong;
    float harga, jumlahHarga = 0.0, pajak, totalBayar;

    //Menu dan harga
    printf("GEROBAK FRIED CHICKEN\n");
    printf("---------------------\n");
    printf("Kode   Jenis  Harga\n");
    printf("---------------------\n");
    printf("D      Dada   Rp. 2500\n");
    printf("P      Paha   Rp. 2000\n");
    printf("S      Sayap  Rp. 1500\n");
    printf("---------------------\n");
    
    printf("Banyak Jenis: ");
    scanf("%d", &banyakJenis);

    char jenis[banyakJenis];
    int banyak[banyakJenis];
    float hargaPerJenis[banyakJenis];

    //Banyak jenis
    for(i = 0; i < banyakJenis; i++) {
        printf("Jenis ke - %d\n", i+1);
        printf("Jenis Potong [D/P/S]: ");
        scanf(" %c", &kode);

        switch (kode) {
            case 'D':
            case 'd':
                harga = 2500;
                jenis[i] = 'D';
                break;
            case 'P':
            case 'p':
                harga = 2000;
                jenis[i] = 'P';
                break;
            case 'S':
            case 's':
                harga = 1500;
                jenis[i] = 'S';
                break;
            default:
                printf("Masukan kode jenis potong sesuai dengan yang ada di menu..\n");
                i--; 
                continue;
        }

        printf("Banyak Potong: ");
        scanf("%d", &banyakPotong);

        banyak[i] = banyakPotong;
        hargaPerJenis[i] = harga * banyakPotong;
        jumlahHarga += hargaPerJenis[i];
    }

    //Pajak dan total
    pajak = jumlahHarga * 0.10;
    totalBayar = jumlahHarga + pajak;

    printf("\nGEROBAK FRIED CHICKEN\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("No. Jenis  Harga Satuan  Banyak Beli  Jumlah Harga\n");
    printf("------------------------------------------------------------------------------------\n");

    for(i = 0; i < banyakJenis; i++) {
        printf("%2d  %4c   Rp. %7.0f     %6d      Rp. %7.0f\n", 
                i+1, 
                jenis[i], 
                (jenis[i] == 'D' ? 2500.0 : (jenis[i] == 'P' ? 2000.0 : 1500.0)), 
                banyak[i], 
                hargaPerJenis[i]);
    }

    printf("------------------------------------------------------------------------------------\n");
    printf("Jumlah Bayar    Rp. %.2f\n", jumlahHarga);
    printf("Pajak 10%%      Rp. %.2f\n", pajak);
    printf("Total Bayar     Rp. %.2f\n", totalBayar);

    getch();

    return 0;
}

