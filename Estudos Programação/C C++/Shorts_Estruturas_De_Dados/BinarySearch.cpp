#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 510000

using namespace std; //para utilizar cout

void imprime_vetor(int vetor[TAM]){

    //Auxiliar contador
    int cont;

     //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }

}

//Cria um array com N valores adicionados
void criaArray(int vetor[TAM]){

    //bota os vaores nos arrays
    for (int cont = 0; cont<=TAM; cont++){
        vetor[cont] = cont+1;
    }
}

//Busca as informações com a busca binaria fazendo a busca utilizando a divisao de espaços
int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

    int esquerda = 0;           //Limite da esquerda
    int direita = TAM - 1;      //Limite da direita
    int meio;                   //O meio onde fica o cursor

    //faz o looping acontecer enquanto a esquerda for menor ou igual a direita
    while(esquerda <= direita){

        //Encontra o meio da an�lise
        meio = (esquerda + direita)/2;

        //Quando o valor do meio � encontrado
        if(valorProcurado == vetor[meio]){
            *posicaoEncontrada = meio;
            return 1;
        }

        //Ajustando os limites laterais
        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        }else{
            direita = meio - 1;
        }

    }

    return -1;

}

int main(){

    int vetor[TAM];
    criaArray(vetor);
    int valorProcurado = 509999;
    int posicao, posicaoEncontrada;

    //Auxiliar contador
    int cont;

    //Imprime o vetor na tela
    //imprime_vetor(vetor);

    //Lendo o n�mero buscado
    printf("Qual numero deseja encontrar?");
    scanf("%d", &valorProcurado);

    //recebe o verdadeiro ou falso da funçao busca_binaria
    if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor foi encontrado na posicao:" << posicaoEncontrada;
    }else{
        cout << "Valor nao encontrado";
    }

    return 0;

}
