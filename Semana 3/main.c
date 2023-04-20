#include "BST.h"

//nome – matrícula – nota.
//verificar por nota

int main(){

    TipoApontador no;
    int count, nota, matricula, mostra, num, cont, soma, contador;
    double media;
    int ordena = 1;
    char nome[20];
    char entrada[30] = "./entrada/";
    char arq[30];
    FILE* arquivo;
    

    inicializa(&no);
    while (1){

        printf("Voce quer usar Terminal ou o Arquivo ?\n");
        printf("[1] Terminal\n[2] Arquivo\n[3] Sair\n");
        scanf("%d", &num);
        limpar();

        switch (num){
        case 1:
            printf("Voce quer inserir quantos numeros?\n");
            scanf("%d", &count);

            for (int i = 0; i < count; i++){
                printf("Qual eh o seu nome - matricula - nota?\n");
                
                scanf("%s", nome);
                scanf("%d", &matricula);
                scanf("%d", &nota);
                limpar();

                insere(&no, nota, matricula, nome);
            }
            break;

        case 2:
            printf("Qual eh o nome do arquivo?\n"); 

            scanf(" %s", arq);
            strcat(entrada, arq);

            if ((arquivo = fopen(entrada, "r")) != NULL){
                while ((fscanf(arquivo, "%s %d %d", nome, &matricula, &nota)) != -1){
                    insere(&no, nota, matricula, nome);
                }
            }
            break;
        case 3:
            printf("Saindo...\n");
            limpar();
            return 0;
        
        default:
            printf("Opcao invalida!\n");
            limpar();
        }
        break;
    }

    while (1){
        printf("Dejesa aplicar alguma propriedade?\n[1] Sim\n[2] Nao\n");
        scanf("%d", &ordena);
        cont = 0;
        soma = 0;
        media = 0;
        contador = 0;
        
        if(ordena == 1){

            printf("Como voce quer mostrar a arvore:\n[1] Em Ordem\n[2] Pre Ordem\n[3] Pos Ordem\n[4] Decrescente\n[5] Quantidade de Alunos\n[6] Encontrar o Maior e o Menor\n[7] Media\n");
            scanf("%d", &mostra);
            limpar();
            
            switch (mostra){
                case 1:
                    Ordem(&no);
                    break;
                
                case 2:
                    PreOrdem(&no);
                    break;

                case 3:
                    PosOrdem(&no);
                    break;

                case 4:
                    Decrescente(&no);
                    break;

                case 5:
                    Quantidade(&no, &cont);
                    printf("Tem %d alunos\n", cont);
                    break;

                case 6:
                    Maior(&no);
                    Menor(&no);
                    break;

                case 7:
                    Media(&no, &media, cont, soma);
                    Compara(&no, media, &contador);
                    printf("A media eh %d\n", media);
                    printf("Tem %d alunos com a media\n", contador);
                    break;

                default:
                    printf("\n\nNenhuma ordem possivel foi selecionada\n\n");
                    break;
                printf("\n");
                }    
        }

        if (ordena == 2){
            printf("Saindo da ordenacao\n");
            break;
        }

        if (ordena != 1 && ordena != 2){
            printf("\nOrdenacao Invalida\nTente novamente!\n\n");
        }

    limpar();
    }

    return 0;
}
