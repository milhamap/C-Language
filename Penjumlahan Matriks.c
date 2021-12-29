#include <stdio.h>
#include <stdlib.h>
#define MAKS 2

void main () {
    int i, j, a[MAKS][MAKS], b[MAKS][MAKS];

    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            printf ("Matriks A ordo [%d] [%d] = ", i+1, j+1);
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("\n");
    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            printf ("Matriks B ordo [%d] [%d] = ", i+1, j+1);
            scanf ("%d", &b[i][j]);
        }
    }
    printf ("\nMatriks A\n");
    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            printf ("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf ("\nMatriks B\n");
    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            printf ("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf ("\nHasil Penjumlahan Matriks A dan Matriks B : \n");
    for(i=0; i<MAKS; i++){
        for(j=0; j<MAKS; j++){
            printf ("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
