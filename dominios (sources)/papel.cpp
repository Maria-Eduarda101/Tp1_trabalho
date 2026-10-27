#include "../dominios (headers)/papel.h" //Importa header file

// Método para validação de Papel.
void Papel::validar(string papel) {
    if (papel != "GESTOR" && papel != "DESENVOLVEDOR")
        throw invalid_argument("Argumento invalido.");
}
