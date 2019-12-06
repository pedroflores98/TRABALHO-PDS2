#include "lista_agendamento.hpp"

void lista_agendamento::run(list<doador> &lista_doad,list<ponto_coleta> &lista_pont )
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
            this->create(lista_doad, lista_pont);
            break;
        case 2:
            this->remove();
            break;
        case 3:
            this->show();
            break;
        
        }

    } while (continueRunning);
}

void lista_agendamento:: remove(){
    cout<<endl<<"DIGITE O LOGIN E SENHA DO USUARIO AGENDADO A SER REMOVIDO"<<endl;
    string login_temp, senha_temp;
    cin>>login_temp >>senha_temp;
    int contador_1=0;
    for(list<agendamento>::iterator it=lista_1.begin(); it != lista_1.end(); it++) {
        if (it->get_doador_login()==login_temp && it->get_doador_senha()==senha_temp){
            it=lista_1.erase(it);
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

void lista_agendamento::show(){
    string login_temp, senha_temp;
    cout<<endl<<"DIGITE O LOGIN E SENHA DO USUARIO AGENDADO A SER DETALHADO"<<endl;
    cin>>login_temp >>senha_temp;
    int contador_1=0;
    for(list<agendamento>::iterator it=lista_1.begin(); it != lista_1.end(); it++) {
        if (it->get_doador_login()==login_temp && it->get_doador_senha()==senha_temp){
            cout<<endl<<"SEGUE OS DADOS SOLICITADOS: "<<endl;
            cout<<"USUARIO E CPF: ";
            it->print_doador_nome(); cout <<"   "; it->print_doador_cpf(); cout<<endl;
            cout<<"LOCAL AGENDADO: ";
            it->print_nome_ponto();
            cout<<endl;
            cout<<"DATA DO AGENDAMENTO: ";
            it->print_data();
            cout<<endl;
            contador_1++;
        }

}
if(contador_1==0){cout<<endl<< "NAO EXISTE O CADASTRO INFORMADO"<<endl;}
}

int lista_agendamento::get_view(){
   
    int escolha=-1;
    while (escolha<0 || escolha>6){
        cout<<endl <<"ESCOLHA UMA OPCAO DE AGENDAMENTO: "<<endl;
        cout<<"1-CRIAR NOVO AGENDAMENTO" <<endl;
        cout<<"2-DELETAR AGENDAMENTO" <<endl;
        cout<<"3-DETALHAR DADOS" <<endl;
        cout<<"0-SAIR"<<endl;
        cout<<endl;
         cin>>escolha;
    }
    return escolha;
    
}

void lista_agendamento::create(list<doador> lista_doad,list<ponto_coleta> lista_pont){
    string login_temp, senha_temp;
     ponto_coleta ponto_coleta_p;
      doador doador_p;
      int cont_i=0;

    if (lista_doad.empty()) {
        cout <<endl<<"SEM USUARIOS CADASTRADOS \n";
        return;
   }

    if (lista_pont.empty()) {
        cout <<endl<<"SEM PONTOS DE COLETA CADASTRADOS \n";
        return;
   }

    cout <<"Escreva seu login: ";
    cin>>login_temp;
    cout <<endl<<"Escreva sua senha: ";
    cin>>senha_temp;
   
   
    for(list<doador>::iterator it_1 = lista_doad.begin(); it_1!=lista_doad.end(); it_1++){
        if (it_1 -> get_login() == login_temp && it_1->get_senha()==senha_temp){
            doador_p = *it_1;
            cont_i=1;
        }
    }

   if(cont_i==0){
       cout<<endl<<"DADOS INFORMADOS INCORRETOS"<<endl; 
       return;
       }

    cout <<endl<<"Escreva o nome do local de coleta: ";
    string nome_;
    cin.ignore();
    getline(cin,nome_);
    for(list<ponto_coleta>::iterator it_2=lista_pont.begin(); it_2 != lista_pont.end(); it_2++) {
        if (it_2->get_nome()==nome_){
            ponto_coleta_p=*it_2;
            cont_i++;
        }
    }

    if(cont_i==1 ){cout<<endl<<"NOME DO LOCAL DE COLETA INCORRETO"<<endl; return;}

    cout<<endl<<"ESCREVA A DATA DA DOACAO (formato dd/mm/aaaa): "<<endl;
    string data_;
    cin>>data_;


    agendamento agendamento_(doador_p, ponto_coleta_p,data_);
    lista_1.push_back(agendamento_);
    if(cont_i==0){
        cout<<endl<<"AGENDADO"<<endl;
    }
}