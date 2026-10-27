#include "../../testes (headers)/dominios/teste_prioridade.h" //Importa header file

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

const std::string TUPrioridade::PRIORIDADE_VALIDO = "MEDIA";
const std::string TUPrioridade::PRIORIDADE_INVALIDO = "NENHUMA";

void TUPrioridade::setUp(){
    prioridade = new Prioridade();
    estado_do_teste = SUCESSO;
}

void TUPrioridade::tearDown(){
    delete prioridade;
}

void TUPrioridade::testarCenarioSucesso(){
    try{
        prioridade->setPrioridade(PRIORIDADE_VALIDO);
        if (prioridade->getPrioridade() != PRIORIDADE_VALIDO)
            estado_do_teste = FALHA;
    }
    catch(invalid_argument &excecao){
        estado_do_teste = FALHA;
    }
}

void TUPrioridade::testarCenarioFalha(){
    try{
        prioridade->setPrioridade(PRIORIDADE_INVALIDO);
        estado_do_teste = FALHA;
    }
    catch(invalid_argument &excecao){
    }
}

int TUPrioridade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado_do_teste;
}
