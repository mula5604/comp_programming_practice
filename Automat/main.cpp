#include <iostream>
#include <vector>
#include <cmath>



int main()
{
    int N{};
    int M{};
    int K{};
    int X{};
    int Y{};
    int products_bought{0};

    std::cin >> N >> M >> K;
    std::cin >> X >> Y;

    std::vector<int> A(N);
    std::vector<int> B(M);

    for (int i = 0; i < N; i++) {
        std::cin>>A[i];
    }
    for (int i = 0; i < M; i++) {
        std::cin>>B[i];
    }

    for (int i = 0; i < M; i++) {
        if (std::ceil(B[i] / static_cast<float>(K)) != 0 && Y >=(B[i] / static_cast<float>(K))){
            X += B[i] / static_cast<float>(K) * K - B[i];
            Y -= B[i] / static_cast<float>(K);
            products_bought++;
        }

    }
    for (int i = 0; i < N; i++) {
        if (std::ceil(A[i] / static_cast<float>(K)) != 0 && Y >= (A[i] / static_cast<float>(K))){
            X += A[i] / static_cast<float>(K) * K - A[i];
            Y -= A[i] / static_cast<float>(K);
            products_bought++;
        }
        else if (std::ceil(A[i] / std::ceil(static_cast<float>(X))) != 0 && X >= (A[i] / static_cast<float>(X))){
            X -= A[i] / K;
            products_bought++;
        }

    }

    std::cout<<products_bought;

    return 0;
}
