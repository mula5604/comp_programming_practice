#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    long long notest{};
    std::cin>>notest;

    for (int t{};t<notest;++t){
        long long n{};
        std::cin>>n;

        std::vector<long long> arr(n);
        std::vector<long long> brr(n);

        long long a_min{1000000000000000000};
        for (int i{};i<n;++i){
            std::cin>>arr[i];
            a_min = std::min(a_min,arr[i]);
        }
        long long b_min{1000000000000000000};
        for (int i{};i<n;++i){
            std::cin>>brr[i];
            b_min = std::min(b_min,brr[i]);
        }

        long long total{};
        for (int i{};i<n;++i){
            long long a_count = arr[i] - a_min;
            long long b_count = brr[i] - b_min;
            total += std::max(a_count,b_count);
        }
        std::cout<<total<<"\n";
    }


    return 0;
}
