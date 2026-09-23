#include <iostream>
#include <string>
#include <algorithm>

int one_count(std::string s, int n){
    int c{};

    for (int i{}; i < n; i++){
        if (s[i] == '1'){
            c++;
        }
    }

    return c;
}

int main(){

    int t;
    std::cin>>t;

    for (int i{};i < t; i++){
        int n{};
        std::string s{};
        std::cin>>n;
        std::cin>>s;

        int c = one_count(s,n);
        if (s[0] == '1'){
            std::cout<<n-c<<"\n";
            continue;
        }

        int total_zero = n - c;
        int left_one{};
        int answer = n;

        for (int i{};i < n; i++){
            if (s[i] == '0'){
                total_zero--;
            }
            else {
                left_one++;
            }

            answer = std::min(answer,left_one + total_zero);
        }
    std::cout<<answer<<"\n";

    }

    return 0;
}


