#include <iostream>

void ordenar(int vetor[], int tamanho){ //bubble sort para ordenar o vetor (primeira vez usando)
    int aux;
    for(int i = 0; i < tamanho; i++){ 
        for(int j = 0; j < tamanho - 1; j++){ // -1 pq vetor[j+1], se não colocar sai dos limites do array
            if(vetor[j] > vetor[j+1]){ //se um numero for maior que o outro
                aux = vetor[j]; //pega o numero maior
                vetor[j] = vetor[j+1]; //troca com o numero menor
                vetor[j+1] = aux; //e coloca o numero maior na frente
            }
        }
    }
    std::cout << "Vetor Ordenado: ";
    for(int i = 0; i < tamanho; i++){
        std::cout << vetor[i] << "; ";
    }
}

int main(){
    int vetor[8];
    
    for(int i = 0; i < 8; i++){
    std::cin >> vetor[i];
    }

    ordenar(vetor, 8);

}