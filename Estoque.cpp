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
        cout << "Redirecionando para o Menu.";
        i = i++;
    }

    void EditarQuantidade(){
        string editar;
        int nQuantidade;
        cout << "Qual produto gostaria de modificar? ";
        cin >> editar;
        for (int a =0; a < 100; a++){
            if (produto[a]->getNome() == editar){
                cout << "\nQuantidade atual: " << produto[a]->getQuantidade() << endl;
                cout << "Qual a quantidade desejada? ";
                cin >> nQuantidade;
                produto[a]->setQuantidade(nQuantidade);
                cout << "\nQuantidade alterada com sucesso!";
            } else {
                cout << "Produto não encontrado.";
            }
        }
        cout << "Redirecionando para o Menu.";
    }

    void PesquisarProduto(){
        string pesquisa;
        cout << "Qual produto gostaria de pesquisar? ";
        cin >> pesquisa;
        for (int a = 0; a < 100; a++){
            if (produto[a]->getNome() == pesquisa){
                produto[a]->ImprimeDados();
            } else {
                cout << "Produto não encontrado.";
            }
        }
        cout << "Redirecionando para o Menu.";
    }

    void VendaProduto(){
        string venda;
        char resposta;
        int x = 1;
        while (x != 0){
            cout << "Qual produto foi comprado? ";
            cin >> venda;
            for (int a = 0; a < 100; a++){
                if (produto[a]->getNome() == venda){
                    //algoritmo pra venda
                }
            }
            cout << "\nOutro produto foi comprado? s-sim n-não" << endl;
            cin >> resposta;
            if (resposta == 'n'){
                x = 0;
            }
        }
        cout << "Redirecionando para o Menu.";
    }

    void VisualizarRecibo(){

    }

    int Sair(){
        return 0; 
        //adicionar os dados pro arquivo
    }

};