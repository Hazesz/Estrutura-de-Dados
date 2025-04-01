#include <iostream>

int main(){
    int matriz[3][4] = {};
    int soma = 0;
    int line, colum;

    for(line = 0; line < 3; line++){
        for(int colum = 0; colum < 4; colum++){
            std::cout << "Digite o elemento["<< line <<"]["<< colum <<"] da matriz:";
            std::cin >> matriz[line][colum];
        }
    }

    for(colum = 0; colum < 4; colum++){
        soma = 0;
        for(line = 0; line < 3; line++){
        soma += matriz[line][colum];
        }
        std::cout << "Soma dos valores da coluna "<<colum<<": "<< soma <<std::endl;
    }

    return 0;
}