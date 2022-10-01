#include <iostream>
#include <vector>
namespace{
    using namespace std;
    int removeElement(vector<int>& nums, int val) {
        auto first = nums.begin();
        auto second = nums.end();
        int count = 0;
        while(first < second){
            if(*first == val){
                std::swap(*first, *--second);
            } else {
                ++first;
                ++count;
            }
        }
        return count;
    }
}

int main() {
    std::vector<int> data = {0,1,2,2,3,0,4,2};
    for(auto i = 0, size = removeElement(data, 2); i < size; ++i){
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}