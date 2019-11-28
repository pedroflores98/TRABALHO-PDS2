#ifndef PONTO_COLETA_H
#define PONTO_COLETA_H
#include "stdafx.hpp"
#include "cadastro.hpp"

using namespace std;

//cadastro de ponto de coleta

class ponto_coleta : public cadastro{
    private:
    string cnpj; //SERÁ UTILIZADO COMO LOGIN

    public:
    doador():cadastro(){
        this->cnpj = "";
    }

    doador(string cnpj, string login, string senha, int num_contato, string nome, string endereco) : cadastro(string login,string senha,
     int num_contato, string nome, string endereco){
        this->cnpj=cnpj;
    }

    ~doador(){
        this->cnpj.clear();
    }

    string get_cnpj() const;

    string set_cnpj();

}

#endif