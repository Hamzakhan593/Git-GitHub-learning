#include <iostream>
using namespace std;

/*void merge(int array[], int leftIndex, int midIndex, int rightIndex){
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
 }*/

void merge(int arr[], int leftIndex, int midIndex, int rightIndex){
    int l = leftIndex;
    int r = midIndex + 1;
    int tempIndex = leftIndex;
    int temp[rightIndex+1];

    while(l <= midIndex && r <= rightIndex){
        if(arr[l] < arr[r]){
            temp[tempIndex] = arr[l];
            tempIndex++;
            l++;
        }
        else{
            temp[tempIndex] = arr[r];
            tempIndex++;
            r++;
        }
    }
    while(l <= midIndex){
        temp[tempIndex] = arr[l];
        tempIndex++;
        l++;
    }
    while(r <= rightIndex){
        temp[tempIndex] = arr[r];
        tempIndex++;
        r++;
    }

    for(int s = leftIndex; s < rightIndex+1; s++){
        arr[s] = temp[s];
    }
}

void mergeSort(int arr[], int leftIndex, int rightIndex){
    if(leftIndex < rightIndex){
    int midIndex =  (leftIndex + rightIndex)/2;
    mergeSort(arr,leftIndex,midIndex);
    mergeSort(arr,midIndex+1,rightIndex);
    merge(arr, leftIndex, midIndex, rightIndex);
}
}

int main(){
    int myArray[] = {1, 3, 7, 8, 2, 4,  5, 6};
    int size = sizeof(myArray) / sizeof(int);
    int leftIndex = 0;
    int rightIndex = size - 1;
    mergeSort(myArray, leftIndex, rightIndex);
    for(auto value : myArray){
        cout << value << " ";
    }

    return 0;
}