#include "../../testes (headers)/dominios/teste_estado.h" //Importa header file

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

const std::string TUEstado::ESTADO_VALIDO = "FAZENDO";
const std::string TUEstado::ESTADO_INVALIDO = "NAO FEITO";

void TUEstado::setUp(){
    estado = new Estado();
    estado_do_teste = SUCESSO;
}

void TUEstado::tearDown(){
    delete estado;
}

void TUEstado::testarCenarioSucesso(){
    try{
        estado->setEstado(ESTADO_VALIDO);
        if (estado->getEstado() != ESTADO_VALIDO)
            estado_do_teste = FALHA;
    }
    catch(invalid_argument &excecao){
        estado_do_teste = FALHA;
    }
}

void TUEstado::testarCenarioFalha(){
    try{
        estado->setEstado(ESTADO_INVALIDO);
        estado_do_teste = FALHA;
    }
    catch(invalid_argument &excecao){
        /*if (estado->getEstado() == ESTADO_INVALIDO)
            estado_do_teste = FALHA;*/
        // A exceção era esperada.
    }
}

int TUEstado::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado_do_teste;
}
