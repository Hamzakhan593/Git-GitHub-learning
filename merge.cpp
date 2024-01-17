#include <iostream>
using namespace std;

void merge(int array[], int leftIndex, int midIndex, int rightIndex){
    int leftArraySize = midIndex - leftIndex + 1;
    int rightArraySize = rightIndex - midIndex;

    int leftArray[leftArraySize];
    int rightArray[rightArraySize];

    for(int i = 0; i < leftArraySize; i++)
        leftArray[i] = array[leftIndex + i];
    for(int j = 0; j < rightArraySize; j++)
        rightArray[j] = array[midIndex + 1 + j];   

int index = leftIndex;
int l = 0;
int r = 0;
while(l < leftArraySize && r < rightArraySize){
    if(leftArray[l] <= rightArray[r]){
        array[index] = leftArray[l];
        index++;
        l++;
    }
        else{
            array[index] = rightArray[r];
            index++;
            r++;
        }
}
while(l < leftArraySize){
    array[index] = leftArray[l];
    index++;
    l++;
}

while(r < rightArraySize){
    array[index] = rightArray[r];
    index++;
    r++;
}

}


int main(){
    int myArray[] = {1, 3, 7, 8, 2, 4,  5, 6};
    int size = sizeof(myArray) / sizeof(int);
    int leftIndex = 0;
    int rightIndex = size - 1;
    int midIndex = leftIndex + (rightIndex - leftIndex) / 2;

    merge(myArray, leftIndex, midIndex, rightIndex);

    for(auto value : myArray){
        cout << value << " ";
    }

    return 0;
}