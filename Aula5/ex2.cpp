#include <iostream>

struct no{
    int valor;
    no* prox;
    no* ant;
};

void exibir(no *primeiro){
    no* atual = primeiro;
    while( atual != nullptr){
        std::cout << atual -> valor << " ";
        atual = atual -> prox;
    }
}

void duplicados(no*& primeiro){
    no* atual = primeiro;
    
    while(atual != nullptr){
        no* verificador = atual -> prox; //começa a procurar os valores duplicados após o valor atual
        
        while(verificador != nullptr){
            no* prox = verificador -> prox; //guarda o proximo nó antes de deletar
            
            if(verificador -> valor == atual -> valor){
                //remove o nó duplicado
               if(verificador -> ant != nullptr){
                verificador -> ant -> prox = verificador -> prox;
               }
                if(verificador -> prox != nullptr){
                    verificador -> prox -> ant = verificador -> ant;
                }
               delete verificador; //libera mem do nó duplicado
            }
            verificador = prox; //continua verificando
        }
        atual = atual -> prox; //vai para o proximo da lista
    }
}
//eu consigo entender perfeitamente a abstração desse processo, mas a implementação é realmente um desafio

int main(){
    no* primeiro = new no {10, nullptr, nullptr}; 
    no* segundo = new no {20, nullptr, nullptr};
    no* terceiro = new no {30, nullptr, nullptr};
    no* quarto = new no {10, nullptr, nullptr};

   
    primeiro -> prox = segundo;

    segundo -> ant = primeiro;
    segundo -> prox = terceiro;

    terceiro -> ant = segundo;
    terceiro -> prox = quarto;

    quarto -> ant = terceiro;

    std::cout << "Com nos duplicados:";
    exibir(primeiro);
    std::cout << "\n";

    duplicados(primeiro);

    std::cout << "Sem nos duplicados:";
    exibir(primeiro);

    delete primeiro;
    delete segundo;
    delete terceiro;
    delete quarto; //liberar a memoria só por desencargo de consciencia e evitar memory leak
}