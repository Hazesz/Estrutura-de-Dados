#include <iostream>

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){         //contra as passadas do algoritmo pelo array
        for(int j = 0; j < n - 1; j++){     //loop das comparações
            if(arr[j] > arr[j + 1]){    //verifica se a posição atual do vetor é maior que a posterior
                int temp = arr[j];      //se for, cria uma var temp para acomodar a posição atual do vetor
                arr[j] = arr[j+1];      //atribui a posição atual a próxima posição
                arr[j+1] = temp;        //e coloca a antiga posição posterior na posição anterior
                                        //assim ordenando o array melhor a cada passada, verificando os pares
            }
        }   
    }
}

void selectionSort(int arr[], int n){
    bool troca;
    int posicao;    //posicao vai apontar o menor valor
    for(int i = 0; i < n - 1; i++){//conta passadas do algoritmo
        posicao = i;    //posicao armazena a primeira posicao como menor elemento inicialmente
        troca = false;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[posicao]){ //verifica se o elemento j no array é menor que o elemento na posicao
            posicao = j;    //se for menor, posicao recebe j como menor elemento atual
            troca = true;   //atriva a variavel troca
            }
        }

        if(troca){  //se troca for ativada para true, executa
            int temp = arr[i];  //variavel temporaria armazena o arr na posicao i atual
            arr[i] = arr[posicao]; //arr na posicao i, vai receber o valor do menor elemento atual que esta armazenado em posicao
            arr[posicao] = temp; //posicao recebe o valor de i
        }
    }
}

void insertionSort(int arr[], int n){

}

int main(){
    int arr0[]={0,1,2,3,4,5,6,7,8,9};
    int arr1[]={9,8,7,6,5,4,3,2,1,0};
    int arr2[]={7,2,6,4,1,5,0,3,8,9};
    int arr3[]={1,9,4,2,8,9,1,2,3,7};
    int n = 10;

    bubbleSort(arr0, n);
    selectionSort(arr0, n);
}