#include "doador.hpp"

string doador::set_cpf(string cpf) {
    if(!cpf.empty()){
        this->cpf=cpf;
        return cpf;
    }
    return "cpf vazio";
}

string doador::get_cpf()const {
    return cpf;
}