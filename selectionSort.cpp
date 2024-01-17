#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>& Ssort){
    //8 6 7 2 0 1
    for(int i = 0; i < Ssort.size(); i++){
        int minindex = i;
        for(int j = i+1; j < Ssort.size(); j++){
           if(Ssort[j] < Ssort[minindex]){
            minindex = j;
           }
         }
         if(minindex != i){
            swap(Ssort[minindex], Ssort[i]);
         }
        }
    }

int main(){
    vector<int> v = {8, 6, 7, 2, 0, 1};
    selectionSort(v);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    return 0;
}
