#include <iostream>
#include <vector>
#include <algorithm>


int main(){

    long long notest{};
    std::cin>>notest;

    for (int t{};t<notest;++t){
        long long k{};
        long long n{};
        long long p{};
        long long sum{};

        std::cin>>n>>k>>p;
        std::vector<int> a(n);

        for (int i{};i<n;++i){
            std::cin>>a[i];
            sum+= a[i];
        }

        std::sort(a.begin(),a.end());

        long long best = sum;
        long long rest = sum;
        for (long long md=1;md<=n/k;++md){
            for (long long i=(md-1)*k;i<md*k;++i){
                rest -= a[i];
            }

            long long wd = rest + md*p;
            best = std::max(best,wd);
        }

        std::cout<<best<<"\n";


    }

    return 0;
}
