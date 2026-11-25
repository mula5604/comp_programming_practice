#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>


int main(){
    long long notest{};
    std::cin>>notest;
    for(int t{};t<notest;++t){
        long long n{};
        std::cin>>n;

        bool check{};
        std::vector<long long> p(n+1);
        for(int i{1};i<=n;++i){
            long long b{};
            std::cin>>b;

            long long q = b + n + 1 - i;

            if ((q<1)||(q>n)||(p[q])){
                check = true;
            }
            else {
                p[q] = i;
            }

        }
        if (check){
            std::cout<<"-1";
        }
        else{
            for(int i{1};i<=n;++i){
                std::cout<<p[i]<<" ";
            }
        }
        std::cout << '\n';

    }

    return 0;
}
