#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <map>


void solution(std::vector<std::string> ranks,std::vector<std::pair<int, int>>& pairs,int n,int k){
    for (int l{};l<k;++l){
        std::string s = ranks[l];
        for (int i{};i<n;++i){
            for (int j{i+1};j<n;++j){
            std::pair<int, int> temp;
            temp.first = s[i];
            temp.second = s[j];
            pairs.push_back(temp);
            }
        }
    }
}




int main(){

    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int k{};
    int n{};

    std::cin>>k>>n;

    std::vector<std::string> ranks(k);

    for (int i{}; i < k; ++i) {
        for (int j{}; j < n; ++j) {
            int cow{};
            std::cin >> cow;
            ranks[i] += static_cast<char>('A' + cow - 1);
        }
    }

    std::vector<std::pair<int, int>> pairs;

    solution(ranks,pairs,n,k);


    std::map<std::pair<int, int>, int> freq;
    int answer{};

    for (int i{}; i < pairs.size(); ++i) {
        freq[pairs[i]]++;
    }

    for (int i{}; i < pairs.size(); ++i) {
        if (freq[pairs[i]] == k) {
            ++answer;
            freq[pairs[i]] = 0;
        }
    }

    std::cout << answer;

    return 0;
}


