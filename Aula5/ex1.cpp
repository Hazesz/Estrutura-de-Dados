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
    void inverter_lista(no*& primeiro){
        no* ant = nullptr;
        no* atual = primeiro;
        no* prox = nullptr;

        cout << "Lista invertida";
        while(atual != nullptr){
            prox = atual -> prox;   //guarda o primeiro no
            atual -> prox = ant;    //inverte o ponteiro
            ant = atual;    //avanca o ponteiro ant
            atual = prox;   //avanca para  oproximo da lista original
        }
        primeiro = ant; //atualiza o inicio da lista dentro da funcao
        cout << "\n";
        exibir(primeiro);
    }
// se pilha era confuso, isso...
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