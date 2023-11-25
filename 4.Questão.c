#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero[5];
    int i;
    int impar=0;
    int par=0;
    int qntNegativos=0;
    int maior=0;
    int menor=9999;
    int somaPar=0;
    int somaNumeros=0;
    float mediaPar=0;
    float mediaNumeros=0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0) {
            par++;
            somaPar+=numero[i];
        }else{
            impar++;
        } 

        if (numero[i] < 0) {
            qntNegativos++;
        }
        
        somaNumeros+=numero[i];
        
        maior = numero[i] > maior ? numero[i] : maior;
        menor = numero[i] < menor ? numero[i] : menor;

    }

        mediaNumeros = somaNumeros / (float)i;
            
        if (par > 0) {
        mediaPar = somaPar / (float) par; 
       }
        
        printf("Quantidade de números ímpares: %d \n", impar);
        printf("Quantidade de números negativos: %d \n", qntNegativos);
        printf("Maior número: %d \n", maior);
        printf("Menor número: %d \n", maior);
        printf("Média números pares: %.1f \n", mediaPar);
        printf("Média números total: %.1f \n", mediaNumeros);


    return 0;

}