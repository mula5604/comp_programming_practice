#include <iostream>
#include <vector>
#include <cmath>
#include <string>


int main(){

    int N{};
    long long D{};
    long long K{};
    std::string P{};

    std::cin>>N>>D;
    std::vector<long long> X(N);
    for (int i{};i < N;i++){
        std::cin>>X[i];
    }

    for (int i{}; i < N; i++) {
        bool apart = true;

        for (int j{}; j < N; j++) {
            if (i != j && std::abs(X[i] - X[j]) < D) {
                apart = false;
                break;
            }
        }

        if (apart) {
            K++;
            P += std::to_string(i + 1) + " ";
        }
    }

    if (K == 0){
        std::cout<<0;
    }
    else{
        std::cout<<K<<"\n";
        std::cout<<P;
    }


    return 0;
}
