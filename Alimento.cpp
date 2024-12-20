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
        this -> DataDeValidade = DataDeValidade;
    }

    string getDataDeValidade(){
        return DataDeValidade;
    }

    void setTipo(){
        this -> Tipo = Tipo;
    }

    string getTipo(){
        return Tipo;
    }

    void ImprimeDados(){
        cout << "Seção -> Alimentos" << endl;
        cout << "Nome do Produto: " << Nome << endl;
        cout << "Preço: " << Preco << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Data de Validade: " << DataDeValidade << endl;
        cout << "Tipo de Alimento: " << Tipo << endl;
    }

    string RetornaDados(){
        string nome = Nome;
        string preco = to_string(Preco);
        string quantidade = to_string(Quantidade);
        string datadevalidade = DataDeValidade;
        string tipo = Tipo;

        return "Alimento - Nome: " + nome + "; Quantidade: " + quantidade + "; Preço: R$" + preco + "; Data de Validade: " + datadevalidade + "; Tipo: " + tipo + ";";
    }

};