#include <iostream>
#include <vector>
using namespace std;

int totalOccurrences(int arr[], int size, int key)
{
    int left = 0, right = size - 1;
    int mid = left + (right - left) / 2;

    int first = -1, last = -1;

    while (left <= right)
    {
        if (key == arr[mid])
        {

            first = mid;
            right = mid - 1;
        }
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }

        mid = left + (right - left) / 2;
    }

    if (first == -1)
    {
        return 0;
    }

    left = 0, right = size - 1;
    mid = left + (right - left) / 2;
    while (left <= right)
    {
        if (key == arr[mid])
        {

            last = mid;
            left = mid + 1;
        }
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }

        mid = left + (right - left) / 2;
    }

    return last - first + 1;
}

int main()
{
    int arr[] = {0, 1, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, 8};

    int occ = totalOccurrences(arr, sizeof(arr), 8);

    cout << "The total occurrences of key " << 8 << " is " << occ << ".";

    return 0;
}