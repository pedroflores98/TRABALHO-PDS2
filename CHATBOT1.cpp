/*
Trabalho Prático - PDS II - UFMG
2019/2
Alunos:

    Richard Ribeiro
    Pedro Flores
    Thiago Rodarte
    Ricardo Oliveira
    Renato Rodrigues
*/


#include <stdlib.h>

bool chatbot()
{
    char opção;
    int idade = 0;
    bool confirmado = false;
    bool elegivel = true;
    while (elegivel && !confirmado)
    {
        cout << "Olá, sou o Hemoglobinho! Vou lhe perguntar algumas coisas para saber se você tem algum dos impedimentos mais comuns para doação de sangue." << endl ;
        cout << "É muito importante que você seja sincero nas respostas, afinal de contas, outro ser-humano irá receber seu sangue." << endl ;
        cout << "Eu só tenho 02 semanas de vida e ainda tenho muito a aprender! Pega leve comigo, camarada!"<<endl;
        cout << "Vamos começar!" <<endl;

        //Pergunta 1
        cout<< "Qual a sua idade?"<endl;
        cin>>idade;
        if (idade <=15 || idade >= 60)
        {
            cout<<"Infelizmente você não preenche os requisitos para doar sangue."<<endl;
            elegivel = false;
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
         cout <<"Seu peso é inferior a 50kg?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

        cout <<"Você tem anemia?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

        cout <<"Você está com febre?"<<endl;
        cout <<"1. Nao"<<endl;
        cout <<"2. Sim"<<endl;
        cin>>opção;
        if (opcao=='2'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

        cout <<"Você é gestante?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

        cout <<"Você está amamentando?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

        cout <<"Pergunta"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }


        cout <<"Voce teve diarréia nos últimos 7 dias?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

        cout <<"Voce teve conjuntivite nos últimos 7 dias?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

        cout <<"Voce fez uso de antibióticos nas últimas duas semanas?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

            cout <<"Voce teve dengue nos últimos 30 dias?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

            cout <<"Voce fez cirurgia odontológica com o uso de anestesia geral no último mês?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

            cout <<"Voce tomou alguma vacina nos últimos 30 dias??"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

        cout <<"Voce doou sangue nas ultimas 12 semanas??"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
        }

        cout <<"Voce possui alguma doença sexualmente transmissível?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
            elegivel = false;
        }

        cout <<"Voce possui alguma dependência química?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
            elegivel = false;
         }

        cout <<"Voce já teve alguma dessas doenças: Hepatite, Malária, Câncer ou Doença de Chagas?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>opção;
        if (opcao=='1'){
            cout<<"Você infelizmente não é elegível para doação de sangue."<endl;
            elegivel = false;
        }

        cout <<"Aparentemente, você é elegível para doação de sangue. Consulte o ponto de coleta mais próximo para ter certeza. Lembre-se de alimentar e dormir apropriadamente na noite anterior ao exame<<endl;
        confirmado = true;
        //elegivel = true (mas o loop se quebra pois && !confirmado no while)

    }
    cout<<"Obrigado pela conversa! Cuide-se!"<<endl;
    return elegível;
}

