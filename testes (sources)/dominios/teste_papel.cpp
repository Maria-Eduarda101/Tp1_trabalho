#include "../../testes (headers)/dominios/teste_papel.h" //Importa header file

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

const std::string TUPapel::PAPEL_VALIDO = "DESENVOLVEDOR";
const std::string TUPapel::PAPEL_INVALIDO = "CLIENTE";

void TUPapel::setUp(){
    papel = new Papel();
    estado_do_teste = SUCESSO;
}

void TUPapel::tearDown(){
    delete papel;
}

void TUPapel::testarCenarioSucesso(){
    try{
        papel->setPapel(PAPEL_VALIDO);
        if (papel->getPapel() != PAPEL_VALIDO)
            estado_do_teste = FALHA;
    }
    catch(invalid_argument &excecao){
        estado_do_teste = FALHA;
    }
}

void TUPapel::testarCenarioFalha(){
    try{
        papel->setPapel(PAPEL_INVALIDO);
        estado_do_teste = FALHA;
    }
    catch(invalid_argument &excecao){
    }
}

int TUPapel::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado_do_teste;
}
