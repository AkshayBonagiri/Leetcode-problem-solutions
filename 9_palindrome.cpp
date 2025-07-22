#include <iostream>
#include <vector>

int main(){
    std::vector<int> arr = {1,2,3,2,3};
    int i = 0;
    int j = arr.size() - 1;
    bool ans = true;

    while(i <= j){
        if(arr[i] == arr[j]){
            ans = true;
            i++;
            j--;
        }
        else{
            ans = false;
            break;
        }
    }
    if(ans){
        std::cout << "a palindrome" << std::endl;
    }
    else{
        std::cout << "not a palindrome" << std::endl;
    }
    
    return 0;
}