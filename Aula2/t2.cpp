#include <iostream>

int main(){
    int arr[5] = {1,1,2,2,3};

    for(int i = 0; i < 5; i++){
        for(int g = i + 1; g < 5; g++){
            if(arr[i] == arr[g]){
               std::cout << "O numero "<< arr[i] << " se repete."<< std::endl;
               break;
            }
        }
    }
}