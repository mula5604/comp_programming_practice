#include <iostream>
#include <string>
#include <vector>

int main(){

    int q{};
    std::string s;
    std::string t;
    std::string l{};
    std::string r{};

    std::cin>>q;
    std::cin>>s;
    std::cin>>t;



    std::vector<std::string> answers;

    for (int i{}; i < q; i++) {
        int l{}, r{};
        std::cin >> l >> r;

        std::string temp = s.substr(l, r - l + 1);

        if (temp.find(t) != std::string::npos) {
            answers.push_back("Yes");
        }
        else {
            answers.push_back("No");
        }
    }

    for (int i{}; i < q; i++) {
        std::cout << answers[i] << '\n';
    }


    return 0;
}
