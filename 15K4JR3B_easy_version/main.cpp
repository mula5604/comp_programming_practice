#include <iostream>



int main(){

    int t{};
    std::cin>>t;

    for (int i{};i<t;++i){
        long long n{};
        std::cin>>n;

        long long a{n / 2};
        long long b{n - a};

        std::cout<<b*a<<"\n";
    }

    return 0;
}
