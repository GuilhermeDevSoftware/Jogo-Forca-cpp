#include<string>
#include<map>

extern std::string palavra_secreta;
extern std::map<char, bool> chutou;

bool nao_acertou(){
    for(char letra : palavra_secreta){
        if(!chutou[letra])
            return true;
    }
    return false;
}