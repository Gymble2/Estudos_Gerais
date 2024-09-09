#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

void limpaTela(){
    system("CLS");
}


void menuInicial(){

    int  opcao = 0;


    while (opcao < 1 || opcao > 3 ){
        limpaTela();
        cout << "Bem vindo ao Jogo";
        cout << "\n - Jogar";
        cout << "\n - Sobre";
        cout << "\n - Sair";
        cout << "\n - Escolha a opcao ";


        cin >> opcao;

        switch(opcao){
            case 1:
                //INICIA O JOGO
                cout << "Jogo iniciado";
                break;
            case 2:
                cout << "Informacoes do Jogo";
                break;
            case 3:
                cout<<"Ate mais";
                break;


        }

    }



}


int main(){

    menuInicial();

}
