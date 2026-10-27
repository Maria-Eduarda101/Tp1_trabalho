#include "../../testes (headers)/dominios/teste_tamanho.h" //Importa header file

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

const std::string TUTamanho::TAMANHO_VALIDO = "GRANDE";
const std::string TUTamanho::TAMANHO_INVALIDO = "SUFICIENTE";

void TUTamanho::setUp(){
    tamanho = new Tamanho();
    estado_do_teste = SUCESSO;
}

void TUTamanho::tearDown(){
    delete tamanho;
}

void TUTamanho::testarCenarioSucesso(){
    try{
        tamanho->setTamanho(TAMANHO_VALIDO);
        if (tamanho->getTamanho() != TAMANHO_VALIDO)
            estado_do_teste = FALHA;
    }
    catch(invalid_argument &excecao){
        estado_do_teste = FALHA;
    }
}

void TUTamanho::testarCenarioFalha(){
    try{
        tamanho->setTamanho(TAMANHO_INVALIDO);
        estado_do_teste = FALHA;
    }
    catch(invalid_argument &excecao){
    }
}

int TUTamanho::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado_do_teste;
}
