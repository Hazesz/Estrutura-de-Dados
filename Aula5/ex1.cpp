#include <iostream>
using namespace std;

struct no{
    int valor;
    no* prox;
};
    void exibir(no *primeiro){
        no* atual = primeiro;
        while( atual != nullptr){
            cout << atual -> valor << " ";
            atual = atual -> prox;
        }
    }
    void inverter_lista(no* primeiro){
        no* ant = nullptr;
        no* atual = primeiro;
        no* prox = nullptr;

        cout << "Lista invertida";
        while(atual != nullptr){
            prox = atual -> prox;
            atual -> prox = ant;
            ant = atual;
            atual = prox;
        }
        primeiro = ant;
        cout << "\n";
        exibir(primeiro);
    }

int main(){
    no* primeiro = new no{10, nullptr};
    no* segundo = new no{20, nullptr};
    no* terceiro = new no{30, nullptr};

    primeiro -> prox = segundo;
    segundo -> prox = terceiro;
    
    inverter_lista(primeiro);
    
    delete terceiro;
    delete segundo;
    delete primeiro;

}