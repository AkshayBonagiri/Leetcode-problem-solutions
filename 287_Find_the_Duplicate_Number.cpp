#include <iostream>
#include <vector>

int duplicate(std::vector<int> &arr){
    int size = arr.size();  
    int ans = -1;
    std::vector<int> counter_arr(size, 0);

    for(int i = 0 ; i < size ; i++){
        int current_element = arr[i];
        counter_arr[current_element - 1]++;
    }

    for(int i = 0 ; i < size ; i++){
        if(counter_arr[i] > 1){
            ans = i + 1;
        }
    }
    return ans;
}

int main(){
    std::vector<int> arr =  {3,1,3,4,2};

    std::cout << "The duplicate element: " << duplicate(arr) << std::endl;

    return 0;
}