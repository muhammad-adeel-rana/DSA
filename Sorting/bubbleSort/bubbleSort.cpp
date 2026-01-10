#include<iostream>
using namespace std;

void sort(int arr[], int len){
    // int itr = 0;
    for (int i=0; i<len - 1; i++){
        bool swapped = false;
        for (int j=0; j < len - 1 - i; j++){
            if (arr[j] > arr [j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        // itr++;
        // cout << itr << endl;
        if (!swapped){
            break;
        }
    }
}

void printArr(int arr[], int len){
    for (int i=0; i < len; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    // int arr[] = {46, 10, 14, 35, 23, 4, 1};
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 10, 9, 8};
    sort(arr, size(arr));   
    printArr(arr, size(arr));
    return 0;
}