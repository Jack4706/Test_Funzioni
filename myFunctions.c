#include <stdio.h>
#include "myFunctions.h"

void conta(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", (i + 1));
    }
    printf("\n");
}


int doppio(int n) {

    return (2 * n);

}

float media(float a, float b, float c) {

    return (a + b + c) / 3;
}


void rettangolo(int base, int altezza) {

    for (int i = 0; i < altezza; i++) {
        for (int j = 0; j < base; j++) {
            printf("*");
        }
     printf("\n");
    }
}