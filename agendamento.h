#ifndef AGENDAMENTO_H_INCLUDED
#define AGENDAMENTO_H_INCLUDED
#include "stdafx.hpp"

using namespace std;

class agendamento{
public:

    string login;
    string senha;

    string endereco;
    string data;

    agendamento();
    agendamento(string login, string senha, string endereco, string data);

    string get_login()const;
    string get_senha()const;
    string get_endereco()const;
    string get_data()const;


    string set_login(string login);
    string set_senha(string senha);
    string set_endereco(string endereco);
    string set_data(string data);

};
#endif // AGENDAMENTO_H_INCLUDED
