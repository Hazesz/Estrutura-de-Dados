#include <iostream>

int main(){
    int vet[8] = {};

    std::cout << "Digite os valores presentes no vetor:";
    for(int i = 0; i < 8; i++){
    std::cin >> vet[i];
    }
    std::cout << "Vetor inverso";
    for(int i = 7; i >= 0; i--){
        std::cout << ", "<< vet[i]<<"";
    }
    std::cout << ".";
}