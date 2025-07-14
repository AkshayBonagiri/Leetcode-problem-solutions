#include <iostream>
#include <vector>
#include <map>


std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int,int> m;

        for(int i = 0 ; i < nums.size() ; i++){
            int first = nums[i];
            int second = target - first;
            if(m.find(second) != m.end()){
                return {m[second],i};
            }
            m[first] = i;
        }
        return {-1,-1};
}

int main(){
    std::vector<int> arr = {1,2,3,4,5};
    int target = 9;

    for(int val : twoSum(arr, target)){
        std::cout << val << " ";
    }
    std::cout << std::endl;


    return 0;
}