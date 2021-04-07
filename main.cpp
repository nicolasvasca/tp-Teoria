#include "funcao.h"

int main(){
    Processamento *processamento = new Processamento();
    string nome = "afd1.txt";
    lerArquivo(nome,processamento);
    return 1;
}
