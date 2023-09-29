#include "Hash.h"

void inicializa(Pvetor trip){
    for (int i = 0; i < 7; i++){
        strcpy(trip->lista[i].nome, "\0");
    }
}

void aleatorio(int* peso){
    for(int i = 0; i < 20; i++){
        peso[i] = rand() % 100;
    }
}

int soma(int* peso, char* nome){
    int valor = 0;
    for (int i = 0; i < strlen(nome); i++){
        valor += nome[i] * peso[i];
    }
    return valor;
}

int formula(int pessoa){
    return (pessoa % 7);
}


void insere(Pvetor trip, hash pessoa, int* peso){

    int valor = soma()

    if (trip->lista[formula()].nome == "\0"){

    }
}


void procura(Pvetor trip, char* pessoa){

}

