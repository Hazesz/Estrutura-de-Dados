#include <iostream>

int main(){
    int mA[2][2] = {1,1,1,1}, mB[2][2] = {1,1,1,1}, mC[2][2] = {0};

    for(int i = 0; i < 2; i++){
        for(int c = 0; c < 2; c++){
            mC[i][c] = mA[i][c] + mB[i][c];
        }
    }

    for(int i = 0; i < 2; i++){
        std::cout << std::endl;
        for(int c = 0; c < 2; c++){
            std::cout << " " << mC[i][c];
        }
    }
}