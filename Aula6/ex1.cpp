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
        Pilha() : topo(nullptr){}
    
    void push(int valor){
        vert* new_vert = new vert;
        new_vert -> dados = valor;
        new_vert -> prox = topo;
        topo = new_vert;
    }
    
    int pop(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int valor = topo -> dados;
        vert* temp = topo;
        topo = topo -> prox;
        delete temp;
        return valor;
    }

    bool isEmpty() const{
        return topo == nullptr;
    }

    ~Pilha(){
        while(!isEmpty()){
            pop();
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