#ifndef AGENDAMENTO_H_INCLUDED
#define AGENDAMENTO_H_INCLUDED
#include "stdafx.hpp"
#include "cadastro.hpp"

using namespace std;

class agendamento{
public:

    string login[];
    string senha;

    agendamento();
    agendamento(string login, string senha);

    string get_login()const;
    string get_senha()const;

    string set_login(string login);
    string set_senha(string senha);


};

class agendamento::public cadastro(){
private:

    string endereco;
    string data;

    string get_endereco()const;
    string get_data()const; //como colocar a data?

    string set_endereco(string endereco);
    string set_data(string data); //como colocar a data?


};
#endif // AGENDAMENTO_H_INCLUDED
