#include <iostream>
#define MAX 100

//exercicio utilizando os exemplos da Aula 4 para a implementação do código
class Lista {
private:
    int dados[MAX];
    int tamanho;

public:
    Lista() : tamanho(0) {}

    bool inserir(int valor, int pos) {
        if (tamanho >= MAX || pos < 0 || pos > tamanho)
            return false;

        for (int i = tamanho; i > pos; i--) {
            dados[i] = dados[i - 1]; // Move os elementos para frente
        }
        dados[pos] = valor; // Insere o novo valor
        tamanho++;
        return true;
    }

    bool remover(int pos) {
        if (pos < 0 || pos >= tamanho)
            return false;

        for (int i = pos; i < tamanho - 1; i++) {
            dados[i] = dados[i + 1]; // Move os elementos para tras
        }

        tamanho--;
        return true;
    }

    int buscar(int valor) {
        for (int i = 0; i < tamanho; i++) {
            if (dados[i] == valor) {
                return i; // Retorna a posicao do valor encontrado
            }
        }
        return -1; // So retorna -1 depois de percorrer toda a lista
    }
};

int main() {
    Lista lista;

    lista.inserir(10, 0);
    lista.inserir(20, 1);
    lista.inserir(30, 2);

    std::cout << "Posicao do 20: " << lista.buscar(20) << "\n";

    lista.remover(1); // Remove elemento da posicao 1

    std::cout << "Posicao do 20 apos remocao: " << lista.buscar(20) << "\n"; 

    return 0;
}