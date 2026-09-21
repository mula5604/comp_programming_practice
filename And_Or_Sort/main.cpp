#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int t{};
    std::cin >> t;

    for (int i{}; i < t; i++){
        int n{};
        std::string s{};

        std::cin >> n;
        std::cin >> s;

        int count1{};
        int count2{};

        bool found_one{};

        for (int j{}; j < n; j++){
            if (s[j] == '1'){
                found_one = true;
            }
            else if (found_one){
                count1++;
            }
        }

        bool found_zero{};

        for (int j{n - 1}; j >= 0; j--){
            if (s[j] == '0'){
                count2++;
                found_zero = true;
            }
            else if (found_zero){
                count2++;
            }
        }

        std::cout << std::min(count1, count2) << '\n';
    }
}
