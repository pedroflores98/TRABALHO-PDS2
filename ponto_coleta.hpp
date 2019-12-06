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
    ponto_coleta():cadastro(){
        this->cnpj = "";
    }

    ponto_coleta(string cnpj, string login, string senha, int num_contato, string nome, string endereco) : cadastro(login,senha,
     num_contato, nome, endereco){
        this->cnpj=cnpj;
    }

    ~ponto_coleta(){
        this->cnpj.clear();
    }

    string get_cnpj() const;

    string set_cnpj(string cnpj);

    void print_cnpj();

    friend class lista_agendamento;

};

#endif