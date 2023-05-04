#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hash{
    char nome[20];
    int code;
}hash;

typedef struct vetor* Pvetor;

typedef struct vetor{
    hash lista[7];
}vetor;

void inicializa(Pvetor trip);
void aleatorio(int* peso);
int soma(int* peso, char* nome);
int formula(int tam, int pessoa);
void insere(Pvetor trip, hash pessoa);
void procura(Pvetor trip, char* pessoa);
