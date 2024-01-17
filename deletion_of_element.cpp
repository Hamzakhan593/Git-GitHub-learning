#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void deletion_of_element_in_unordered_array(vector<int>& arr, int element){
    //{1,2,3,4,5}
    int size = arr.size();    
    for(int i = 0; i < size; i++){
        if(element == arr[i]){
            swap(arr[i] , arr[size-1]);
            size--; 
        }
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {15,2,3,9,8};
    int element = 3;
    deletion_of_element_in_unordered_array(arr,element);
    return 0;
}