#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void deletion_of_element_in_unordered_array(vector<int>& arr, int element){
    //{1,2,3,4,5}
    int total , size = arr.size();  
    int k = 0;  
    for(int i = 0; i < size; i++){
        if(element == arr[i]){
            // k++;
            for(int y = i; y < size; y++){
            swap(arr[y] , arr[y+1]);
        }
          size--;
        }
    }
    // cout <<total - k << endl;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {3,1,2,3,4,3,5};
    int element = 3;
    deletion_of_element_in_unordered_array(arr,element);
    return 0;
}