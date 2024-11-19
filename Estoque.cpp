#include <iostream>
#include <fstream>
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
        cout << "============================" << endl;
        cout << "ESTOQUE" << endl; 
        fstream arquivo;
        string texto;
        arquivo.open("Estoque", ios::in);
        if(arquivo.is_open()){
            while( getline(arquivo, texto)) {
                cout << texto << "\n";
            }
            arquivo.close();
        }
        cout << "============================" << endl;

    }

    int i =0;

    bool LerEstoque(){
        fstream arquivo;
        string texto;
        arquivo.open("Estoque", ios::in);
        if(arquivo.is_open()){
            while( getline(arquivo, texto)) {
                

                i++;
            }
            arquivo.close();
        }
    }

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
        i++;
    }

    void EditarQuantidade(){
        string editar;
        int nQuantidade;
        cout << "Qual produto gostaria de modificar? ";
        cin >> editar;
        for (int a =0; a < i; a++){
            if (produto[a]->getNome() == editar){
                cout << "\nQuantidade atual: " << produto[a]->getQuantidade() << endl;
                cout << "Qual a quantidade desejada? ";
                cin >> nQuantidade;
                produto[a]->setQuantidade(nQuantidade);
                cout << "\nQuantidade alterada com sucesso!";
            } 
        }
        cout << "Redirecionando para o Menu.";
    }

    void PesquisarProduto(){
        string pesquisa;
        cout << "Qual produto gostaria de pesquisar? ";
        cin >> pesquisa;
        for (int a = 0; a < i; a++){
            cout << produto[a]->getNome() << endl;
            if (produto[a]->getNome() == pesquisa){
                produto[a]->ImprimeDados();
            } 
        }
        cout << "Redirecionando para o Menu.";
    }

    Produto* vendas[20];
    int v = 0;

    void VendaProduto(){
        string venda;
        char resposta;
        int quant;
        int x = 1;
        while (x != 0){
            cout << "Qual produto foi comprado? ";
            cin >> venda;
            for (int a = 0; a < i; a++){
                if (produto[a]->getNome() == venda){
                    cout << "\nQuantidade vendida: ";
                    cin >> quant;
                    int quantA = produto[a]->getQuantidade() - quant;
                    produto[a]->setQuantidade(quantA);
                    float preco = produto[a]->getPreco();

                    vendas[v] = new Produto(venda, preco, quant);
                    v++;
                }
            }
            cout << "\nOutro produto foi comprado? s-sim n-não" << endl;
            cin >> resposta;
            if (resposta == 'n'){
                x = 0;
            }
        }

        fstream arquivo;
        arquivo.open("Recibo", ios::out);
        if(arquivo.is_open()){
            for (int a = 0; a < v; a++){
                arquivo << vendas[a]->VoltaDados() << endl;
            }
            arquivo.close();
        }
        cout << "Redirecionando para o Menu.";
    }

    void VisualizarRecibo(){
        float total = 0;
        for (int a = 0; a < v; a++){
            float precoUn = vendas[a]->getPreco();
            int quant = vendas[a]->getQuantidade();
            total = total + (precoUn*quant); 
        }
        cout << "============================" << endl;
        cout << "RECIBO DE COMPRA" << endl; 
        cout << "Produto - Quantidade - Preço" << endl;
        fstream arquivo;
        string texto;
        arquivo.open("Recibo", ios::in);
        if(arquivo.is_open()){
            while( getline(arquivo, texto)) {
                cout << texto << "\n";
            }
            arquivo.close();
        }
        cout << "Preço total da compra: R$ " << total << endl;
        cout << "============================" << endl;

    }

    int Sair(){
        //adicionar os dados pro arquivo
        fstream arquivo;
        cout << i << endl;
        arquivo.open("Estoque", ios::out);
        if(arquivo.is_open()){
            for (int a = 0; a < i; a++){
                arquivo << produto[a]->RetornaDados() << endl;
            }
            arquivo.close();
        }

        return 0; 
    }

};