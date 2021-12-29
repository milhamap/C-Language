#include <stdio.h>
#include <stdlib.h>

void main () {
    struct makanan {
        char kode;
        char *jenis;
        float harga;
    } menu[3];
    int i;
    char option, jenis[3];
    float total=0, jumlah[3];

    puts("Toko GFC-Gerobak Fried Chicken\n");
    puts("Daftar Harga");
    puts("Kode\tJenis\tHarga per Potong");
    for (i=0; i<3; i++){
        if (i==0){
            menu[i].kode='D';
            menu[i].jenis="Dada";
            menu[i].harga=5000;
        }
        else if (i==1){
            menu[i].kode='P';
            menu[i].jenis="Paha";
            menu[i].harga=4000;
        }
        else if (i==2){
            menu[i].kode='S';
            menu[i].jenis="Sayap";
            menu[i].harga=3000;
        }
        printf("%c\t%s\tRp. %g\n", menu[i].kode, menu[i].jenis, menu[i].harga);
    }
    puts("Harga belum termasuk pajak : 10%%\n");
    puts("Masukkan Pesanan Anda (MAKS 3)");
    i=0;
    do {
        printf("Pesanan ke-%d\n", i+1);
        printf("Jenis (D/P/S)\t : ");
        scanf(" %c", &jenis[i]);
        printf("Jumlah\t\t : ");
        scanf("%f", &jumlah[i]);
        printf("Ada lagi (y/t) ? ");
        scanf(" %c", &option);
        puts("");
        if(jenis[i]=='D' || jenis[i]=='d'){
            total+=menu[0].harga*jumlah[i];
        }
        else if(jenis[i]=='P' || jenis[i]=='p'){
            total+=menu[1].harga*jumlah[i];
        }
        else if(jenis[i]=='S' || jenis[i]=='s'){
            total+=menu[2].harga*jumlah[i];
        }
        i++;
        if(i==3){
            break;
        }
    } while(option=='Y' || option=='y');
    puts("\nNota Belanja Anda :\n");
    puts("\t\tGEROBAK FRIED CHICKEN\n");
    puts("==============================================================");
    puts("No.\tJenis Potong\tHarga Satuan\tQty\tJumlah Harga");
    puts("==============================================================");
    for(i=0; i<3; i++){
        if (jenis[i]=='D' || jenis[i]=='d')
            printf("%d\t%s\t\tRp. %g\t%g\tRp. %g\n", 
                i+1, menu[0].jenis, menu[0].harga, jumlah[i], menu[0].harga*jumlah[i]);
        else if (jenis[i]=='P' || jenis[i]=='p')
            printf("%d\t%s\t\tRp. %g\t%g\tRp. %g\n", 
                i+1, menu[1].jenis, menu[1].harga, jumlah[i], menu[1].harga*jumlah[i]);
        else if (jenis[i]=='S' || jenis[i]=='s')
            printf("%d\t%s\t\tRp. %g\t%g\tRp. %g\n", 
                i+1, menu[2].jenis, menu[2].harga, jumlah[i], menu[2].harga*jumlah[i]);
    }
    puts("==============================================================");
    printf("\t\t\t\tJumlah bayar\t Rp. %g\n", total);
    printf("\t\t\t\tPajak 10\t Rp. %g\n", total*0.1);
    printf("\t\t\t\tTOTAL BAYAR\t Rp. %g\n", total+(total*0.1));
}