#include <iostream>

int main(){
    int mA[2][2] = {2,2,2,2};
    int mB[2][2] = {2,2,2,2};
    int mR[2][2] = {0};

    for(int i = 0; i < 2; i++){
        for(int c = 0; c < 2; c++){
            for(int k = 0; k < 2; k++){
            mR[i][c] += mA[i][k] * mB[k][c];
        }
    }
}

    for(int i = 0; i < 2; i++){
        std::cout << std::endl;
        for(int c = 0; c < 2; c++){
            std::cout << " " << mR[i][c];
        }
    }

}
