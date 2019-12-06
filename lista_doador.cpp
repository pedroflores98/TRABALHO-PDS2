
#include "lista_doador.hpp"

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
    string cpf_, login_, senha_, nome_, endereco_;
    int num_contato_;
    
    cout <<"Escreva seu cpf: ";
    cin>>cpf_;
    cout <<endl<<"Escreva seu login: ";
    cin>>login_;
    for(list<doador>::iterator it=lista.begin(); it != lista.end(); it++) {
        if (it->get_login()==login_ || it->get_cpf()==cpf_){
            cout<<endl<<"JA EXISTE CADASTRO COM CPF OU LOGIN IGUAL"<<endl;
            return;
        }
    }
    cout <<endl<<"Escreva sua senha: ";
    cin>>senha_;
    cout <<endl<<"Escreva seu numero para contato: ";
    cin>>num_contato_;
    cin.ignore();
    cout <<endl<<"Escreva seu nome: ";
    getline(cin,nome_);
    cout <<endl<<"Escreva seu endereco de moradia : ";
    getline(cin, endereco_);
    cout<<endl;
    
    doador doador(cpf_, login_,  senha_,  num_contato_,  nome_,  endereco_);
    lista.push_back(doador);


}


int lista_doador::get_view(){
   
    int escolha=-1;
    while (escolha<0 || escolha>5){
        cout<<endl <<"ESCOLHA UMA OPCAO DE USUARIO: "<<endl;
        cout<<"1-CRIAR NOVO USUARIO" <<endl;
        cout<<"2-ALTERAR DADOS" <<endl;
        cout<<"3-DELETAR USUARIO" <<endl;
        cout<<"4-DETALHAR DADOS" <<endl;
        cout<<"0-SAIR"<<endl;
        cout<<endl;
         cin>>escolha;
    }
    return escolha;
    
}

void lista_doador::update(){
    
    string login_temp, senha_temp;
    int contador_2=0;
    cout<<"Digite seu login e sua senha: ";
    cin>>login_temp >>senha_temp;
    cout<<endl;
    for(list<doador>::iterator it=lista.begin(); it != lista.end(); it++) {
        if (it->get_login()==login_temp && it->get_senha()==senha_temp){
           bool continua_a_rodar=true;
           contador_2=1;
           do
            {
            cout<<endl<<"O que deseja alterar: "<<endl;
            cout<<"0-nome"<<endl;
            cout<<"1-senha"<<endl;
            cout<<"2-login"<<endl;
            cout<<"3-cpf"<<endl;
            cout<<"4-endereco"<<endl;
            cout<<"5-num_contato"<<endl;
            cout<<"6-sair"<<endl;
            cout<<endl;

            int escolha_1;
            cin>>escolha_1;
           
            
                switch (escolha_1){
                    case 0:{
                        cout<<"Digite o novo nome: ";
                        string nome_novo;
                         cin.ignore();
                        getline(cin,nome_novo);
                        cout<<endl;
                        it->set_nome(nome_novo);
                        cout<<endl<<"NOME ALTERADO"<<endl;
                        break;
                    }
                    case 1:{
                        cout<<"Digite a nova senha: ";
                        string senha_nova;
                        cin>>senha_nova;
                        cout<<endl;
                        it->set_senha(senha_nova);
                        cout<<endl<<"SENHA ALTERADA"<<endl;
                        break;
                    }
                    case 2:{
                        cout<<"Digite novo login: ";
                        string login_novo;
                        cin>>login_novo;
                        cout<<endl;
                        it->set_login(login_novo);
                        cout<<endl<<"LOGIN ALTERADO"<<endl;
                        break;
                    }
                    case 3:{
                        cout<<"Digite o novo cpf: ";
                        string cpf_novo;
                        cin>>cpf_novo;
                        cout<<endl;
                        it->set_cpf(cpf_novo);
                        cout<<endl<<"CPF ALTERADO"<<endl;
                        break;
                    }
                    case 4:{
                        cout<<"Digite o novo endereco: ";
                        string endereco_novo;
                        cin.ignore();
                        getline(cin,endereco_novo);
                        cout<<endl;
                        it->set_endereco(endereco_novo);
                        cout<<endl<<"ENDERECO ALTERADO"<<endl;
                        break;
                    }
                    case 5:{
                        cout<<"Digite o novo numero de contato: "<<endl;
                        int num_contato_novo;
                        cin>>num_contato_novo;
                        cout<<endl;
                        it->set_num_contato(num_contato_novo);
                        cout<<endl<<"NUMERO DE CONTATO ALTERADO"<<endl;
                        break;
                    }
                    case 6:{
                        continua_a_rodar=false;
                        break;
                    }

            } 
            }while (continua_a_rodar);
            cout<<endl;
        }
        
    }
    if (contador_2==0){
        cout<<endl<<"LOGIN OU SENHA INCORRETOS"<<endl;
    }
        
}

void lista_doador::remove(){
    
    string login_temp, senha_temp;
    cout<<endl <<"Digite seu login e sua senha: "<<endl;
    cin>>login_temp >>senha_temp;
    int contador_1=0;
    for(list<doador>::iterator it=lista.begin(); it != lista.end(); it++) {
        if (it->get_login()==login_temp && it->get_senha()==senha_temp){
            it=lista.erase(it);
            contador_1++;
        }
    }
        
        if(contador_1==0){
            cout<<endl << "Cadastro inexistente!"<<endl;
            }
        if(contador_1>0){
            cout<<endl <<"CADASTRO DELETADO"<<endl;
        }
        cout<<endl;
}

void lista_doador::show(){
    
    string login_temp, senha_temp;
    cout<<endl <<"Digite seu login e sua senha: "<<endl;
    cin>>login_temp >>senha_temp;
    int contador=0; //NECESSARIO PARA CONFERIR SE O USUARIO EXISTE
     for(list<doador>::iterator it=lista.begin(); it != lista.end(); it++) {
        if (it->get_login()==login_temp && it->get_senha()==senha_temp){
            cout<<endl <<"SEGUE OS DADOS SOLICITADOS"<<endl;
            cout<<"CPF: ";
            it->print_cpf();
            cout<<endl;
            cout<<"LOGIN: ";
            it->print_login();
            cout<<endl;
            cout<<"SENHA: ";
            it->print_senha();
            cout<<endl;
            cout<<"NUMERO PARA CONTATO: ";
            it->print_num_contato();
            cout<<endl;
            cout<<"NOME: ";
            it->print_nome();
            cout<<endl;
            cout<<"ENDERECO: ";
            it->print_endereco();
            cout<<endl;

            contador++;
        }
     }
        if(contador==0){
            cout<<endl << "Cadastro inexistente!"<<endl;
        }
        
        cout<<endl;
}

list <doador> lista_doador:: get_lista(){
        return this-> lista;
}

