#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argv[]) {
    int anni;
    printf("Forse...(numero parametri: %d) %s\n", argv, argv, argv[0]);
    if (argv>1) printf("Primo argomento utente: %s\n", argv[1]);
    if (argv>2) {
        anni = atoi(argv[2]);
        if (anni != 0)
            printf("Secondo argomento utente (%s) valido %d\n", argv[2], anni);
        else {
            printf("Secondo argomento utente (%s) non valido\n", argv[2]);
            return -1;
        }
     }
     return 0;
 }