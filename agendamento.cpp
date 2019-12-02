#include "agendamento.hpp"

agendamento::agendamento(){

    this->login = "";
    this->senha = "";
}

agendamento::agendamento(string login, string senha){

    this->login = login;
    this->senha = senha;
}

string agendamento::get_login()const{

    return login;
}

string agendamento::get_senha()const{

    return senha;
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

agendamento::agendamento::cadastro(){//nao sei se e assim que chama essa funcao

    this->endereco = "";
    this->data = "";
}

agendamento::agendamento::cadastro(string endereco, string data){//nao sei se e assim que chama essa funcao

    this->endereco = endereco;
    this->data = data;
}

// estou em duvida de como fazer essa parte
// a ideia aqui é o cara escolher um local e uma data para a doacao. Vou continuar pensando. Se alguem puder ajudar
