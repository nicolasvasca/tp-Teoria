#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> menu(int menu){
    vector<string> af;
    if (menu == 1){
        af.push_back("afd");
        af.push_back("afd1.txt");
        return af;
    }
    else if (menu == 2){
        af.push_back("afd");
        af.push_back("afd2.txt");
        return af;
    }
    else if (menu == 3){
        af.push_back("afd");
        af.push_back("afd3.txt");
        return af;
    }
    else if (menu == 4 ){
        af.push_back("af");
        af.push_back("af1.txt");
        return af;
    }
    else if (menu == 5){
        af.push_back("af");
        af.push_back("af2.txt");
        return af;
    }
    else if (menu == 6){
        af.push_back("af");
        af.push_back("af2.txt");
        return af;
    }

}