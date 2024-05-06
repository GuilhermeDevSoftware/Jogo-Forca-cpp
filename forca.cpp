#include <iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;
using std::cout;
using std::endl;

const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;
vector<char> chutes_errados;

void abertura(){
    cout<<"--------------------------------------"<<endl;
    cout<<"-----------Jogo de Forca--------------"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<< endl;
}

bool letra_existe(char chute){
    for(char letra : PALAVRA_SECRETA){
        if(chute == letra) return true;      
    }
    return false;        
}

bool nao_acertou(){
    for(char letra : PALAVRA_SECRETA){
        if(!chutou[letra])
            return true;
    }
    return false;
}

bool nao_enforcou(){
    return chutes_errados.size() < 5;
}

void imprime_erros(){
    cout<<"Chutes errados: ";
    for(char letra : chutes_errados)
        cout<<letra <<" ";
        cout<< endl;
}

void imprime_palavra(){
    for(char letra : PALAVRA_SECRETA){
        if(chutou[letra])
            cout << letra << " ";
        else
            cout << "_ ";
    }
}

void chuta(){
    cout << "Digite uma letra: ";
    char chute;
    cin >> chute;

    chutou[chute] = true;

    if(letra_existe(chute))
        cout << "Voce acertou! Seu chute esta na palavra." << endl;
    else{
        cout << "Voce errou! Seu chute nao esta na palavra." << endl;
        chutes_errados.push_back(chute);
    }
}
int main(){

    abertura();

    while(nao_acertou() && nao_enforcou()){
        imprime_erros();

        imprime_palavra();
        cout << endl;

        chuta();       
        
        cout << endl;        
    }
    cout<< "Fim de jogo!"<< endl;
    cout<< "A palavra secreta era "<<PALAVRA_SECRETA<<endl; 

    if(nao_acertou()){
        cout<< "Tente novamente"<< endl << "Voce perdeu!"<< endl;
    }
    else
         cout<<"Parabens! Voce acertou a palavra"<< endl;
    return 0;
}