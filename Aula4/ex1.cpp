#include <iostream>
#define MAX 3
int pilha[MAX]; //tamanho da pilha
int topo = -1; //topo da pilha, -1 indica que está vazia

void push(char entr){
    topo++; //coloca o dado no topo da pilha
    pilha[topo] = entr; //coloca os dados no topo da pilha
}

void pop(){
    topo--; //"remove" o dado do topo da pilha(fica inacessivel pq reduziu topo)
}

void calcular(){
    int x = pilha [0] - '0'; // tem que usar esse - '0' para converter para inteiro, que bagulho nada haver...
    int y = pilha [1] - '0';
    int resultado;

    if(pilha[2] == '+'){ //fazendo a verificação do ultimo elemento inserido no push e vendo que operador ele é
        resultado = x + y;
    }
    else if(pilha[2] == '-'){
        resultado = x - y;
    }
    else if(pilha[2] == '/'){
        resultado = x / y; 
    }
    else{
        return;
    }
    //esse código só funciona com operações simples, não tentei implementar para operações com 2 digitos, e nem cheguei a pesquisar como faz...

    std::cout << (char)pilha[0] << " " << (char)pilha[2] << " " << (char)pilha[1] << " = " << resultado;
    // eu nunca pensei que fazer uma pilha seria algo tão confuso...
    }

int main(){
    push('5');
    push('5');
    push('/');

    calcular();
    
    pop();
    pop();
    pop();
    return 0;
}