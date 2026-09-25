#include <iostream>
#include <string>
#include <utility>

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
            std::cout<<"YES"<<"\n";
            continue;
            }

        if (a != b && n == 2){
            std::cout<<"NO"<<"\n";
            continue;
        }

        int a_odd{};
        int a_even{};
        int b_odd{};
        int b_even{};
        for (int j{};j < n; j++){
            if (a[j] == '1') {
                if (j % 2 == 0) {
                    a_odd++;
                } else {
                    a_even++;
                }
            }

            if (b[j] == '1') {
                if (j % 2 == 0) {
                    b_odd++;
                } else {
                    b_even++;
                }
            }
        }
        if (a_odd != b_odd || a_even != b_even){
            std::cout<<"NO"<<"\n";
        }
        else {
            std::cout<<"YES"<<"\n";
        }
    }



    return 0;
}
