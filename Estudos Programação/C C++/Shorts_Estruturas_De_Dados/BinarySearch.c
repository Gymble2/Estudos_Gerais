#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

void escreveVetor(int vetor[TAM]){

    int cont;

    for(cont=0; cont<TAM;cont++){
        cout << vetor[cont]<< "-";

    }
}

int binarySearch(int vetor[TAM], int valorprocurado, int* posicaoencontrada){

    int direita = TAM - 1;
    int esquerda = 0;
    int meio;


    while (esquerda<= direita){
        meio = (direita - esquerda)/2;


        if (valorprocurado == vetor[meio]){
            *posicaoencontrada = meio;
            return 1;

        }

        if (valorprocurado < vetor[meio]){
            esquerda = meio +1 ;
        }else{
            direita = meio - 1 ;
        }



    }





}

int main(){

    int vetor [TAM] = {1,56,23,14,45,87,56,152,51,124};
    int valorProcurado;
    int posicao,posicaoEncontrada;

    int cont;

    escreveVetor(vetor);


    printf("Qual numero deseja encontrar?");
    scanf("%d", &valorProcurado);


    if(binarySearch(vetor,valorProcurado,&posicaoEncontrada)==1){
        cout << "O valor foi encontrado na posicao:" << posicaoEncontrada;
    }else{
        cout << "Valor nao encontrado";
    }


    return 0;

}
