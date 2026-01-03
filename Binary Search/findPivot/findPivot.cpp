#include <iostream>
using namespace std;

int findPivot(int arr[], int size)
{
    int left = 0, right = size - 1;
    int mid = left + (right - left) / 2;

    while (left < right)
    {
        if (arr[mid] >= arr[0])
        {
            left = mid + 1;
            // cout << left << endl;
        }
        else
        {
            right = mid;
            // cout << right << endl;
        }

        mid = left + (right - left) / 2;
    }

    return left;
}

int main()
{
    int arr[] = {8, 10, 17, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pivot = findPivot(arr, size);

    cout << pivot;

    return 0;
}