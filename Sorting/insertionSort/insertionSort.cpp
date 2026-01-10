#include<iostream>
using namespace std;

void sort(int arr[], int len){
    for (int i=1; i<len; i++){
        int temp = arr[i];
        int j=i-1;
        for (; j>=0; j--){
            if (arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }

        arr[j+1] = temp;
    }
}

void printArr(int arr[], int len){
    for (int i=0; i < len; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {46, 10, 14, 35, 23, 4, 1};
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 10, 9, 8};
    sort(arr, size(arr));   
    printArr(arr, size(arr));
    return 0;
}