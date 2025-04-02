#include <iostream>
#include <ctime>

void vetor_vetores(){
    
    int linhas = 3, colunas = 4;
    int valor = 1;
    
    int** matriz = new int*[linhas];
    
    for(int i=0; i < linhas; i++) {
        matriz[i] = new int[colunas];
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = valor++;
        }
    }

}

void matriz_contigua(){
    int linhas = 3, colunas = 4;
    int valor = 1;

    int* dados = new int[linhas*colunas];
    int** matriz = new int*[linhas];

    for(int i=0; i<linhas; i++) {
        matriz[i] = dados + i*colunas;
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = valor++;
        }
    }


}

void vetor_vetores_10000x10000(){
    
    int linhas = 10000, colunas = 10000;
    int valor = 1;
    
    int** matriz = new int*[linhas];
    
    for(int i=0; i < linhas; i++) {
        matriz[i] = new int[colunas];
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = valor++;
        }
    }

}

void matriz_contigua_10000x10000(){
    int linhas = 10000, colunas = 10000;
    int valor = 1;

    int* dados = new int[linhas*colunas];
    int** matriz = new int*[linhas];

    for(int i=0; i<linhas; i++) {
        matriz[i] = dados + i*colunas;
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = valor++;
        }
    }

}
int main(){
    clock_t inicio = clock();
    vetor_vetores();
    clock_t fim = clock();

    double tempo_exec = double(fim - inicio) /CLOCKS_PER_SEC;
    std::cout << "Tempo de execucao vetor de vetores: " << tempo_exec << " segundos" << std::endl; // 0.002 sec

    clock_t inicio1 = clock();
    matriz_contigua();
    clock_t fim1 = clock();

    double tempo_exec1 = double(fim1 - inicio1) /CLOCKS_PER_SEC;
    std::cout << "Tempo de execucao matriz contigua: " << tempo_exec1 << " segundos" << std::endl; // 0.001 sec

    //10000 x 10000

    clock_t inicio2 = clock();
    vetor_vetores_10000x10000();
    clock_t fim2 = clock();

    double tempo_exec2 = double(fim2 - inicio2) /CLOCKS_PER_SEC;
    std::cout << "Tempo de execucao vetor de vetores 10000x10000: " << tempo_exec2 << "segundos" << std::endl; //0.28 sec

    clock_t inicio3 = clock();
    matriz_contigua_10000x10000();
    clock_t fim3 = clock();

    double tempo_exec3 = double(fim3 - inicio3) /CLOCKS_PER_SEC;
    std::cout << "Tempo de execucao matriz contigua 10000x10000: " << tempo_exec3 << "segundos" << std::endl; //0.21 sec

    //explicação dos resultados no documento encaminhado juntamente dos exercicios;
}