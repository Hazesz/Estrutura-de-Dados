#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int buscaBinaria(std::vector <std::string>& arr, std::string key){
    int inicio = 0;
    int fim = arr.size();

    while(inicio <= fim){
        int meio = inicio + (fim - inicio) / 2;

        if(arr[meio] == key){
            return meio;
        }
        else if(key < arr[meio]){
            fim = meio - 1;
        }
        else{
            inicio = meio + 1;
        }
    }
    return -1;
}

int main(){
    std :: vector <std :: string> arr = {"ana", "eduardo", "giovana", "giovanna", "igor", "juliana"};
    std :: string key = "igor";
    
    std::sort(arr.begin(), arr.end());
    int pos = buscaBinaria(arr, key);

    if(pos != -1){
        std::cout << "Encontrado na posicao: " << pos;
    }
    else{
        std::cout << "Elemento nao encontrado";
    }
}