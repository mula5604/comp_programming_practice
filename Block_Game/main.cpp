#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>


int letter_count(char letter,std::string word){
    int c{};
    for (int i{};i < word.size();i++){
        if (word[i] == letter){
            c++;
        }
    }
    return c;
}




int main(){

    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    std::map<char, int> mp;

    for (int i{}; i < 26; i++) {
        mp['a' + i] = 0;
    }

    int N{};
    std::string one{};
    std::string two{};

    std::cin>>N;

    for (int i{}; i < N; i++) {
        std::cin >> one >> two;

        for (int j{}; j < 26; j++) {
            char letter = 'a' + j;

            int count_one = letter_count(letter, one);
            int count_two = letter_count(letter, two);

            mp[letter] += std::max(count_one, count_two);
        }
    }
    for (int i{}; i < 26; i++) {
        std::cout << mp['a' + i] << "\n";
    }


    return 0;
}
