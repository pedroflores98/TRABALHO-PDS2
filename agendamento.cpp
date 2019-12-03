#include "agendamento.hpp"

agendamento::agendamento(){

    this->login = "";
    this->senha = "";
    this->endereco = "";
    this->data = "";
}

agendamento::agendamento(string login, string senha, string endereco, string data){

    this->login = login;
    this->senha = senha;
    this->endereco = endereco;
    this->data = data;
}

string agendamento::set_login(string login){

    if(!login.empty){
        this->login = login;
        return login;
    }
    return -1;
}

string agendamento::set_senha(string senha){

    if(!senha.empty){
        this->senha = senha;
        return senha;
    }
    return -1;
}

string agendamento::set_data(string data){

    if(!data.empty){
        this->data = data;
        return data;
    }
    return -1;
}


string agendamento::get_endereco()const{

    return endereco;
}
