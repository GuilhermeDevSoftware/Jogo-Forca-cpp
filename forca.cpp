#include <iostream>
#include<string>
using namespace std;

int main(){
    string palavra_secreta = "MELANCIA";
    cout<<palavra_secreta<< endl;

    bool nao_enforcou = true;
    bool nao_acertou = true;

    while(nao_acertou && nao_enforcou){
        char chute;
        cin>>chute;

        cout<<"Seu chute foi: "<<chute<< endl;
    }



    return 0;
}