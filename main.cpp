#include "afd.h"
#include "menu.h"

int main(){
    Processamento *processamento = new Processamento();
    vector<string> nome;
    int m = 1;
    while(m!=0){
        cout << "\nMenu " << endl; 
        cout << "[1] AFD1" << endl;
        cout << "[2] AFD2" << endl;
        cout << "[3] AFD3" << endl;
        cout << "[4] AF1" << endl;
        cout << "[5] AF2" << endl;
        cout << "[6] AF3" << endl;
        cout << "[7] INSERIR NOVO AF" << endl;
        cout << "[0] SAIR" << endl;
        cin >> m;
        
        if(m!=0 && m !=7){
            nome = menu(m);
            if(nome[0]=="afd"){
                afd(nome[1], processamento);
            }
        }
        


    }
    
    return 1;
}
