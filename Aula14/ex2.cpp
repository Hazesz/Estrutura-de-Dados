#include <iostream>
#include <vector>
#include <algorithm>

    int buscaBinariaIterativa(std::vector<int>& arr, int key){
        int inicio = 0;
        int fim = arr.size() - 1;

        while (inicio <= fim){
            int meio = inicio + (fim - inicio) / 2;

            if(arr[meio] == key) return meio;

            else if(key < arr[meio]){
                fim = meio - 1; //procura na metade da esquerda
            }
            
            else{
                inicio = meio + 1; //procura na metade da direita
            }
        }
        return -1;
    }

    int inserirElemento(std::vector<int>& arr, int key){
        bool swaped;
        int tam = arr.size();
        
        for(int i = 0; i < tam - 1; i++){
            swaped = false;
            for(int j = 0; j < tam - 1 - i; j++){
                if(arr[j] > arr[j + 1]){
                    std::swap(arr[j], arr[j + 1]);
                    swaped = true;
                }
            }
            if(!swaped) break;
        }

        int retorno = buscaBinariaIterativa(arr, key);
        return retorno;
    }
    

    int main(){
        std :: vector<int> arr = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        int key = 97;
        int resultado = buscaBinariaIterativa(arr, key);
        
        if(resultado != -1){
            std::cout << "Elemento encontrado na posicao:" << resultado << "\n";
        }
        else{
            std::cout << "Elemento nao encontrado" << "\n";
            arr.push_back(key);
            resultado = inserirElemento(arr, key);
            std::cout << "Melhor posicao para a insercao do elemento: " << resultado;
        }
    }