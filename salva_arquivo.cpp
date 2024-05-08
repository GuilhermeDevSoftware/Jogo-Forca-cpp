#include<iostream>
#include<fstream>
#include"salva_arquivo.hpp"

void salva_arquivo(std::vector<std::string> nova_lista){
    std::ofstream arquivo; 
    arquivo.open("palavras.txt");
    if(arquivo.is_open()){
        arquivo << nova_lista.size() <<std::endl; 
        for(std::string palavra : nova_lista){
            arquivo << palavra << std::endl;
        }
        arquivo.close();
    }
    else{ 
        std::cout<< "Nao foi possivel aceesar o banco de palavras. " <<std::endl;
        exit(0);    
    }

}