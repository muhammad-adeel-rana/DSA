#include <iostream>
using namespace std;

void _01Sort(int arr[], int size) // Accept size as a parameter
{
    int i = 0, j = size - 1;

    while (i < j) // Use while loop correctly
    {
        while (arr[i] == 0 && i < j) // Move i right while it's 0
            i++;

        while (arr[j] == 1 && i < j) // Move j left while it's 1
            j--;

        // If i and j have not crossed, swap
        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

void printArray(int arr[], int size) // Pass size as a parameter
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Add newline for better formatting
}

int main()
{
    int arr[] = {0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size

    _01Sort(arr, size); // Pass size to the sorting function
    printArray(arr, size); // Print the sorted array

    return 0;
}