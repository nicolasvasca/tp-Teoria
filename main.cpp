#include "funcao.h"

int main(){
    Processamento *processamento = new Processamento();
    string nome = "afd1.txt";
    lerArquivo(nome,processamento);

    vector<string> palavras = processamento->getPalavras();
    for(int i = 0; i < palavras.size();i++){
        cout << palavras[i] <<endl;
    }
    

    return 1;
}
