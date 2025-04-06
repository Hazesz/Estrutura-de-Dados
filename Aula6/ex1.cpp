#include <iostream>
using namespace std;

struct vert{
    int dados;
    vert* prox;
};

class Pilha{
    private: 
        vert* topo;

    public:
        Pilha() : topo(nullptr){} //pilha começa vazia
    
    void push(int valor){
        vert* new_vert = new vert;  //cria um novo nó
        new_vert -> dados = valor;  //atribui o valor recebido
        new_vert -> prox = topo;    //nó novo aponta pro nó topo
        topo = new_vert;    //topo vira o novo nó
    }
    
    int pop(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int valor = topo -> dados; //guarda o valor do topo
        vert* temp = topo;  
        topo = topo -> prox;    //move o topo para frente
        delete temp;    //deleta o antigo topo
        return valor;   //retorna valor removido
    }

    bool isEmpty() const{
        return topo == nullptr;
    }

    ~Pilha(){
        while(!isEmpty()){
            pop();  //libera toda a memória
        }
    }
};

    int main(){
        Pilha pilha;
        pilha.push(3);
        pilha.push(2);
        pilha.push(1);

        Pilha auxiliar;


        while(!pilha.isEmpty()){
            int valor = pilha.pop();
            auxiliar.push(valor);
        }

        while(!auxiliar.isEmpty()){
            std::cout << auxiliar.pop() << " ";
        }
    }