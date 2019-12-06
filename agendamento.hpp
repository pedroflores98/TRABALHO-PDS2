#ifndef AGENDAMENTO_H
#define AGENDAMENTO_H
#include "doador.hpp"
#include "ponto_coleta.hpp"
#include "stdafx.hpp"

using namespace std;

class agendamento{
    private:
    doador doador_;
    ponto_coleta ponto_coleta_;
    string data;

    public:

    agendamento(doador doador_, ponto_coleta ponto_coleta_, string data);

    string get_doador_login();
    string get_doador_senha();
    ponto_coleta get_ponto_coleta();
    string get_data();
    void print_doador_nome();
    void print_nome_ponto();
    void print_doador_cpf();
    void print_data();
};

#endif