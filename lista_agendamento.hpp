#ifndef LISTA_AGENDAMENTO_H
#define LISTA_AGENDAMENTO_H
#include "stdafx.hpp"
#include "agendamento.hpp"
#include "ponto_coleta.hpp"
#include "lista_empresa.hpp"
#include "lista_doador.hpp"
#include "doador.hpp"


using namespace std;

class lista_agendamento{
    public:
    lista_agendamento(list<agendamento> lista_1 ){
        this->lista_1=lista_1;
        
    }

    void run(list<doador> &lista_doad,list<ponto_coleta> &lista_pont);

    private:
    list<agendamento> lista_1;
    
    void remove();
    void show();
    int get_view();
    void create(list<doador> lista_doad,list<ponto_coleta> lista_pont);
    
};

#endif