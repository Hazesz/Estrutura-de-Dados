#include <iostream>

struct par{
    int valor;
    char id;
};

void selectionSort(par arr[], int n){
    std::cout << "Selection Sort \n";
    bool troca;
    troca = false;
    int posicao;

    std::cout << "Array nao ordenado:";
    std::cout << "\n";
    for(int i = 0; i < n; i ++){
        std::cout << arr[i].valor <<", "<< arr[i].id << "|";
    }
    std::cout << "\n";

    for(int i = 0; i < n - 1; i++){
        posicao = i;
        int aux;
        for(int j = i+1; j < n; j++){
            if(arr[j].valor < arr[posicao].valor){
                posicao = j;
                troca = true;
            }
        }
        if(troca){
               par aux = arr[i];
               arr[i] = arr[posicao];
               arr[posicao] = aux;
            }
    }
    std::cout << "Array ordenado:\n";
    for(int i = 0; i < n; i ++){
        std::cout << arr[i].valor <<", "<< arr[i].id << "|";
    }
    std::cout << "\n";
}

void insertionSort(par arr[], int n){
    std::cout << "Insertion Sort \n";
    std::cout << "Array nao ordenado:";
    std::cout << "\n";
    for(int i = 0; i < n; i ++){
        std::cout << arr[i].valor <<", "<< arr[i].id << "|";
    }
    std::cout << "\n"; 
    
    for(int i = 1; i < n; i++){
        par key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j].valor > key.valor){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    std::cout << "Array ordenado:\n";
    for(int i = 0; i < n; i ++){
        std::cout << arr[i].valor <<", "<< arr[i].id << "|";
    }
    std::cout << "\n";
}
int main(){
    par arr[] = {{5, 'A'}, {3, 'B'}, {5, 'C'}, {2, 'D'}};
    par arr1[] = {{5, 'A'}, {3, 'B'}, {5, 'C'}, {2, 'D'}};
    int n = 4;

    selectionSort(arr, n);
    insertionSort(arr1, n);
}