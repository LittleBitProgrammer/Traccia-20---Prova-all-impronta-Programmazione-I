//
//  main.c
//  Traccia 20 - Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 19/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>

struct persona{
    char* nome;
    char* cognome;
};

typedef struct persona id;

typedef struct partecipante{
    id utente;
    unsigned short codice;
}PARTECIPANTE;


void swapArray(PARTECIPANTE *, PARTECIPANTE *);
void selctionSort(PARTECIPANTE *, int);

int main(int argc, const char * argv[]) {
    int i;
    
    PARTECIPANTE partecipante[100];
    
    partecipante[0].utente.cognome="Lee";
    partecipante[0].utente.nome="Luca";
    partecipante[0].codice = 8376;
    partecipante[1].utente.cognome="Scorre";
    partecipante[1].utente.nome="Gina";
    partecipante[1].codice = 8566;
    partecipante[2].utente.cognome="Berlusconi";
    partecipante[2].utente.nome="Silvio";
    partecipante[2].codice = 834;

    selctionSort(partecipante, 3);
    
    for (i = 0 ; i < 3; i++) {
        printf("cognome = %s\n", partecipante[i].utente.cognome );
    }
    
    return 0;
}

void swapArray(PARTECIPANTE *first, PARTECIPANTE *second){
    PARTECIPANTE temp = *first;
    *first = *second;
    *second = temp;
}

void selctionSort(PARTECIPANTE *students_array, int n){
    int i,j = 0,min = 0;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (students_array[j].utente.cognome[0] < students_array[min].utente.cognome[0]) {
                min = j;
            }
        }
        swapArray(&students_array[min], &students_array[i]);
    }
}
