#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    std::vector<int>::iterator first = nums.begin();
    std::vector<int>::iterator second = nums.begin();
    int count = 0;
    while(first != nums.end() && second != nums.end()){
        if(*first >= *second){
            ++second;
        } else {
            ++first;
            std::swap(*first, *second);
            ++count;
        }
    }
    return count + 1;
}

int main() {
    std::vector<int> data = {0,0,1,1,1,2,2,3,3,4,7,7,7,7,7,9,9,9,9,10,10,10,10,10,11,11,22,22,22,22};
    for(auto i = 0, size = removeDuplicates(data); i < size; ++i){
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}