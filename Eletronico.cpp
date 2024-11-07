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
        this -> TensaoDeOperacao = TensaoDeOperacao;
    }

    float getTensaoDeOperacao(){
        return TensaoDeOperacao;
    }

    void setDatadeFabricacao(){
        this -> DatadeFabricacao = DatadeFabricacao;
    }

    string getDatadeFabricacao(){
        return DatadeFabricacao;
    }

    void ImprimeDados(){
        cout << "Seção -> Eletrônicos" << endl;
        cout << "Nome do Produto: " << Nome << endl;
        cout << "Preço: " << Preco << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Tensão de Operação: " << TensaoDeOperacao << endl;
        cout << "Data de Fabricação: " << DatadeFabricacao << endl;
    }
};