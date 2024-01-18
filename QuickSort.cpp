#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int pIndex = start;

    for(int i = start; i < end; i++){
        if(arr[i] < pivot){
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    int temp = arr[end];
    arr[end] = arr[pIndex];
    arr[pIndex] = temp;

    return pIndex;
}

void QuickSort(int arr[], int start, int end){
    if(start < end){
        int pivotIndex = partition(arr, start, end);
        QuickSort(arr, start,(pivotIndex-1)); //recursive QS call for left partition
        QuickSort(arr, (pivotIndex+1), end);  //recursive QS call for right partition
    }
}

int main(){
    int size = 0;
    cout << "Enter size of Array ";
    cin >> size;
    int myarray[size];
    cout <<"Enter "<<size<<" integers in any order: "<<endl;
    for(int i = 0; i < size; i++){
        cin >>myarray[i];
    }

    cout <<"Before sorting" <<endl;
    for(int i = 0; i < size; i++){
        cout << myarray[i] <<" ";
    }
    cout <<endl;
    QuickSort(myarray, 0, (size-1));

    cout <<"After sorting" <<endl;
    for(int i = 0; i < size; i++){
        cout << myarray[i] <<" ";
    }
    return 0;
}