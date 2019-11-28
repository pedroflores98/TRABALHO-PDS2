#include "ponto_coleta.hpp"

string ponto_coleta::set_cnpj(string cnpj) {
    if(!cnpj.empty()){
        this->cnpj=cnpj;
        return cnpj;
    }
    return -1;
}

string doador::get_cnpj()const {
    return cnpj;
}