#include <iostream>
#include <algorithm>
#include <vector>

int buscaBinaria(std::vector<int> arr, int key){
    int inicio = 0;
    int fim = arr.size() -1;

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
    return inicio; //o algoritmo vai achar a posição onde o elemento deve ser inserido e vai retornar essa posicao encontrada
}

int main(){
    std::vector<int> arr = {1,3,5,7,9};
    int key = 2;

    int pos = buscaBinaria(arr, key);
    std::cout << "Inserir: " << key << "\nposicao: " << pos << "\n";

    arr.insert(arr.begin() + pos, key); //vai inserir o valor no inicio do array + posicao que vai ser inserida

    for(int& i : arr){
        std::cout << i << " ";
    }


}