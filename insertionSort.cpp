#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertionSort(vector<int>& Isort){
    for(int i = 1; i < Isort.size(); i++){
        int temp = Isort[i];
        int j = i - 1;
// j > -1 if we dont put this condition the code will also work
        while(j > -1 && temp < Isort[j]){
            // Isort[j+1] = Isort[j];
            // Isort[j] = temp;
            // j--;
            swap(Isort[i], Isort[j]);
            j--;
        }
    }
}

int main(){
vector<int> v = {2, 1, 4, 3, 5, 6};
insertionSort(v);

for(int i = 0; i < v.size(); i++){
    cout << v[i] <<" ";
}
}