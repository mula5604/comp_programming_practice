#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int K{};
    int N{};
    int M{};
    int X{};
    int Y{};
    int C{};

    std::cin>>N>>M>>K;
    std::cin>>X>>Y;

    std::vector<int> A(N);
    std::vector<int> B(M);

    for (int i{};i < N;i++){
        std::cin>>A[i];
    }

    for (int i{};i < M;i++){
        std::cin>>B[i];
    }

    std::sort(B.begin(),B.end());

    for (int i{};i < M;i++){
        int bills = (B[i] + K - 1) / K;

        if (Y >= bills){
            Y -= bills;
            X += bills * K - B[i];
            C++;
        }
        else{
            break;
        }
    }

    std::sort(A.begin(),A.end());

    for (int i{};i < N;i++){
        if (X >= A[i]){
            X -= A[i];
            C++;
        }
        else{
            break;
        }
    }

    std::cout<<C;

    return 0;
}
