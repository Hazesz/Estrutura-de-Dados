#include <iostream>
#include <memory>

void processo_arriscado(){
    std::unique_ptr<int[]> recurso(new int[100]); //usando smart pointers não se torna necessário usar delete
}
int main(){
    processo_arriscado();
}