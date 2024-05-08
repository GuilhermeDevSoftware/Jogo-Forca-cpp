#include<string>

extern std::string palavra_secreta;

bool letra_existe(char chute){
    for(char letra : palavra_secreta){
        if(chute == letra) return true;      
    }
    return false;        
}