#include "ponto_coleta.hpp"

string ponto_coleta::set_cnpj(string cnpj) {
    if(!cnpj.empty()){
        this->cnpj=cnpj;
        return cnpj;
    }
    return "cnpj vazio";
}

string ponto_coleta::get_cnpj()const {
    return cnpj;
}

void ponto_coleta::print_cnpj(){
        cout<<this->cnpj;
}