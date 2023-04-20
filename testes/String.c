#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char nome[40];
char nomes[40];
char caminho[20] = "entrada";

scanf("%s", nome);
printf("%s\n", nome);

strcat(caminho , nome);
printf("%s\n", nome);

scanf("%s", nome);
printf("%s\n", nome);

strcpy(nomes, nome);
printf("%s\n", nomes);


return 0;
}
