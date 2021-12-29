#include <stdio.h>
#include <stdlib.h>

void main () {
    struct date {
        int day, month, year;
    }today, tomorrow;
    int benar;

    puts ("Tanggal berapa hari ini?");
    printf ("(dd-mm-yyyy) : ");
    scanf ("%d-%d-%d", &today.day, &today.month, &today.year);

    tomorrow = today;
    //Pengecekan tahun kabisat
    if (today.year % 4 == 0){
        if (today.month > 0 && today.month < 8){
            if (today.month == 2){
                if (today.day > 0 && today.day < 29){
                    tomorrow.day++;
                    benar=1;
                }
                else if (today.day == 29){
                    tomorrow.day=1;
                    tomorrow.month++;
                    benar=1;
                }
            }
            else if (today.month % 2 == 0){
                if (today.day > 0 && today.day < 30){
                    tomorrow.day++;
                    benar=1;
                }
                else if (today.day == 30){
                    tomorrow.day=1;
                    tomorrow.month++;
                    benar=1;
                }
            }
            else if (today.month % 2 != 0){
                if (today.day > 0 && today.day < 31){
                    tomorrow.day++;
                    benar=1;
                }
                else if (today.day == 31){
                    tomorrow.day=1;
                    tomorrow.month++;
                    benar=1;
                }
            }
        }
        else if (today.month > 7 && today.month < 12){
            if (today.month % 2 != 0){
                if (today.day > 0 && today.day < 30){
                    tomorrow.day++;
                    benar=1;
                }
                else if (today.day == 30){
                    tomorrow.day=1;
                    tomorrow.month++;
                    benar=1;
                }
            }
            else if (today.month % 2 == 0){
                if (today.day > 0 && today.day < 31){
                    tomorrow.day++;
                    benar=1;
                }
                else if (today.day == 31){
                    tomorrow.day=1;
                    tomorrow.month++;
                    benar=1;
                }
            }
        }
        else if (today.month == 12){
             if (today.day > 0 && today.day < 31){
                tomorrow.day++;
                benar=1;
                }
            else if (today.day == 31){
                tomorrow.day=1;
                tomorrow.month=1;
                tomorrow.year++;
                benar=1;
            }
        }
    }
    //Pengecekan tidak tahun kabisat
    else if (today.year % 4 != 0){
        if (today.month > 0 && today.month < 8){
            if (today.month % 2 == 0){
                if (today.day > 0 && today.day < 30){
                    tomorrow.day++;
                    benar=1;
                }
                else if (today.day == 30){
                    tomorrow.day=1;
                    tomorrow.month++;
                    benar=1;
                }
            }
            else if (today.month % 2 != 0){
                if (today.day > 0 && today.day < 31){
                    tomorrow.day++;
                    benar=1;
                }
                else if (today.day == 31){
                    tomorrow.day=1;
                    tomorrow.month++;
                    benar=1;
                }
            }
        }
        else if (today.month > 7 && today.month < 12){
            if (today.month % 2 != 0){
                if (today.day > 0 && today.day < 30){
                    tomorrow.day++;
                    benar=1;
                }
                else if (today.day == 30){
                    tomorrow.day=1;
                    tomorrow.month++;
                    benar=1;
                }
            }
            else if (today.month % 2 == 0){
                if (today.day > 0 && today.day < 31){
                    tomorrow.day++;
                    benar=1;
                }
                else if (today.day == 31){
                    tomorrow.day=1;
                    tomorrow.month++;
                    benar=1;
                }
            }
        }
        else if (today.month == 12){
            if (today.day > 0 && today.day < 31){
                tomorrow.day++;
                benar=1;
                }
            else if (today.day == 31){
                tomorrow.day=1;
                tomorrow.month=1;
                tomorrow.year++;
                benar=1;
            }
        }
    }
    if (benar==1)
        printf("\n\nTomorrow : %d-%d-%d", tomorrow.day, tomorrow.month, tomorrow.year);
    else
        puts("\nMaaf, tanggal yang anda masukkan tidak valid");
}
