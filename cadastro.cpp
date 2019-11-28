#include "cadastro.hpp"

cadastro::cadastro(){
    this->num_contato=0;
    this->nome="";
    this->endereco="";
    this->senha="";
    this->login="";
}

cadastro:: cadastro(string login,string senha, int num_contato, string nome, string endereco){
    this->senha=senha;
    this->num_contato=num_contato;
    this->nome=nome;
    this->endereco=endereco;
    this->login=login;
}

int cadastro::get_num_contato()const{
    return num_contato;
}

string cadastro::get_nome()const{
     return nome;
 }

string cadastro::get_senha()const{
    return senha;
}

string cadastro::get_login()const{
    return login;
}

string cadastro::get_endereco()const{
    return endereco;
}

int cadastro::set_num_contato(int num_contato){
    if(num_contato>0){
         this->num_contato= num_contato;
         return num_contato;
    }
    return -1;
}

string cadastro::set_nome(string nome){
    if(!nome.empty()){
        this->nome=nome;
        return nome;
    }
    return "nome vazio";
}

string cadastro::set_senha(string senha){
    if(!senha.empty()){
        this->senha=senha;
        return senha;
    }
    return "senha vazio";
}

string cadastro::set_login(string login){
    if(!login.empty()){
        this->login=login;
        return login;
    }
    return "login vazio";
}

 string cadastro:: set_endereco(string endereco){
     if(!endereco.empty()){
         this->endereco=endereco;
         return endereco;
     }
     return "endereco vazio";
 }