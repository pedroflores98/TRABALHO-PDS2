#include "lista_doador.hpp"

/*doador lista_doador::creat_list(){
    list<doador> lista;
    return lista;
}*/
void lista_doador::run()
{
    bool continueRunning = true;
    do
    {
        switch (get_view())
        {
        case 0:
            continueRunning = false;
            break;
        case 1:
            this->create();
            break;
        case 2:
            this->update();
            break;
        case 3:
            this->remove();
            break;
        case 4:
            this->show();
            break;
        }

    } while (continueRunning);
}

void lista_doador::create(){
    
    doador doador;
    cout <<"escreva seu cpf"<<endl;
    cin>>doador.cpf;
    cout <<"escreva seu login"<<endl;
    cin>>doador.login;
    cout <<"escreva seu senha"<<endl;
    cin>>doador.senha;
    cout <<"escreva seu num_contato"<<endl;
    cin>>doador.num_contato;
    cout <<"escreva seu nome"<<endl;
    cin>>doador.nome;
    cout <<"escreva seu endereco"<<endl;
    getline(cin, doador.endereco);



    lista.push_back(doador);


}


int lista_doador::get_view(){
   
    int escolha=-1;
    while (escolha<0 || escolha>5){
        cout<<"1-ADICIONAR NOVO" <<endl;
        cout<<"2-ALTERAR DADOS" <<endl;
        cout<<"3-DELETAR USUARIO" <<endl;
        cout<<"4-DETALHAR DADOS" <<endl;
        cout<<"0-SAIR"<<endl;
         cin>>escolha;
    }
    return escolha;
    
}

void lista_doador::update(){
    
    string login_temp, senha_temp;
    cout<<"Digite seu login e sua senha"<<endl;
    cin>>login_temp >>senha_temp;
    for(list<doador>::iterator it=lista.begin(); it != lista.end(); ++it) {
        if (it->login==login_temp && it->senha==senha_temp){
           bool continua_a_rodar=true;
           do
            {
            cout<<"o que deseja alterar"<<endl;
            cout<<"1-senha"<<endl;
            cout<<"2-login"<<endl;
            cout<<"3-cpf"<<endl;
            cout<<"4-endereco"<<endl;
            cout<<"5-num_contato"<<endl;
            cout<<"6-sair"<<endl;

            int escolha_1;
            cin>>escolha_1;
           
            
                switch (escolha_1){
                    case 1:{
                        cout<<"digite a nova senha"<<endl;
                        string senha_nova;
                        cin>>senha_nova;
                        it->senha=senha_nova;
                        break;
                    }
                    case 2:{
                        cout<<"digite novo login"<<endl;
                        string login_novo;
                        cin>>login_novo;
                        it->login=login_novo;
                        break;
                    }
                    case 3:{
                        cout<<"digite o novo cpf"<<endl;
                        string cpf_novo;
                        cin>>cpf_novo;
                        it->cpf=cpf_novo;
                        break;
                    }
                    case 4:{
                        cout<<"digite o novo endereço"<<endl;
                        string endereco_novo;
                        getline(cin,endereco_novo);
                        it->endereco=endereco_novo;
                        break;
                    }
                    case 5:{
                        cout<<"digite o novo numero de contato"<<endl;
                        int num_contato_novo;
                        cin>>num_contato_novo;
                        it->num_contato=num_contato_novo;
                        break;
                    }
                    case 6:{
                        continua_a_rodar=false;
                        break;
                    }

            } 
            }while (continua_a_rodar);
        }
        
    }
        
}

void lista_doador::remove(){
     doador *it=nullptr;
    string login_temp, senha_temp;
    cout<<"Digite seu login e sua senha"<<endl;
    cin>>login_temp >>senha_temp;
    for(list<doador>::iterator it=lista.begin(); it != lista.end(); ++it) 
        if (it->login==login_temp && it->senha==senha_temp){
            lista.erase(it);
        }
        delete it;
}

void lista_doador::show(){
    doador *it=nullptr;
    string login_temp, senha_temp;
    cout<<"Digite seu login e sua senha"<<endl;
    cin>>login_temp >>senha_temp;
     for(list<doador>::iterator it=lista.begin(); it != lista.end(); ++it) 
        if (it->login==login_temp && it->senha==senha_temp){
            cout<<"segue os detalhes do cadastro"<<endl;
            cout<<it->cpf<<endl;
            cout<<it->login<<endl;
            cout<<it->senha<<endl;
            cout<<it->endereco<<endl;
            cout<<it->num_contato<<endl;
        }
        delete it;
}

