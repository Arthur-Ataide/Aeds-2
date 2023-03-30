#include <stdio.h>
#include <stdlib.h>

typedef struct TipoNo * TipoApontador;

typedef struct TipoNo{
    int num;
    TipoApontador Esq, Dir;
}TipoNo;


void inicializa(TipoApontador *no);
void insere(TipoApontador *no, int num);
void Ordem (TipoApontador *no);
void PreOrdem (TipoApontador *no);
void PosOrdem (TipoApontador *no);
