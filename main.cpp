// Incluir cabeçalhos.

#include <iostream>

#include "dominios (headers)/estado.h"
#include "testes (headers)/dominios/teste_estado.h"

#include "dominios (headers)/papel.h"
#include "testes (headers)/dominios/teste_papel.h"

#include "dominios (headers)/prioridade.h"
#include "testes (headers)/dominios/teste_prioridade.h"

#include "dominios (headers)/tamanho.h"
#include "testes (headers)/dominios/teste_tamanho.h"

using namespace std;

int main()
{

//TESTE ESTADO
    TUEstado teste_estado;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    switch(teste_estado.run()){
        case TUEstado::SUCESSO: cout << "SUCESSO - ESTADO" << endl;
                                break;
        case TUEstado::FALHA  : cout << "FALHA   - ESTADO" << endl;
                                break;
    }

//TESTE PAPEL
    TUPapel teste_papel;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    switch(teste_papel.run()){
        case TUPapel::SUCESSO: cout << "SUCESSO - PAPEL" << endl;
                                break;
        case TUPapel::FALHA  : cout << "FALHA   - PAPEL" << endl;
                                break;
    }

//TESTE PRIORIDADE
    TUPrioridade teste_prioridade;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    switch(teste_prioridade.run()){
        case TUPrioridade::SUCESSO: cout << "SUCESSO - PRIORIDADE" << endl;
                                break;
        case TUPrioridade::FALHA  : cout << "FALHA   - PRIORIDADE" << endl;
                                break;
    }

//TESTE TAMANHO
    TUTamanho teste_tamanho;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    switch(teste_tamanho.run()){
        case TUTamanho::SUCESSO: cout << "SUCESSO - TAMANHO" << endl;
                                break;
        case TUTamanho::FALHA  : cout << "FALHA   - TAMANHO" << endl;
                                break;
    }


    return 0;
}
