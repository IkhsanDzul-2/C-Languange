#include <stdio.h>
#include <conio.h>

//Function
float luasPersegi (float s) {
    float luas;
    luas = s*s;
    return luas;
}

float persegiPanjang (float p, float l) {
    float luas;
    luas = p*l;
    return luas;
}

float luasSegitiga(float a, float t){
    float luas = (a*t)*0.5;
    return luas;
}

float luasLingkaran(float r){
    return 3.14*r*r;
}

int main(){

    //Menu
    int pilihan;

    printf("Aplikasi Kalkulator Bangun Datar \n Pilih jenis bangun datar \n 1.Persegi \n 2.Persegi Panjang\n 3.Segitiga\n 4.Lingkaran");
    printf("\n Pilihan [1/2/3/4]");
    scanf("%d", &pilihan);

    if (pilihan == 1){
        //Rumus Persegi
        float s,hasil;
        printf("\n Masukan nilai Sisi \t: ");
        scanf("%2f", &s);

        hasil = luasPersegi(s);
        printf("Jadi luas nya adalah : %2.2f ", hasil);
    }else if (pilihan==2){
        //Rumus Persegi Panjang
        float p,l,hasil;
        printf("\n Masukan nilai Panjang \t: ");
        scanf("%2f", &p);
        printf("Masukan nilai Lebar \t: ");
        scanf("%2f", &l);

        hasil = persegiPanjang(p,l);
        printf("Hasil nya adalah : %2.2f", hasil);
    }else if (pilihan==3){
        //Rumus Segitiga
        float a,t,hasil;
        printf("\n Masukan nilai Alas \t: ");
        scanf("%2f", &a);
        printf("Masukan nilai Tinggi \t: ");
        scanf("%2f", &t);

        hasil = luasSegitiga(a,t);
        printf("Hasil nya adalah : %2.2f", hasil);
    }else if (pilihan==4){
        //Rumus Lingkaran
        float r,hasil;
        printf("\n Masukan nilai r \t: ");
        scanf("%2f", &r);

        hasil = luasLingkaran(r);
        printf("Diameter nya adalah : %2.2f", hasil);
    }
    
    getch();

    return 0;
}


