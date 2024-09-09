#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 510000
using namespace std;

//Escreve vetor caso seja necess�rio
escreveVetor(int vetor[TAM]){

    int cont;
    //Escreve valores do vetor separado por "-"
    for(cont=0; cont<TAM;cont++){
        cout << vetor[cont]<< "-";

    }
}

//Cria um array com N valores adicionados
void criaArray(int vetor[TAM]){

    //bota os vaores nos arrays
    for (int cont = 0; cont<=TAM; cont++){
        vetor[cont] = cont+1;
    }
}

//Busca as informa��es com a busca simples indo em um valor por vez
int simplesSearch(int vetor[TAM], int valorprocurado, int* posicaoencontrada){

    int cont;

    bool valorFoiEncontrado;

    //faz o loop de busca um por um at� encontrar o valor procurado
    for(cont= 0; cont<TAM ; cont++){
        if(vetor[cont] == valorprocurado){
            valorFoiEncontrado = true;
            *posicaoencontrada = cont;
            break;
        }

    }

    //retorna verdedeiro se encontrado
    if (valorFoiEncontrado){
        return 1;
    }//Retorna falso caso n�o seja encontrado
    else{
        return -1;
    }
}

int main(){

    //cria vetor com o tamanho definino no topo do c�dico
    int vetor[TAM];
    //chama a fun��o pra criar o vetor
    criaArray(vetor);
    //indica o valor procurado pelo sistema
    int valorProcurado = 509999;
    int posicao,posicaoEncontrada;
    int cont;

    //escreveVetor(vetor);


    //deixa o usu�rio escolher o valor procurado
    printf("Qual numero deseja encontrar?");
    scanf("%d", &valorProcurado);

    //recebe o verdadeiro ou falso da fun�ao simplesSearch
    if(simplesSearch(vetor,valorProcurado,&posicaoEncontrada)==1){
        cout << "O valor foi encontrado na posicao:" << posicaoEncontrada;
    }else{
        cout << "Valor nao encontrado";
    }


    return 0;

}
