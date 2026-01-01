#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }

    return ans;
}

int main()
{
    int arr[] = {2, 1, 2, 4, 1};

    cout << findUnique(arr, 5);

    return 0;
}