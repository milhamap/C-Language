#include <stdio.h>
#include <stdlib.h>
#define MAKS 35
void main () {
    int i, n, data[MAKS];

    printf ("Masukkan bilangan maksimal: ");
    scanf ("%d", &n);

    for (i=0; i<n; i++){
//        if(data[i]>n)
//        break;
//
//        printf ("%d ", data[i]);
//        data[i+1]=data[i]+data[i-1];
        if (i<2)
            data[i]=i;
        else
            data[i]=data[i-1]+data[i-2];

        if (data[i]>n)
            break;

        printf ("%d ", data[i]);
    }
}
