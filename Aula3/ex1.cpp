#include <iostream>

void cmatriz(int linhas, int colunas, int** matriz){
    int valor = 0;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = valor++;
        }
    }
}

//exemplo utilizado dos slides da aula 3 para a montagem do exercicio
int main(){
    int linhas = 2, colunas = 2;

    //alocando dinamicamente
    int** matriz = new int *[linhas]; //aloca um vetor de inteiros para cada linha da matriz

    for(int i = 0; i < linhas; i++){
        matriz[i] = new int [colunas]; //aloca um vetor de inteiros para cada linha da matriz, sendo ele armazenado no ponteiro da matriz[i]
    }

    cmatriz(linhas, colunas, matriz);

    std::cout << "Exibindo matriz:" << std::endl;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
}
    //deletando linha a linha da matriz da memoria
    for(int i = 0; i < linhas; i++){
        delete[] matriz[i];
    }
    //delentando a matriz da memoria
    delete[] matriz;
}