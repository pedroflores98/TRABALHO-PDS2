#include "agendamento.hpp"

agendamento::agendamento (doador doador_, ponto_coleta ponto_coleta_, string data){
    this->doador_=doador_;
    this->ponto_coleta_=ponto_coleta_;
    this->data=data;
}

string agendamento::get_doador_login(){
    return this->doador_.get_login();
}

string agendamento::get_doador_senha(){
    return this->doador_.get_senha();
}

ponto_coleta agendamento::get_ponto_coleta(){
    return this->ponto_coleta_;
}

string agendamento:: get_data(){
    return this->data;
}

void agendamento::print_doador_nome(){
    this->doador_.print_nome();
}

void agendamento::print_doador_cpf(){
    this->doador_.print_cpf();
}

void agendamento::print_nome_ponto(){
    this->ponto_coleta_.print_nome();
}

void agendamento::print_data(){
    cout<<this->data;
}