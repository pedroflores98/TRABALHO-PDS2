#include "stdafx.hpp"
#include "doador.hpp"
#include "lista_doador.hpp"
#include "lista_empresa.hpp"
#include "ponto_coleta.hpp"
#include "agendamento.hpp"
#include "lista_agendamento.hpp"
#include <list>

using namespace std;


bool chatbot()
{
    char opcao;
    int idade = 0;
    bool confirmado = true;
    bool elegivel = true;
    while (confirmado)
    {
        cout << "Ola, sou o Hemoglobinho! Vou lhe perguntar algumas coisas para saber se voce tem algum dos impedimentos mais comuns para doacao de sangue." << endl ;
        cout << "Eh muito importante que você seja sincero nas respostas, afinal de contas, outro ser-humano ira receber seu sangue." << endl ;
        cout << "Eu so tenho 02 semanas de vida e ainda tenho muito a aprender! Pega leve comigo, camarada!"<<endl;
        cout << "Vamos comecar!" <<endl;

        //Pergunta 1
        cout<< "Qual a sua idade?"<<endl;
        cin>>idade;
        if (idade <=15 || idade >= 60)
        {
            cout<<"Infelizmente voce nao preenche os requisitos para doar sangue."<<endl;
            return false;
        }

        //Pergunta generica

      /*  cout <<"Pergunta"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1')
            elegivel = false;
         */

         //peso
         cout <<"Seu peso eh inferior a 50kg?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
        }

        cout <<"Voce tem anemia?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
        }

        cout <<"Voce esta com febre?"<<endl;
        cout <<"1. Nao"<<endl;
        cout <<"2. Sim"<<endl;
        cin>>opcao;
        if (opcao=='2'){
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
        }

        cout <<"Voce eh gestante?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
        }

        cout <<"Voce esta amamentando?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
             return false;
        }



        cout <<"Voce teve diarreia nos ultimos 7 dias?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
           
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
             return false;
        }

        cout <<"Voce teve conjuntivite nos ultimos 7 dias?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
             return false;
        }

        cout <<"Voce fez uso de antibioticos nas ultimas duas semanas?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
        }

            cout <<"Voce teve dengue nos ultimos 30 dias?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
        }

            cout <<"Voce fez cirurgia odontologica com o uso de anestesia geral no ultimo mes?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
           
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
        }

            cout <<"Voce tomou alguma vacina nos ultimos 30 dias??"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
        }

        cout <<"Voce doou sangue nas ultimas 12 semanas??"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
        }

        cout <<"Voce possui alguma doenca sexualmente transmissivel?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
           return false;
        }

        cout <<"Voce possui alguma dependencia quimica?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
         }

        cout <<"Voce ja teve alguma dessas doencas: Hepatite, Malaria, Cancer ou Doença de Chagas?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opcao;
        if (opcao=='1'){
            cout<<"Voce infelizmente nao eh elegivel para doacao de sangue."<<endl;
            return false;
        }

        cout <<"Aparentemente, voce eh elegivel para doacao de sangue. Consulte o ponto de coleta mais proximo para ter certeza. Lembre-se de alimentar e dormir apropriadamente na noite anterior ao exame"<<endl;
        confirmado = false;
        //elegivel = true (mas o loop se quebra pois && !confirmado no while)

    }
    cout<<"Obrigado pela conversa! Cuide-se!"<<endl;
    return elegivel;
};



int main(){
    cout<<"favor nos campos onde é solicitado o numero de telefone não digitar letras e simbolos, apenas os numeros"<<endl;
    bool continuerunning=true;
    list<ponto_coleta> lista_2;
    lista_empresa rodando_2(lista_2);

    list<doador> lista_1;
    lista_doador rodando(lista_1);

    list<agendamento> lista_3;
    lista_agendamento rodando_3(lista_3);

    list<doador> doador_sub;
    list<ponto_coleta> ponto_coleta_sub; 
    


    do{
        cout<<"PARA ACESSO DE ADMINISTRADOR DIGITE 1 \n PARA ACESSO DE USUARIO DIGITE 2 \n PARA SAIR DO PROGRAMA APERTE 3"<<endl;
        int num_escolha;
        cin>>num_escolha;
        
        
        if(num_escolha==1){
                rodando_2.run();
                ponto_coleta_sub=rodando_2.get_lista();
        }

    
        if(num_escolha==2){
            continuerunning=true;

            do{
            int escolha_5=0;
            
            cout<<endl<<"PARA OPCAO DE DOADOR APERTE 1 \n PARA A OPCAO DE ELEGIBILIDADE PARA DOACAO APERTE 2 \n PARA AGENDAMENTO APERTE 3 \n PARA SAIR APERTE 4 "<<endl;
            cin>>escolha_5;
        switch (escolha_5){
            case 1:{
               
                rodando.run();
                doador_sub=rodando.get_lista();
                    
                break;
            }

            case 2:{
            
                chatbot();
                break;

            }
            
            case 3:{
             
                rodando_3.run(doador_sub, ponto_coleta_sub);
                break;
            }
            
            case 4:{
                continuerunning = false;
                break;
            }
        }
            }while(continuerunning);
            continuerunning=true;
        }

        if(num_escolha==3){
            continuerunning=false;
        }    

  }while( continuerunning);
  return 0;
}