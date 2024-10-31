#include "Produto.cpp"
using namespace std;

class Eletronico: public Produto{
    private:

    public:
        float TensaoDeOperacao;
        string DatadeFabricacao;

    Eletronico(string Nome, float Preco, int Quantidade, float TensaoDeOperacao, string DatadeFabricacao): 
    Produto(Nome, Preco, Quantidade), TensaoDeOperacao(TensaoDeOperacao), DatadeFabricacao(DatadeFabricacao){}

    void setTensaoDeOperacao(){

    }

    float getTensaoDeOperacao(){

    }

    void setDatadeFabricacao(){

    }

    string getDatadeFabricacao(){

    }
};