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

    }

    string getMarca(){

    }

    void setCategoria(){

    }

    string getCategoria(){

    }
};