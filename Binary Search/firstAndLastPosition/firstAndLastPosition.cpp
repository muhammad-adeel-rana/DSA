#include<iostream>
#include<vector>
using namespace std;

// int firstOcc(int arr[], int size, int key){
//     int left = 0, right = size -1;
//     int mid = start + (end - start)/2;

//     int first = -1 ;

//     while (left <= right){
//         if (key == arr[mid]){
            
//             first = arr[mid];
//             right = mid - 1;
//         } else if (key < arr[mid]){
//             right = mid - 1;
//         } else {
//             left = mid + 1;
//         }

//         mid = start + (end - start)/2
//     }

//     return first;
// }


// int lastOcc(int arr[], int size, int key){
//     int left = 0, right = size -1;
//     int mid = start + (end - start)/2;

//     int last = -1;

//     while (left <= right){
//         if (key == arr[mid]){
            
//             first = arr[mid];
//             right = mid - 1;
//         } else if (key < arr[mid]){
//             right = mid - 1;
//         } else {
//             left = mid + 1;
//         }

//         mid = start + (end - start)/2
//     }

//     return last;
// }

vector<int> firstAndLastPosition(int arr[], int size, int key){
    int left = 0, right = size -1;
    int mid = left + (right - left)/2;

    int first = -1 , last = -1;

    while (left <= right){
        if (key == arr[mid]){
            
            first = mid;
            right = mid - 1;
        } else if (key < arr[mid]){
            right = mid - 1;
        } else {
            left = mid + 1;
        }

        mid = left + (right - left)/2;

    }

    vector<int> occurances;
    occurances.push_back(first);

    left = 0, right = size -1;
    mid = left + (right - left)/2;
    while (left <= right){
        if (key == arr[mid]){
            
            last = mid;
            left = mid + 1;
        } else if (key < arr[mid]){
            right = mid - 1;
        } else {
            left = mid + 1;
        }

        mid = left + (right - left)/2;
    }
    occurances.push_back(last);

    return occurances;

}

int main(){
    int arr[] = {0, 1, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, 8};

    vector<int> occ = firstAndLastPosition(arr, sizeof(arr), 8);

    cout << "The first occurrence of key " << 8 << " is " << occ[0] << ", and last occurrence is " << occ[1];

    return 0;
}