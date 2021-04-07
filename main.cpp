#include "lerArquivo.h"

int main(){
    Processamento *processamento = new Processamento();
    string nome = "afd1.txt";
    string estado;
    lerArquivo(nome,processamento);

    for (int i = 0; i < processamento->getPalavras().size(); i++){
        estado = processamento->processamento(i);
    }
    return 1;
}
