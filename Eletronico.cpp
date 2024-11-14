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

    string RetornaDados(){
        string nome = Nome;
        string preco = to_string(Preco);
        string quantidade = to_string(Quantidade);
        string tensaodeoperacao = to_string(TensaoDeOperacao);
        string datadefabricacao = DatadeFabricacao;

        return "Eletrônico - Nome: " + nome + "; Quantidade: " + quantidade + "; Preço: R$" + preco + "; Tensão de Operação: " + tensaodeoperacao + "V; Data de Fabricação: " + datadefabricacao + ";";
    }
};