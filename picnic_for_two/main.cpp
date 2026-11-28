#include <iostream>
#include <unordered_map>


int main(){

    long long notest{};
    std::cin>>notest;

    for (int t{};t<notest;++t){
        long long a{};
        long long b{};
        long long l{};
        long long c{};

        std::unordered_map<int,int> v1;
        std::unordered_map<int,int> v2;

        std::cin>>l>>a>>b;

        for (int i{};i<l;++i){
            v1[(i*a)%l] += 1;
            v2[(i*b)%l] += 1;
        }

        for (int i{};i<l;++i){
            if (v1.count(i) && v2.count(i)){
                c++;
            }
        }

        std::cout<<c<<'\n';


    }


    return 0;
}
