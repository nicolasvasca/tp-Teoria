#include "lerArquivo.h"

int main(){
    Processamento *processamento = new Processamento();
    string nome = "afd1.txt";
    string estado;
    lerArquivo(nome,processamento);

    for (int i = 0; i < processamento->getPalavras().size(); i++){
        estado = processamento->processamento(i);
        if (estado == "break"){
            cout << endl;
        }
        else{
            if (processamento->getAutomato().boolFinal(estado)){
                cout << estado << " e um estado final." << endl;
                cout << "A palavra " << processamento->getPalavras().at(i) << " e aceita pelo AF. " << endl;
            }
            else {
                cout << estado << " nao e um estado final." << endl;
                cout << "A palavra " << processamento->getPalavras().at(i) << " nao e aceita pelo AF. " << endl;
            }
        }
    }
    return 1;
}
