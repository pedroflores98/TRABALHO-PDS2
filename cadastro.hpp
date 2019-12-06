#ifndef CADASTRO_H
#define CADASTRO_H
#include "stdafx.hpp"

using namespace std;


//dados em comum para cadastro de doadores e locais de coleta

class cadastro{
    private:
        string senha;

    protected:
        int num_contato;
        string nome;
        string endereco;
        string login;

    public:
        //construtor vazio, construtor e destrutor
        cadastro();
        cadastro(string login,string senha, int num_contato, string nome, string endereco);
      
        int get_num_contato()const;
        string get_nome()const;
        string get_senha()const;
        string get_endereco()const;
        string get_login()const;

        //alteração de variavel
        int set_num_contato(int num_contato);
        string set_nome(string nome);
        string set_senha(string senha);
        string set_endereco(string endereco);
        string set_login(string login);
        
        //print das variaveis
        void  print_endereco();
        void  print_nome();
        void  print_senha();
        void  print_login();
        void  print_num_contato();

        friend class lista_agendamento;

};
#endif