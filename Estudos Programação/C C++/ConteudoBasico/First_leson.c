#include <stdio.h>
#include <stdlib.h>

void main(){

    //criando a String
    char palavra[10];

    //instru��o
    printf("Digite uma palavra: ");

    //limpa o buffer
    setbuf(stdin, 0);

    //L� a String
    fgets(palavra, 10, stdin);

    //Limpa as casas n�o utilizadas
    palavra[strlen(palavra)-1] = '\0';


     //Imprime na tela
    printf("\n%s ", palavra);

    //Pausa o programa ap�s executar
    system("pause");






}
