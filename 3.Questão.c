#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;
    char nome[999][200];
    char numeroTelefone[999][200];
    int i;
    int contador = 0;
        

        do {
            printf("1 - Cadastrar outro contato telefônico. \n");
            printf("2 - Exibir os contatos telefônicos. \n");
            printf("\nDigite a opção desejada: ");
            scanf("%d", &opcao);
            printf("\n");
        
        fflush(stdin);

        
        switch (opcao) {
        
        case 1 :

        printf("Digite o nome do contato: ");
        gets(nome[contador]);
        
        printf("Digite o número de telefone: ");
        gets(numeroTelefone[contador]);
        
            contador++;
            break;

        case 2 :

        for (i = 0; i < contador; i++) {
        
        printf("Nome do contato: %s \n", nome[i]);
        printf("Número do telefone: %s \n", numeroTelefone[i]);
        printf("\n");
       
        }
        
           break;

        default:
        printf("Opção inválida. \n");
            break;
}
        
          }  while (opcao != 2);
        

    return 0;

}