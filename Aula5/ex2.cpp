#include <iostream>

struct no{
    int valor;
    no* prox;
    no* ant;
};

void duplicados(no*& primeiro){
    no* atual = primeiro;
    no* verificador;
    while(atual != nullptr){
        no* verificador = atual -> prox;
        while(verificador != nullptr){
            if(verificador == atual){
                
            }
        }
    }
}

int main(){
    no* primeiro = new no {10}; 
    no* segundo = new no {20};
    no* terceiro = new no {30};
    no* quarto = new no {10};

    primeiro -> ant = quarto;
    primeiro -> prox = segundo;
    segundo -> prox = terceiro;
    terceiro -> prox = quarto;

    duplicados(primeiro);
}