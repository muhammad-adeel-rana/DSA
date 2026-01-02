#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 6, 7, 9, 12, 16, 19, 21, 34};

    int index = binarySearch(arr, sizeof(arr), 12);

    cout << "The key is found on index " << index << endl;
    return 0;
}