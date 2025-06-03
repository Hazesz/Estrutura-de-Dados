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
    return inicio;
}

int main(){
    std::vector<int> arr = {1,3,5,7,9};
    int key = 2;

    int pos = buscaBinaria(arr, key);
    std::cout << "Inserir: " << key << "\nposicao: " << pos << "\n";

    arr.insert(arr.begin() + pos, key);

    for(int& i : arr){
        std::cout << i << " ";
    }


}