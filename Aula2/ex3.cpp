#include <iostream>

int main(){
    int arr[5] = {};
    int maior, menor;
    double media = 0;

    maior = menor = arr[0];

    for(int i = 0; i < 5; i++){
    std::cin >> arr[i];
    }
    for(int i = 0; i < 5; i++){
        if(arr[i] > maior){
        maior = arr[i];
        }
        if(arr[i] < menor){
        menor = arr [i];
    }
    media += arr[i];
    }
    media = media / 5;
    std::cout << "Maior: "<<maior<<std::endl;
    std::cout << "Menor: "<<menor<<std::endl;
    std::cout << "Acima da media:";
    for(int i = 0; i < 5; i++){
        if(arr[i] > media){
            std::cout << ""<<arr[i]<<"";
        }
    }
}