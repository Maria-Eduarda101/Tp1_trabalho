#include "../dominios (headers)/estado.h" //Importa header file

// Método para validação de Estado.
void Estado::validar(string estado) {
    if (estado != "A FAZER" && estado != "FAZENDO" && estado != "FEITO")
        throw invalid_argument("Argumento invalido.");
}
