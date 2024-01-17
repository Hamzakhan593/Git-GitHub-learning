#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& vec, int x){
    //{1,2,3,4,5,6,7,8,9,10}
    int left = 0;
    int right = vec.size() - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(x==vec[mid]){
            return mid;
        }
        else if(x < vec[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return -1;
}

int main(){
vector<int> v = {1,2,3,4,5};
int x = 6;
 cout << binarySearch(v,x) <<endl;
    return 0;
}