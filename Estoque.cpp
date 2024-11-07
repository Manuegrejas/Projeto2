#include <iostream>
#include "Produto.cpp"
#include "Alimento.cpp"
#include "Eletronico.cpp"
#include "Limpeza.cpp"
using namespace std;

class Estoque{
    private:
        Produto* produto[100];
        Alimento*ali;
        Eletronico*ele;
        Limpeza*lim;

    public:
        Estoque(){}

    void VisualizarEstoque(){

    }

    int i = 0;

    void AdicionarProduto(){
        string secao;
        string nome;
        float preco;
        int quantidade;
        string DataDeValidade;
        string tipo;
        float TensaoDeOperacao;
        string DataDeFabricacao;
        string marca;
        string categoria;
        cout << "Qual seção do produto é?\n a - Alimento\n e - Eletrônico\n l - Limpeza" << endl;
        cin >> secao;
        if (secao == "a"){
            cout << "Nome: ";
            cin >> nome; 
            cout << "\nPreço: ";
            cin >> preco;
            cout << "\nQuatidade: ";
            cin >> quantidade;
            cout << "\nData de validade: ";
            cin >> DataDeValidade;
            cout << "\nTipo de Alimento: ";
            cin >> tipo;
        produto[i] = new Alimento(nome, preco, quantidade, DataDeValidade, tipo);
        } else if (secao == "e"){
            cout << "Nome: ";
            cin >> nome; 
            cout << "\nPreço: ";
            cin >> preco;
            cout << "\nQuatidade: ";
            cin >> quantidade;
            cout << "\nTensão de Operação: ";
            cin >> TensaoDeOperacao; 
            cout << "\nData de Fabricação: ";
            cin >> DataDeFabricacao;
        produto[i] = new Eletronico(nome, preco, quantidade, TensaoDeOperacao, DataDeFabricacao);
        } else if (secao == "l"){
            cout << "Nome: ";
            cin >> nome; 
            cout << "\nPreço: ";
            cin >> preco;
            cout << "\nQuatidade: ";
            cin >> quantidade;
            cout << "\nMarca: ";
            cin >> marca;
            cout << "\nCategoria de risco: ";
            cin >> categoria;
        produto[i] = new Limpeza(nome, preco, quantidade, marca, categoria);
        }

        i = i++;
    }

    void EditarQuantidade(){

    }

    void PesquisarProduto(){

    }

    void VendaProduto(){

    }

    void VisualizarRecibo(){

    }

    int Sair(){
        return 0; 
        //adicionar os dados pro arquivo
    }

};