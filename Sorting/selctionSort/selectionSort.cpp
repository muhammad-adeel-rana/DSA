#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int findMinimumIdx(int arr[], int index, int len){
    int minIdx = index;
    for (int i=index + 1; i<len; i++){
        if (arr[minIdx] > arr[i]){
            // min = arr[i];
            minIdx = i;
        }
    }

    return minIdx;
}

void sort(int arr[], int len){
    for (int i=0; i<len-1; i++){
        int min = findMinimumIdx(arr, i, len);
        swap(arr[i], arr[min]);
    }
}

void printArray(int arr[], int len){
    for(int i=0; i<len; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main(){
    int arr[] = {15, 34, 22, 8, 0, 27};
    int len = size(arr);

    sort(arr, len);
    printArray(arr, len);
}