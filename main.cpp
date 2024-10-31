/*************************************************************/
/*************************PROJETO 2***************************/
/*Nome:*******************************************************/
/*Luana Nascimento Karpavicius                   11.122.132-1*/
/*Manuella Valles Egrejas                        11.122.138-8*/
/*Matheus Marcondes Pereira Rufino               11.122.028-1*/
/*************************************************************/

#include <iostream>
#include "Estoque.cpp" 
using namespace std;

int main(){
    char x;
    while (1){
        cout << "\n=========== MENU ===========" << endl;
        cout << "Opções:\n" << endl;
        cout << "   VISUALIZAR ESTOQUE   -> e" << endl;
        cout << "   ADICIONAR PRODUTO   -> a" << endl;
        cout << "   EDITAR QUANTIDADE   -> q" << endl;
        cout << "   PESQUISAR PRODUTO   -> p" << endl;
        cout << "   VENDA DE PRODUTO   -> v" << endl;
        cout << "   VISUALIZAR RECIBO   -> r" << endl;
        cout << "        SAIR            -> s" << endl;
        cout << "============================" << endl;

        cout << "Digite a letra correspondente a função que será realizada: " << endl;
        scanf(" %c", &x);
}
    return 0;
}