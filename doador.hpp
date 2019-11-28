#ifndef DOADOR_H
#define DOADOR_H
#include "stdafx.hpp"
#include "cadastro.hpp"

using namespace std;

//cadastro de doador

class doador : public cadastro{
    public:
    string cpf; //SERÁ UTILIZADO COMO LOGIN

    
    doador():cadastro(){
        this->cpf = "";
    }

    doador(string cpf,string login, string senha, int num_contato, string nome, string endereco) : cadastro( login, senha,
      num_contato,  nome,endereco){
        this->cpf=cpf;
    }

    ~doador(){
        this->cpf.clear();
    }

    string get_cpf() const;

    string set_cpf(string cpf);

};


#endif