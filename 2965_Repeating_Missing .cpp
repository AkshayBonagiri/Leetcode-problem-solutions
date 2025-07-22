#include <iostream>
#include <vector>
#include <cmath>

int main(){

    std::vector<std::vector<int>> arr = {{1,3}, {2,2}};
    int size = arr.size();
    int total = size * size;
    std::vector<int> counter_arr(total, 0);
    

    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            int present_index = arr[i][j];
            counter_arr[present_index - 1]++;
        }
    }

    // for(int i = 1 ; i < 10 ; i++){
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;


    // for(int val : counter_arr){
    //     std::cout << val << " ";
    // }
    // std::cout << std::endl;

    
    for(int i = 0 ; i < total; i++){
        if(counter_arr[i] == 2){
            std::cout << i + 1 << " Is repeated twice" << std::endl;
        }

    }

    for(int i = 0 ; i < total ; i++){
        if(counter_arr[i] == 0){
            std::cout << i + 1 << " Is missing" << std::endl;
        }
    }

    return 0;
}