#ifndef DOADOR_H
#define DOADOR_H
#include "stdafx.hpp"
#include "cadastro.hpp"

using namespace std;

//cadastro de doador

class doador : public cadastro{
    private:
    string cpf; //SERÁ UTILIZADO COMO LOGIN

   public: 
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

    void print_cpf();

    friend class lista_agendamento;

};


#endif