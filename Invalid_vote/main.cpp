#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>


bool check(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    auto result = std::mismatch(s1.begin(), s1.end(), s2.begin());

    if (result.first == s1.end()) {
        return false;
    }

    int index = result.first - s1.begin();

    s1.erase(index, 1);
    s2.erase(index, 1);

    return s1 == s2;
}

int main(){

    int n;
    int m;

    std::cin>>n>>m;

    std::vector<std::string> s(n);
    std::vector<std::string> t(m);
    std::unordered_map<std::string, int> votes;

    for (int i{};i<n;++i){
        std::cin>>s[i];
        votes[s[i]] = 0;
    }
    for (int i{};i<m;++i){
        std::cin>>t[i];
    }

 for (int j{}; j < m; ++j) {
    std::string cur_vote = t[j];
    int count = 0;
    int candidate_index = -1;

    for (int i{}; i < n; ++i) {
        if (s[i] == cur_vote) {
            candidate_index = i;
            count = 1;
            break;
        }
    }

    if (count == 0) {
        for (int i{}; i < n; ++i) {
            if (check(s[i], cur_vote)) {
                count++;
                candidate_index = i;
            }
        }
    }

    if (count == 1) {
        votes[s[candidate_index]]++;
    }
}

for (int i{}; i < n; ++i) {
    std::cout << votes[s[i]] << "\n";
}

    return 0;
}
