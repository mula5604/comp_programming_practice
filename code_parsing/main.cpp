#include <iostream>
#include <string>
#include <cmath>

int main(){
    std::string s{};
    std::cin>>s;

    long long x_count{};
    long long y_count{};

    long long n = s.size();

    for (int i{};i<n;++i){
        if (s[i] == 'x'){
            x_count++;
        }
        else {
            y_count++;
        }
    }
    if (x_count > y_count){
        std::cout<<std::string(abs(x_count - y_count), 'x');
    }
    else{
        std::cout<<std::string(abs(x_count - y_count), 'y');
    }


    return 0;
}
