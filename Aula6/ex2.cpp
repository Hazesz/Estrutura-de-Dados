#include <iostream>
using namespace std;

struct Pilha{
    int dados;
    Pilha* prox;
};

class Stack{
    private:
        Pilha* topo;
        
    public:
        Stack() : topo(nullptr) {}

    void push(int valor){
        Pilha* novo = new Pilha; // novo nó
        novo -> dados = valor;
        novo -> prox = topo; // aponta para o topo anterior
        topo = novo;    //aponta para o novo topo
    }

    int pop(){
        if(isEmpty()){
            return -1;
        }
        int valor = topo -> dados; //pega o valor do topo
        Pilha* temp = topo;    //salva o topo num temporario 
        topo = topo -> prox;    //avança o topo para o prox
        delete temp;    //deleta o temporario
        return valor;   //retorna o valor
    }
    
    bool isEmpty() const{
        return topo == nullptr;
    }

    int top() const{
        if(isEmpty())return -1;
        return topo -> dados; //retorna o topo sem remove-lo
    }
};

class Queue{ // fila
    private:
        Stack pilhaentrada;
        Stack pilhasaida;
   
    public:
        void enqueue(int valor){
            pilhaentrada.push(valor);
        }

    int dequeue(){
        if(pilhasaida.isEmpty()){
            while(!pilhaentrada.isEmpty()){
                    pilhasaida.push(pilhaentrada.pop()); //tira os elementos da pilha entrada e coloca na pilha saida
            }
        }
        if(pilhasaida.isEmpty()){
            cout << "queue underflow" << endl;
            return -1;
        }
        return pilhasaida.pop();
    }

    bool isEmpty() const{
        return pilhaentrada.isEmpty() && pilhasaida.isEmpty();
    }
};

int main(){
    Queue fila;
    fila.enqueue(10);
    fila.enqueue(20);
    fila.enqueue(30);
    fila.enqueue(40);

    cout << fila.dequeue() << endl;
    cout << fila.dequeue() << endl;

    cout << fila.dequeue() << endl;
    cout << fila.dequeue() << endl;

}