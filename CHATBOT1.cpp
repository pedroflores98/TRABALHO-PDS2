/*
Trabalho Pr�tico - PDS II - UFMG
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
    char op��o;
    int idade = 0;
    bool elegivel = true;
    while (elegivel)
    {
        cout << "Ol�, sou o Hemoglobinho! Vou lhe perguntar algumas coisas para saber se voc� tem algum dos impedimentos mais comuns para doa��o de sangue." << endl ;
        cout << "� muito importante que voc� seja sincero nas respostas, afinal de contas, outro ser-humano ir� receber seu sangue." << endl ;
        cout << "Eu s� tenho 02 semanas de vida e ainda tenho muito a aprender! Pega leve comigo, camarada!"<<endl;
        cout << "Vamos come�ar!" <<endl;

        //Pergunta 1
        cout<< "Qual a sua idade?"<endl;
        cin>>idade;
        if (idade <=15 || idade >= 60)
        {
            cout<<"Infelizmente voc� n�o preenche os requisitos para doar sangue."<<endl;
            elegivel = false;
        }

        //Pergunta generica

      /*  cout <<"Pergunta"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1')
            elegivel = false;
         */

         //peso
         cout <<"Seu peso � inferior a 50kg?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

        cout <<"Voc� tem anemia?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

        cout <<"Voc� est� com febre?"<<endl;
        cout <<"1. Nao"<<endl;
        cout <<"2. Sim"<<endl;
        cin>>op��o;
        if (opcao=='2'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

        cout <<"Voc� � gestante?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

        cout <<"Voc� est� amamentando?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

        cout <<"Pergunta"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }


        cout <<"Voce teve diarr�ia nos �ltimos 7 dias?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

        cout <<"Voce teve conjuntivite nos �ltimos 7 dias?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

        cout <<"Voce fez uso de antibi�ticos nas �ltimas duas semanas?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

            cout <<"Voce teve dengue nos �ltimos 30 dias?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

            cout <<"Voce fez cirurgia odontol�gica com o uso de anestesia geral no �ltimo m�s?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

            cout <<"Voce tomou alguma vacina nos �ltimos 30 dias??"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

        cout <<"Voce doou sangue nas ultimas 12 semanas??"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            elegivel = false;
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
        }

        cout <<"Voce possui alguma doen�a sexualmente transmiss�vel?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
            elegivel = false;
        }

        cout <<"Voce possui alguma depend�ncia qu�mica?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
            elegivel = false;
         }

        cout <<"Voce j� teve alguma dessas doen�as: Hepatite, Mal�ria, C�ncer ou Doen�a de Chagas?"<<endl;
        cout <<"1. Sim"<<endl;
        cout <<"2. Nao"<<endl;
        cin>>op��o;
        if (opcao=='1'){
            cout<<"Voc� infelizmente n�o � eleg�vel para doa��o de sangue."<endl;
            elegivel = false;
        }

        cout <<"Aparentemente, voc� � eleg�vel para doa��o de sangue. Consulte o ponto de coleta mais pr�ximo para ter certeza. Lembre-se de alimentar e dormir apropriadamente na noite anterior ao exame<<endl;


    }
    cout<<"Obrigado pela conversa!"<<endl;
    return eleg�vel;
}

