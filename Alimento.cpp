#include "Produto.cpp"
using namespace std;

class Alimento: public Produto{
    private:

    public:
        string DataDeValidade;
        string Tipo;

    Alimento(string Nome, float Preco, int Quantidade, string DataDeValidade, string Tipo): 
    Produto(Nome, Preco, Quantidade), DataDeValidade(DataDeValidade), Tipo(Tipo){}

    void setDataDeValidade(){

    }

    string getDataDeValidade(){

    }

    void setTipo(){

    }

    string getTipo(){

    }
};