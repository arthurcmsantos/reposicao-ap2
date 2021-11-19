#include <stdio.h>
#include <stdlib.h>

void pesquisar(int array[], int numeroPesquisado){
    int posicao;
    int encontrado;
    for(int i = 0; i < 3; i++){
        if(array[i] == numeroPesquisado){
            posicao = i + 1;
            printf("Numero %d encontrado na posicao %d", numeroPesquisado, posicao);
            encontrado = 1;
            break;
        }
    }
    if(encontrado != 1)
        printf("Numero não encontrado");

}

int main () {

    int array[3], numeroPesquisado;

    for(int i = 0; i < 3; i++){
        printf("Digite um numero: ");
        scanf("%d", &array[i]);
    }

    printf("Digite um numero para pesquisar");
    scanf("%d", &numeroPesquisado);

    pesquisar(array,numeroPesquisado);

    return 0;
}