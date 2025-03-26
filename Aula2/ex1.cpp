#include <iostream>

int main(){
    int matriz[3][4] = {};
    int soma = 0;

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 4; c++){
            std::cout << "Digite o elemento["<< l <<"]["<< c <<"] da matriz:";
            std::cin >> matriz[l][c];
        }
    }

    for(int line = 0; line < 3; line++){
        for(int colum = 0; colum < 4; colum++){
            soma += matriz[line][colum];
        }
    }
    std::cout << "Soma dos valores:"<< soma <<"";

    return 0;
}