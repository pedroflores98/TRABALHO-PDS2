#include "stdafx.hpp"
#include "doador.hpp"
#include "lista_doador.hpp"
#include <list>

using namespace std;

int main(){
    list<doador> lista;
    lista_doador rodando(lista);
    rodando.run();

    return 0;

}