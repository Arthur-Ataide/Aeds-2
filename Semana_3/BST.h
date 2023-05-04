#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TipoNo * TipoApontador;

typedef struct TipoNo{
    char nome[20];
    int matricula, nota;
    TipoApontador Esq, Dir;
}TipoNo;

void limpar();
void inicializa(TipoApontador *no);
void insere(TipoApontador *no, int num, int matricula, char* nome);
void imprimi(TipoApontador* no);
void Ordem (TipoApontador *no);
void PreOrdem (TipoApontador *no);
void PosOrdem (TipoApontador *no);
void Decrescente(TipoApontador *no);
void Quantidade(TipoApontador *no, int *cont);
void Soma(TipoApontador *no, int *soma);
void Media(TipoApontador *no, double* media, int cont, int soma);
void Maior(TipoApontador *no);
void Menor(TipoApontador *no);
void Compara(TipoApontador *no, int media, int* contador);
