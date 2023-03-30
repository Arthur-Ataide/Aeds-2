#include "ArvoreBi.c"

int main(){

    TipoApontador no;
    int count, num, mostra;
    int ordena = 1;

    inicializa(&no);

    printf("Voce quer inserir quantos numeros?\n");
    scanf("%d", &count);

    for (int i = 0; i < count; i++){
        printf("Qual o %d numero?\n", i+1);
        scanf("%d", &num);
        insere(&no, num);
    }    
    
    while (1){
        printf("Dejesa Ordenar?\n[1] Sim\n[2] Nao\n");
        scanf("%d", &ordena);

 
        
        if(ordena == 1){

            printf("Como voce quer mostrar a arvore:\n[1] Em Ordem\n[2] Pre Ordem\n[3] Pos Ordem\n");
            scanf("%d", &mostra);
            
            if (mostra == 1){
                Ordem(&no);
            }

            else if (mostra == 2){
                PreOrdem(&no);
            }

            else if (mostra == 3){
                PosOrdem(&no);
            }

            else{
                printf("\n\nNenhuma ordem possivel foi selecionada\n\n");
            }
            printf("\n");
        }

        if (ordena == 2){
            printf("Saindo da ordenacao\n");
        }

        if (ordena != 1 && ordena != 2){
            printf("\nOrdenacao Invalida\nTente novamente!\n\n");
        }

    }

    return 0;
}
//normal:
//
//
//
