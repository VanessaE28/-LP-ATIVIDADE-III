#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    int idade[5];
    float peso[5];
    float altura[5];
    int i;
    float maiorAltura=0;
    float menorAltura=9999;
    int maiorIdade=0;
    int menorIdade=99999;
    float maiorPeso=0;
    float menorPeso=999999;
    char nomeMaiorAltura[200];
    char nomeMenorAltura[200];
    char nomeMaiorIdade[200];
    char nomeMenorIdade[200];
    char nomeMaiorPeso[200];
    char nomeMenorPeso[200];

    for (i = 0; i < 5; i++) {
        printf("Digite o nome: ");
        gets(nome[i]);
            printf("Digite a idade: ");
            scanf("%d", &idade[i]);

            printf("Digite o peso: ");
            scanf("%f", &peso[i]);

            printf("Digite a altura: ");
            scanf("%f", &altura[i]);
      
        printf("\n");
        
        if (altura[i] > maiorAltura) {
            maiorAltura = altura[i];
            strcpy(nomeMaiorAltura, nome[i]);
         }
         if ( altura[i] < menorAltura) {
            menorAltura = altura[i];
            strcpy(nomeMenorAltura, nome[i]);
        
        }

        if (idade[i] > maiorIdade) {
            maiorIdade = idade[i];
            strcpy(nomeMaiorIdade, nome[i]);
         }
           if (idade[i] < menorIdade) {
            menorIdade = idade[i];
            strcpy(nomeMenorIdade, nome[i]);
        }

        if (peso[i] > maiorPeso) {
            maiorPeso = peso[i]; 
            strcpy(nomeMaiorPeso, nome[i]); }
            
             if (peso[i] < menorPeso) {
            menorPeso = peso[i];
            strcpy(nomeMenorPeso, nome[i]);
        }
        fflush(stdin);
    }


            printf("Pessoa com a maior idade: %s \t %d \n", nomeMaiorIdade, maiorIdade);

            printf("Pessoa com a menor idade: %s \t %d \n", nomeMenorIdade, menorIdade);

            printf("\nPessoa com o maior peso: %s \t %.3f \n", nomeMaiorPeso, maiorPeso);

            printf("\nPessoa com o menor peso: %s \t %.3f \n", nomeMenorPeso, menorPeso);

            printf("\nPessoa com a maior altura: %s \t %.2f \n", nomeMaiorAltura, maiorAltura);

            printf("\nNome menor altura: %s \t %.2f \n", nomeMenorAltura, menorAltura);
        

    return 0;

}