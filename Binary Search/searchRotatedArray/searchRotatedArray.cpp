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

int searchRotatedArray(int arr[], int size, int key)
{
    int pivot = findPivot(arr, size);

    int s, e;
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        s = pivot, e = size - 1;
    }
    else
    {
        s = 0, e = pivot - 1;
    }

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {8, 10, 17, 1, 2, 3, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << searchRotatedArray(arr, size, 7) << endl;

    return 0;
}