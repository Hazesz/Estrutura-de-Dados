#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>

void insertionSort(std::vector<int>& v) {
    for (size_t i = 1; i < v.size(); i++) {
        int chave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }
}

void selectionSort(std::vector<int>& v) {
    for (size_t i = 0; i < v.size() - 1; i++) {
        size_t min_idx = i;
        for (size_t j = i + 1; j < v.size(); j++) {
            if (v[j] < v[min_idx])
                min_idx = j;
        }
        std::swap(v[i], v[min_idx]);
    }
}

void bubbleSort(std::vector<int>& v) {
    for (size_t i = 0; i < v.size() - 1; i++) {
        for (size_t j = 0; j < v.size() - i - 1; j++) {
            if (v[j] > v[j + 1])
                std::swap(v[j], v[j + 1]);
        }
    }
}

std::vector<int> gerarQuaseOrdenado(int n) {
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) v[i] = i;
    std::swap(v[n / 10], v[n / 2]);
    std::swap(v[n / 3], v[n / 4]);
    return v;
}

std::vector<int> gerarInverso(int n) {
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) v[i] = n - i;
    return v;
}

void medirTempo(void(*sortFunc)(std::vector<int>&), std::vector<int> v, const std::string& nomeAlg, const std::string& tipoVetor) {
    auto ini = std::chrono::high_resolution_clock::now();
    sortFunc(v);
    auto fim = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duracao = fim - ini;
    std::cout << nomeAlg << " - " << tipoVetor << " - Tamanho: " << v.size() << " -> Tempo: " << duracao.count() << " s\n";
}

int main() {
    std::vector<int> tamanhos = {100, 1000, 5000, 10000};
    for (int n : tamanhos) {
        std::vector<int> quaseOrdenado = gerarQuaseOrdenado(n);
        std::vector<int> inverso = gerarInverso(n);

        medirTempo(insertionSort, quaseOrdenado, "InsertionSort", "Quase Ordenado");
        medirTempo(insertionSort, inverso, "InsertionSort", "Inverso");

        medirTempo(selectionSort, quaseOrdenado, "SelectionSort", "Quase Ordenado");
        medirTempo(selectionSort, inverso, "SelectionSort", "Inverso");

        medirTempo(bubbleSort, quaseOrdenado, "BubbleSort", "Quase Ordenado");
        medirTempo(bubbleSort, inverso, "BubbleSort", "Inverso");

        std::cout << "----------------------------\n";
    }
    return 0;
}
