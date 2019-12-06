#ifndef LISTA_DOADOR_H
#define LISTA_DOADOR_H

#include "list_controller.hpp"
#include "doador.hpp"
#include "stdafx.hpp"


using namespace std;

class lista_doador : public list_controller<doador>{
    public:
    lista_doador(list<doador> lista){
        this->lista=lista;
    }
    
   

    void run();
    list<doador> get_lista();

    private:
    list<doador> lista;
    
    void update();
    void remove();
    void show();
    int get_view();
    void create();
    

};

#endif