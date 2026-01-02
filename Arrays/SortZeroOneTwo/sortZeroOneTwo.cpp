#include <iostream>
using namespace std;

void printArray(int arr[], int size) // Pass size as a parameter
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Add newline for better formatting
}

void sortZeroOneTwo(int arr[], int size)
{
    int low = 0;
    int mid = 0;
    int high = size - 1;

    while (mid <= high) // Process until mid surpasses high
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else // arr[mid] == 2
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[] = {2, 0, 2, 1, 2, 1, 0, 0, 2, 2, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]); // Get the actual size

    sortZeroOneTwo(arr, size);
    printArray(arr, size);

    return 0;
}