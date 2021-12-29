#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAKS 13
#define MIN 3
#define PI 3.14159
float * radian();
float x[MAKS];

void main () {
    float derajat=0, data[MAKS][MIN];
    int i, j;

    printf("|\tx\t|\tSin(x)\t|\tCos(x)\t|\tTan(x)\t|\n");
    for(i=0; i<MAKS; i++){
        for(j=0; j<MIN; j++){
            if(j==0)
                data[i][j]=sin(radian(x)[i]);
            else if(j==1)
                data[i][j]=cos(radian(x)[i]);
            else
                data[i][j]=tan(radian(x)[i]);
        }
    }
    for(i=0; i<MAKS; i++){
        x[i]=derajat;
        printf("\t%g\t", x[i]);
        derajat+=30;
        for(j=0; j<MIN; j++){
            if(data[i][j]>2)
                printf("      INFINITE");
            else if (data[i][j]<0)
                printf ("       %.2f\t", data[i][j]);
            else
                printf("\t%.2f\t", data[i][j]);
        }
        printf("\n");
    }
}

float * radian () {
    int i;
    float derajat=0;
    for(i=0; i<MAKS; i++) {
        x[i]=(derajat/180.0)*PI;
        derajat+=30;
    }
    return x;
}
