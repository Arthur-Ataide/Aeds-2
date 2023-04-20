#include "BST.h"

void limpar(){
    system("pause");
    system("cls");
}

void inicializa(TipoApontador *no){
    *no = NULL;
}

void insere(TipoApontador *no, int nota, int matricula, char* nome){
    if (*no == NULL){
        *no = (TipoApontador) malloc(sizeof(TipoNo));
        (*no)->nota = nota;
        (*no)->matricula = matricula;
        strcpy((*no)->nome, nome);
        (*no)->Dir = NULL;
        (*no)->Esq = NULL;
        return;
    }

    else if ((*no)->nota < nota){
        insere(&((*no)->Dir), nota, matricula, nome);

    }

    else if ((*no)->nota > nota){
        insere(&((*no)->Esq), nota, matricula, nome);

    }
    else{
        printf("Esse numero ja foi inserido\n");
    }
}

void imprimi(TipoApontador* no){
    printf("nome: %s - matricula: %d - nota: %d\n", (*no)->nome, (*no)->matricula, (*no)->nota);
}

void Ordem (TipoApontador *no){
    if (*no != NULL){
        Ordem(&((*no)->Esq));
        imprimi(no);
        Ordem(&((*no)->Dir));
    }

}

void PreOrdem (TipoApontador *no){
    if (*no != NULL){
        imprimi(no);
        PreOrdem(&((*no)->Esq));
        PreOrdem(&((*no)->Dir));
    }
}

void PosOrdem (TipoApontador *no){
    if (*no != NULL){
        PosOrdem(&((*no)->Esq));
        PosOrdem(&((*no)->Dir));
        imprimi(no);
    }
}

void Decrescente(TipoApontador *no){
    if (*no != NULL){
        Decrescente(&((*no)->Dir));
        imprimi(no);
        Decrescente(&((*no)->Esq));
    }
}

void Quantidade(TipoApontador *no, int *cont){
    if (*no != NULL){
        Quantidade(&((*no)->Esq), cont);
        (*cont) ++;
        Quantidade(&((*no)->Dir), cont);
    }
}

void Soma(TipoApontador *no, int *soma){
    if (*no != NULL){
        Soma(&((*no)->Esq), soma);
        (*soma) += (*no)->nota;
        Soma(&((*no)->Dir), soma);
    }
}

void Compara(TipoApontador *no, int media, int* contador){
    if (*no != NULL){
        Compara(&((*no)->Esq), media, contador);
        if (media == (*no)->nota)
            contador ++;
        Compara(&((*no)->Dir), media, contador);
    }
}

void Media(TipoApontador *no, double* media, int cont, int soma){
    Quantidade(no, &cont);
    Soma(no, &soma);
    (*media) = soma/cont;

}

void Menor(TipoApontador *no){
    if ((*no)->Esq != NULL){
        Menor(&((*no)->Esq));
    }

    else {
        printf("O aluno com menor nota eh:\n");
        imprimi(no);
    }
}

void Maior(TipoApontador *no){
    if ((*no)->Esq != NULL){
        Maior(&((*no)->Dir));
    }

    else {
        printf("O aluno com maior nota eh:\n");
        imprimi(no);
    }
    
}
