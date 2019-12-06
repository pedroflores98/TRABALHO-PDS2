#ifndef LISTA_CONTROLLER_H
#define LISTA_CONTROLLER_H
#include "stdafx.hpp"

using namespace std;

//usado para lista de doadores e empresas
template <class T>
class list_controller {
      
   
    public:
    virtual void run()=0;
    
    
    protected:
    virtual int get_view()=0;
    virtual void create()=0;
    virtual void update()=0;
    virtual void remove()=0;
    virtual void show()=0;
    virtual list<T> get_lista()=0;
};

#endif