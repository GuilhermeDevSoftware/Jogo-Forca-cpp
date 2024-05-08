#include<iostream>
#include<vector>
#include<map>
#include"letra_existe.hpp"

extern std::vector<char> chutes_errados;
extern std::map<char, bool> chutou;

void chuta(){
    std::cout << "Digite uma letra: ";
    char chute;
    std::cin >> chute;

    chutou[chute] = true;

    if(letra_existe(chute))
        std::cout << "Voce acertou! Seu chute esta na palavra." << std::endl;
    else{
        std::cout << "Voce errou! Seu chute nao esta na palavra." << std::endl;
        chutes_errados.push_back(chute);
    }
}