#include <stdio.h>
#include "myFunctions.h"

int main(void) {
    int valFinale = 20;
    int base;
    int altezza;

    printf("inserisci l'altezza:\n");
    scanf("%d", &altezza);

    printf("inserisci la base:\n");
    scanf("%d", &base);

    rettangolo(base, altezza);

    printf("\n");

    conta(10);
    conta(valFinale);

    printf("%d\n", doppio(15));
    conta(doppio(20));


    printf("%.3f", media(13, 25, 36));


    return 0;
}
