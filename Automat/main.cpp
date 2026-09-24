#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){

    long long K{};
    int N{};
    int M{};
    long long X{};
    long long Y{};

    std::cin >> N >> M >> K;
    std::cin >> X >> Y;

    std::vector<long long> A(N);
    std::vector<long long> B(M);

    for (int i{}; i < N; i++){
        std::cin >> A[i];
    }

    for (int i{}; i < M; i++){
        std::cin >> B[i];
    }

    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());

    long long total_money = X + Y * K;

    long long dessert_cost = 0;
    int desserts = 0;

    for (int i{}; i < N; i++){
        if (dessert_cost + A[i] > total_money){
            break;
        }

        dessert_cost += A[i];
        desserts++;
    }

    long long max_products = desserts;
    long long drink_cost = 0;
    long long k_bills_used = 0;

    for (int i{}; i < M; i++){

        long long bills_needed = static_cast<long long>(std::ceil(static_cast<double>(B[i]) / K));

        if (k_bills_used + bills_needed > Y){
            break;
        }

        drink_cost += B[i];
        k_bills_used += bills_needed;

        long long money_left = total_money - drink_cost;

        while (desserts > 0 && dessert_cost > money_left){
            desserts--;
            dessert_cost -= A[desserts];
        }

        max_products = std::max(max_products,static_cast<long long>(i + 1 + desserts));
    }

    std::cout << max_products << '\n';

    return 0;
}
