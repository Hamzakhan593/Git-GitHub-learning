#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int>& sort){
    int n = sort.size();
    for(int i = 0; i < sort.size(); i++){

        for(int j = 0; j < sort.size() - 2; j++){

            if(sort[j] > sort[j+1]){
                swap(sort[j], sort[j+1]);
            }
        }
    }
}
void print(vector<int>& v){

for(int i = 0; i < v.size(); i++){
    cout << v[i] <<" ";
}
}
int main(){
vector<int> v = {28, 6, 4, 2, 24};
bubbleSort(v);
print(v);
    return 0;
}