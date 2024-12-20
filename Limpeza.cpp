#include "Produto.cpp"
using namespace std;

class Limpeza: public Produto{
    private:

    public:
        string Marca;
        string Categoria;

    Limpeza(string Nome, float Preco, int Quantidade, string Marca, string Categoria): 
    Produto(Nome, Preco, Quantidade), Marca(Marca), Categoria(Categoria){}


    void setMarca(){
        this -> Marca = Marca;
    }

    string getMarca(){
        return Marca;
    }

    void setCategoria(){
        this -> Categoria = Categoria;
    }

    string getCategoria(){
        return Categoria;
    }

    void ImprimeDados(){
        cout << "Seção -> Limpeza" << endl;
        cout << "Nome do Produto: " << Nome << endl;
        cout << "Preço: " << Preco << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Marca: " << Marca << endl;
        cout << "Categoria de Risco: " << Categoria << endl;
    }


    string RetornaDados(){
        string nome = Nome;
        string preco = to_string(Preco);
        string quantidade = to_string(Quantidade);
        string marca = Marca;
        string categoria = Categoria;

        return "Limpeza - Nome: " + nome + "; Quantidade: " + quantidade + "; Preço: R$" + preco + "; Marca: " + marca + "; Categoria de Risco: " + categoria + ";";
    }
};