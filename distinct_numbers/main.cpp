#include <iostream>
#include <set>

int main(){

    long long n{};
    std::cin>>n;

    std::set<long long> x;

    for(long long i{};i<n;++i){
        long long temp{};
        std::cin>>temp;
        x.insert(temp);
    }

    std::cout<<x.size();

    return 0;
}
