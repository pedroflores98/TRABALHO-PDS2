#ifndef LISTA_EMPRESA_H
#define LISTA_EMPRESA_H

#include "list_controller.hpp"
#include "ponto_coleta.hpp"
#include "stdafx.hpp"


using namespace std;

class lista_empresa : public list_controller<ponto_coleta>{
    public:
    lista_empresa(list<ponto_coleta> lista){
        this->lista=lista;
    }
    
    //~lista_doador();

    void run();

    private:
    list<ponto_coleta> lista;
    void update();
    void remove();
    void show();
    int get_view();
    void create();
    void show_all();

};

#endif