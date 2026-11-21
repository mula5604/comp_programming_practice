#include <iostream>
#include <string>


int main(){
    int n{};
    std::cin>>n;

    int n2{n};

    std::string s;
    std::cin>>s;

    for (int i{};i<n-1;++i){
        if ((s[i] == 'R' && s[i+1] == 'U') ||(s[i+1] == 'R' && s[i] == 'U')){
            n2 -= 1;
            ++i;
        }
    }
    std::cout<<n2;

    return 0;
}
