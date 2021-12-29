#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

typedef struct {
    char nama[MAX], grade;
    float tugas, uts, uas, average;
} daftar;
typedef struct {
    char nama[MAX];
    float akhir;
} data;
int n;

void input (daftar *);
void tampilan (daftar *, data *);

void main () {
    daftar mahasiswa[MAX];
    data maks[MAX];

    puts("MEGHITUNG NILAI AKHIR");
    puts("MATA KULIAH KONSEP PEMOGRAMAN\n");
    printf("Berapa jumlah mahasiswa ? ");
    scanf("%d", &n);
    puts("");
    puts("Masukkan DATA Mahasiswa");
    input(mahasiswa);
    tampilan(mahasiswa, maks);
}

void input (daftar *mhs){
    int i;

    for(i=0; i<n; i++){
        printf("\nMahasiswa ke-%d\n", i+1);
        fflush(stdin);
        printf("Nama\t\t: ");
        gets((*mhs).nama);
        fflush(stdin);
        printf("Nilai Tugas\t: ");
        scanf("%f", &(*mhs).tugas);
        fflush(stdin);
        printf("Nilai UTS\t: ");
        scanf("%f", &(*mhs).uts);
        fflush(stdin);
        printf("Nilai UAS\t: ");
        scanf("%f", &(*mhs).uas);

        (*mhs).average = ((*mhs).tugas * 0.2) + ((*mhs).uts * 0.4) + ((*mhs).uas * 0.4);
        
        if((*mhs).average >= 80)
            (*mhs).grade = 'A';
        else if((*mhs).average >= 70)
            (*mhs).grade = 'B';
        else if((*mhs).average >= 60)
            (*mhs).grade = 'C';
        else if((*mhs).average >= 50)
            (*mhs).grade = 'D';
        else
            (*mhs).grade = 'E';
        mhs++;
    }
}

void tampilan (daftar *mhs, data *maksimum){
    int i;

    puts("\n\t\t\tDAFTAR NILAI");
    puts("\t\tMATAKULIAH KONSEP PEMOGRAMAN");
    puts("------------------------------------------------------------------------");
    puts("No\tNama\t\t\t\t\tNilai\t\tGrade");
    puts("\tMahasiswa\t\tTugas\tUTS\tUAS\tAkhir");
    puts("------------------------------------------------------------------------");
    for(i=0; i<n; i++){
        printf("%d\t%s\t\t%g\t%g\t%g\t%g\t%c\n",
            i+1, (*mhs).nama, (*mhs).tugas, (*mhs).uts, (*mhs).uas, 
            (*mhs).average, (*mhs).grade);
        if ((*maksimum).akhir == 0 || (*mhs).average > (*maksimum).akhir){
            (*maksimum).akhir = (*mhs).average;
            strcpy ((*maksimum).nama, (*mhs).nama);
        }
        mhs++;
    }
    printf("\nTotal Mahasiswa = %d\n", n);
    puts ("");
    puts ("Nilai Tertinggi");
    printf ("Nama\t\t: %s\n", (*maksimum).nama);
    printf ("Nilai\t\t: %g\n", (*maksimum).akhir);
}