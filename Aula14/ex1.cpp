#include <iostream>
#include <vector>

    std::vector<int> buscaSequenciaOcorrencia(std :: vector<int> arr, int key){ //para o retorno ser o um vetor,
                                                                                // então a função deve ser declarada com std::vector<int>
        int tam = arr.size();
        std :: vector<int> indc;
        for(int i = 0; i < tam; i++){
            if(key == arr[i]){ 
                indc.push_back(i); //push_back() manda o elemento capturado para a pilha do vetor
            }
        }
        return indc;
    }

    int main(){
        std :: vector <int> arr = {1, 1, 0, 3, 4, 6, 77, 8, 11, 1, 2, 0, 3};
        int chave = 1;
        std :: vector <int> indc = buscaSequenciaOcorrencia(arr, chave); //já atribuindo a função a uma variavel, melhor manipulação

        std::cout << "Vetor com indices onde o elemento compativel com a chave foi localizado: \n";

        for(int&i : buscaSequenciaOcorrencia(arr,chave)){ //chamada informando os elementos
            std::cout << i << " "; //neste caso i vai imprimir o elemento que estiver nas posições que o vetor percorrer
                                    //neste caso, o indice dos elementos achados no arr, que estão armazenados no indc
        }
        return 0;
    }