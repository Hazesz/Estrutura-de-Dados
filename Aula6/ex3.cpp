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

    bool combinam(char abre, char fecha){ //verifica se o simbolo que abre se fecha
        return(abre == '(' && fecha == ')') ||
              (abre == '[' && fecha == ']') ||
              (abre == '{' && fecha == '}');
    }

    bool balanceado(const string& expressao){
        Pilha pilha;
        for(char c : expressao){ // loop de cada caractere
            if(c == '(' || c == '[' || c == '{'){
                pilha.push(c);   // se for um simbolo de abertura, empilha
            }
            else if(c == ')' || c == ']' || c == '}'){ //se for fechamente, continua
                if(pilha.isEmpty()){ //se tiver vazia, e não tiver simbolo combinante
                    return false;
                }
                char topo = pilha.pop(); //remove o topo para comparar
                if(!combinam(topo,c)){ //ve se o simbolo retirado combina
                    return false;
                }
            }
        }
        return pilha.isEmpty(); //se a pilha terminar vazia, tudo deu certo
    }

int main(){
    string frase1("{()}");
    string frase2("{(})");
    string frase3("({})");

    cout << frase1 << " " << (balanceado(frase1) ? "balanceado" : "desbalanceado") << endl;
    cout << frase2 << " " << (balanceado(frase2) ? "balanceado" : "desbalanceado") << endl;
    cout << frase3 << " " << (balanceado(frase3) ? "balanceado" : "desbalanceado") << endl;
}