#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int num, quant;
    

    printf("Quantos numeros serao colocados? \n");
    scanf("%d", &quant);

    int lista[quant];

    printf("Por favor coloque ordenado\n");

    for(int i = 0; i < quant; i++){
        printf("O %d numero eh: ", i+1);
        scanf("%d", &num);
        lista[i] = num;
    }

    printf("Lista: ");

    for(int i = 0; i < quant; i++){
        printf("%d ", lista[i]);
    }
    
    printf("\nQual numero sera procurado? \n"); //10
    scanf("%d", &num);


    float ind = quant/2;  //4
    int agora = ind;
    float inicio = 0; //0
    float fim = quant;  //8

    // printf("%d %d %d", inicio, ind, fim);

    while(1){
        printf("\nLista de procura: \n");

        for(int i = inicio; i < fim; i++){
            printf("%d ", lista[i]);
        }
        printf("\nNumero em destaque: %d", lista[agora]);

        if (ind < 0 || ind >= quant)
            break;

        if (lista[agora] < num){
            inicio = ind + 1;
            ind = ind + ceil((fim - 1 - ind)/2); //5 + (7 - 4)/2 == 7
            agora = ind;
        }
        
        else{ if (lista[agora] > num){
                fim = ind;
                ind = ind - ceil((fim - inicio)/2);
                agora = ind;
                }
            else{
                printf("\nParabens!!\nVoce achou o numero %d na posicao %d\n", lista[agora], agora+1);
                break;
            }
        }
        //0 1 2 3 4 5 6 7 8 9 10
    }

    return 0;
}
