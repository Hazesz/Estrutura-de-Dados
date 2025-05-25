#include <iostream>

void bubbleSort(int vet[], int n){
    int aux;

    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(vet[i] < vet[j]){
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++){
        std::cout << vet[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;

    bubbleSort(arr, n);
}