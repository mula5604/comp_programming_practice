#include <iostream>
#include <string>
#include <cctype>
#include <vector>

const std::string special_chars = "!@#&%$&*?";


int rule1(std::string pass){
    if (pass.length() >= 11){
        return 1;
    }
    return 0;
}

int rule2(std::string pass){

    if (std::islower(pass[0])){
        return 1;
    }
    return 0;
}

int rule3(std::string pass){
    if (std::isdigit(pass[pass.length()-1])){
        return 1;
    }
    return 0;
}
int rule4(std::string pass){
    if (special_chars.find(pass[1]) != std::string::npos || special_chars.find(pass[pass.length()-2]) != std::string::npos){
        return 1;
    }
    return 0;
}
int rule5(std::string pass){
    int flags{};
    bool lower{};
    bool upper{};
    bool special{};
    bool is_num{};

    for (int i{}; i < pass.length(); i++){
        if (std::islower(pass[i]) && !lower){
            lower = true;
            flags++;
        }
        else if (std::isdigit(pass[i]) && !is_num){
            is_num = true;
            flags++;
        }
        else if (std::isupper(pass[i]) && !upper){
            upper = true;
            flags++;
        }
        else if (special_chars.find(pass[i]) != std::string::npos && !special){
            special = true;
            flags++;
        }
        if (flags == 3){
            return 1;
        }
    }
    return 0;
}


int rule6(std::string pass){
    int count{};

    for (int i{}; i < pass.length(); i++){
        for (int j{i+1}; j < pass.length(); j++){
            if (pass[i] == pass[j]){
                count++;
                if (count >= 4){
                    return 1;
                }
            }
        }
    }
    return 0;
}


int rule7(std::string pass) {
    for (int i{}; i < pass.length()-1; i++){
        for (int j{i+2}; j < pass.length()-1; j++){
            if (pass[i] == pass[j] && pass[i+1] == pass[j+1]){
                return 1;
            }
        }
    }
    return 0;
}


void pass_strengths(std::vector<std::string> pass,int num_of_pass){
    int strength{};
    for (int i{}; i < num_of_pass; i++) {
    strength = 0;
    strength += rule1(pass[i]);
    strength += rule2(pass[i]);
    strength += rule3(pass[i]);
    strength += rule4(pass[i]);
    strength += rule5(pass[i]);
    strength += rule6(pass[i]);
    strength += rule7(pass[i]);

    std::cout<<strength<<std::endl;
    }
}

int main(){

    int num_of_pass;
    std::cin >> num_of_pass;

    std::vector<std::string> passwords(num_of_pass);

    for (int i{}; i < num_of_pass; i++) {
        std::cin >> passwords[i];
    }
    pass_strengths(passwords,num_of_pass);


    return 0;
}
