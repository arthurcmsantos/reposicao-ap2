#include <stdio.h>
#include <stdlib.h>

int dividir(float vetor[], int esquerda, int direita){
    int auxiliar;
    int contador = esquerda;

    for(int i=esquerda+1; i<=direita; i++){
        if(vetor[i] < vetor[esquerda]){
            contador++;
            auxiliar = vetor[i];
            vetor[i] = vetor[contador];
            vetor[contador] = auxiliar;
        }
    }

    auxiliar = vetor[esquerda];
    vetor[esquerda] = vetor[contador];
    vetor[contador] = auxiliar;

    return contador;
}


void quick(float vetor[], int esquerda, int direita){
    int posicao;
    if(esquerda<direita){
        posicao=dividir(vetor, esquerda, direita);
        quick(vetor, esquerda, posicao-1);
        quick(vetor, posicao+1, direita);
    }
}

int main () {

    float vetor[] = {3.5,5.9,6.8,9.8,8.10,7.5,1.88,2.2,4.4,10.0};
    int n = 10;

    quick(vetor,0, n);

    for (int i = 0; i < n; i++)
        printf("%.2f - ", vetor[i]);

    return 0;
}