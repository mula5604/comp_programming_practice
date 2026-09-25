#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <cmath>

int main(){

    int T{};
    int n{};
    std::string a{};
    std::string b{};

    std::cin>>T;
    for (int i{};i < T; i++){
        std::cin>>n;
        std::cin>>a;
        std::cin>>b;

        if (a == b){
            std::cout<<0<<"\n";
            continue;
            }

        if (a != b && n == 2){
            std::cout<<-1<<"\n";
            continue;
        }

        std::vector<long long> a_odd{};
        std::vector<long long> a_even{};
        std::vector<long long> b_odd{};
        std::vector<long long> b_even{};
        for (int j{};j < n; j++){
            if (a[j] == '1') {
                if (j % 2 == 0) {
                    a_odd.push_back(j);
                } else {
                    a_even.push_back(j);
                }
            }

            if (b[j] == '1') {
                if (j % 2 == 0) {
                    b_odd.push_back(j);
                } else {
                    b_even.push_back(j);
                }
            }
        }
        if (a_odd.size() != b_odd.size() || a_even.size() != b_even.size()){
            std::cout<<-1<<"\n";
        }
        else {
            long long steps{};
            for (int i{};i < b_odd.size(); i++){
                steps += std::abs(a_odd[i] - b_odd[i]) / 2;
            }
            for (int i{};i < b_even.size(); i++){
                steps += std::abs(a_even[i] - b_even[i]) / 2;
            }
            std::cout<<steps<<"\n";
        }
    }



    return 0;
}
