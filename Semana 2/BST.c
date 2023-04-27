#include "BST.h"

void inicializa(TipoApontador *no){
    *no = NULL;
}

void insere(TipoApontador *no, int num){
    if (*no == NULL){
        *no = (TipoApontador) malloc(sizeof(TipoNo));
        (*no)->num = num;
        (*no)->Dir = NULL;
        (*no)->Esq = NULL;
        return;
    }

    else if ((*no)->num < num){
        insere(&((*no)->Dir), num);

    }

    else if ((*no)->num > num){
        insere(&((*no)->Esq), num);

    }
    else{
        printf("Esse numero ja foi inserido\n");
    }
}

void PreOrdem (TipoApontador *no){
    if (*no != NULL){
        printf("%d ", (*no)->num);
        PreOrdem(&((*no)->Esq));
        PreOrdem(&((*no)->Dir));
    }
}

void Ordem (TipoApontador *no){
    if (*no != NULL){
        Ordem(&((*no)->Esq));image.png
        printf("%d ", (*no)->num);
        Ordem(&((*no)->Dir));
    }

}

void PosOrdem (TipoApontador *no){
    if (*no != NULL){
        PosOrdem(&((*no)->Esq));
        PosOrdem(&((*no)->Dir));
        printf("%d ", (*no)->num);
    }
}


