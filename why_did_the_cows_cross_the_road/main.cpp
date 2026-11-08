
#include <iostream>
#include <string>
#include <vector>

int main(){

    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);

    std::string s{};
    std::cin >> s;

    int c{};
    for (int i{}; i < 52; ++i){
        int temp_c{};

        for (int j{i + 1}; j < 52; ++j){
            if (s[i] == s[j]){
                for (int k{i + 1}; k < j; ++k){
                    int c_t{};
                    for (int l{i + 1}; l < j; ++l){
                        if (s[k] == s[l]){
                            ++c_t;
                        }
                    }
                    if (c_t == 1){
                        ++temp_c;
                    }
                }
                break;
            }
        }

        if (temp_c > 0){
            c += temp_c;
        }
    }

    std::cout << c / 2;

    return 0;
}
