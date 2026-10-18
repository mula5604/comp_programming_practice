#include <iostream>
#include <string>

int main(){
    std::string s1{};
    std::string s2{};

    std::cin>>s1;
    std::cin>>s2;

    if (s1[0] == 'A' && s1[1] == 'D') {
        std::cout << "Yes";
    }
    else if (s1[1] == 'A' && s1[0] == 'D') {
        std::cout << "Yes";
    }
    else if (s2[0] == 'A' && s2[1] == 'D') {
        std::cout << "Yes";
    }
    else if (s2[1] == 'A' && s2[0] == 'D') {
        std::cout << "Yes";
    }
    else if (s1[0] == 'A' && s2[0] == 'D') {
        std::cout << "Yes";
    }
    else if (s1[0] == 'D' && s2[0] == 'A') {
        std::cout << "Yes";
    }
    else if (s1[1] == 'A' && s2[1] == 'D') {
        std::cout << "Yes";
    }
    else if (s1[1] == 'D' && s2[1] == 'A') {
        std::cout << "Yes";
    }
    else {
        std::cout << "No";
    }

    return 0;
}
