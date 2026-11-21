#include <iostream>



int main(){

    long long notest{};
    std::cin>>notest;

    long long sum{};
    for(long long t{};t<notest;++t){
        long long num1{};
        long long num2{};
        std::cin>>num1>>num2;

        sum+= (num1+num2) * (num2-num1+1)/2;
    }
    std::cout<<sum;

    return 0;
}
