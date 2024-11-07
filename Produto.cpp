#include <iostream>
#pragma once
using namespace std;

class Produto{
    private:
    public:
        string Nome;
        float Preco;
        int Quantidade;

    Produto(string Nome, float Preco, int Quantidade): 
    Nome(Nome), Preco(Preco), Quantidade(Quantidade){}

    void setNome(){
        this -> Nome = Nome;
    }

    string getNome(){
        return Nome;
    }

    void setPreco(){
        this -> Preco = Preco;
    }

    float getPreco(){
        return Preco;
    }

    void setQuantidade(){
        this -> Quantidade = Quantidade;
    }

    void setQuantidade(int a){
        Quantidade = a;
    }

    int getQuantidade(){
        return Quantidade; 
    }

    virtual void ImprimeDados(){}

};