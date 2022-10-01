#include <iostream>
#include <vector>
namespace{
    using namespace std;
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size())
            return -1;
        if(needle.size() == 0){
            return 0;
        }
        for(auto i = 0; i < haystack.size(); ++i){
            if(haystack[i] == needle[0]){
                if(haystack.substr(i, needle.size()) == needle){
                    return i;
                }
            }
        }
        return -1;
    }
}

int main() {
    std::string str1 = "mississippi";
    std::string str2 = "issip";
    std::cout << strStr(str1, str2) << std::endl;
    return 0;
}