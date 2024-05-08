#include <iostream>
#include<string>
#include<map>
#include<vector>
#include<fstream>
#include<ctime>
#include<cstdlib>

#include"nao_acertou.hpp"
#include"letra_existe.hpp"
#include"chuta.hpp"
#include"abertura.hpp"
#include"adciona_palavra.hpp"
#include"imprime_erros.hpp"
#include"imprime_palavra.hpp"
#include"le_arquivo.hpp"
#include"nao_enforcou.hpp"
#include"salva_arquivo.hpp"
#include"sorteia_palavra.hpp"

using namespace std;
using std::cout;
using std::endl;

string palavra_secreta;
map<char, bool> chutou;
vector<char> chutes_errados;

int main(){

    abertura();
    le_arquivo();
    sorteia_palavra();

    while(nao_acertou() && nao_enforcou()){
        imprime_erros();

        imprime_palavra();
        cout << endl;

        chuta();       
        
        cout << endl;        
    }
    cout<< "Fim de jogo!"<< endl;
    cout<< "A palavra secreta era "<<palavra_secreta<<endl; 

    if(nao_acertou()){
        cout<< "Tente novamente"<< endl << "Voce perdeu!"<< endl;
    }
    else{
         cout<<"Parabens! Voce acertou a palavra"<< endl;
         cout<<"Deseja inserir uma nova palavra ao banco: (S) Sim - (N) Nao  -> ";
         char resposta;
         cin >>resposta;
         if(resposta == 'S' || resposta == 's'){
            adciona_palavra();
         }

    }
    return 0;
}