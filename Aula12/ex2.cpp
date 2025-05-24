#include <iostream>

void bubbleSort(int arr[], int n){
    int cont = 0;
    for(int i = 0; i < n; i++){         //contra as passadas do algoritmo pelo array
        cont ++;
        for(int j = 0; j < n; j++){     //loop das comparações
            if(arr[j] > arr[j + 1]){    //verifica se a posição atual do vetor é maior que a posterior
                int temp = arr[j];      //se for, cria uma var temp para acomodar a posição atual do vetor
                arr[j] = arr[j+1];      //atribui a posição atual a próxima posição
                arr[j+1] = temp;        //e coloca a antiga posição posterior na posição anterior
                                        //assim ordenando o array melhor a cada passada, verificando os pares
            }
        }   
    }
    std::cout << "Execucoes Bubble Sort: " << cont;
}

void selectionSort(){

}

void insertionSort(){

}

int main(){
    int arr0[]={0,1,2,3,4,5,6,7,8,9};
    int arr1[]={9,8,7,6,5,4,3,2,1,0};
    int arr2[]={7,2,6,4,1,5,0,3,8,9};
    int arr3[]={1,9,4,2,8,9,1,2,3,7};
    int n = 10;

    bubbleSort(arr1, n);
}