#include <iostream>
using std::string;

int oneOrZero(char a){
    if(a == '1') return 1;
    else if (a == '0') return 0;
}

int sumBinary(int a, int b, int prev){
    return a + b + prev;
}

string addBinary(string a, string b) {
    string result;
    
    auto itA = a.rbegin();
    auto itB = b.rbegin();
    int prev = 0;

    while(itA != a.rend() || itB != b.rend()){
        auto res = sumBinary(oneOrZero(*itA), oneOrZero(*itB), prev);

        switch (res){
        case 0:
            result.push_back('0');
            prev = 0;
            break;
        case 1:
            result.push_back('1');
            prev = 0;
            break;
        case 2:
            result.push_back('0');
            prev = 1;
            break;
        case 3:
            result.push_back('1');
            prev = 1;
            break;
        }
        ++itA;
        ++itB;
    }
    if (prev == 1){
        result.push_back(1);
    }
    return {result.rbegin(), result.rend()};
}

int main() {
    string a = "1001001";
    string b = "0110110";
    std::cout << addBinary(a, b) << std::endl;
    return 0;
}