#include <iostream>
#include <cmath>


int main()
{
    long long a{};
    long long b{};
    long long c{};
    long long t{};

    std::cin>>t;

    for (int i{};i < t;i++){
        std::cin>>a>>b>>c;
        if ((a >= b || (a+c) > b) && std::abs((a+c) - b) > std::abs(a-b)){
            a += c;
            std::cout<<std::abs(a-b)<<"\n";
            continue;
        }
        if (b > a && (a+c) <= b){
            std::cout<<std::abs(a-b)<<"\n";
            continue;
        }
        else{
            std::cout<<std::abs(a-b)<<"\n";
        }
    }


    return 0;
}
