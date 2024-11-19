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

    Estoque e1;

    e1.LerEstoque();

    int n = 1;
    char x;
    while (n != 0){
        cout << "\n=========== MENU ===========" << endl;
        cout << "Opções:\n" << endl;
        cout << "  VISUALIZAR ESTOQUE   -> e" << endl;
        cout << "   ADICIONAR PRODUTO   -> a" << endl;
        cout << "   EDITAR QUANTIDADE   -> q" << endl;
        cout << "   PESQUISAR PRODUTO   -> p" << endl;
        cout << "    VENDA DE PRODUTO   -> v" << endl;
        cout << "   VISUALIZAR RECIBO   -> r" << endl;
        cout << "                SAIR   -> s" << endl;
        cout << "============================" << endl;

        cout << "Digite a letra correspondente a função que será realizada: " << endl;
        cin >> x;

        switch (x){
            case 'e':
                e1.VisualizarEstoque();
                break;
            case 'a':
                e1.AdicionarProduto();
                break;
            case 'q':
                e1.EditarQuantidade();
                break;
            case 'p':
                e1.PesquisarProduto();
                break;
            case 'v':
                e1.VendaProduto();
                break;
            case 'r':
                e1.VisualizarRecibo();
                break;
            case 's':
                n = e1.Sair();
                break; 
        }
}
    return 0;
}