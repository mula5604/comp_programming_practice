#include <iostream>
#include <vector>
#include <numeric>

int main(){

    long long n{};
    long long q{};

    std::cin>>n>>q;

    std::vector<int> cards(n);
    std::iota(cards.begin(), cards.end(), 1);

    for (int j{}; j < q; ++j) {
        int k{};
        std::cin >> k;

        std::reverse(cards.begin(), cards.begin() + k);

        for (int i{}; i < k; ++i) {
            cards[i] *= -1;
        }
    }
    for (int i{};i<n;++i){
        std::cout<<cards[i]<<"\n";
    }


    return 0;
}
