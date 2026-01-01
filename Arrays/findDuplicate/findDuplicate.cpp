#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans ^= i;
    }

    return ans;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 2};

    cout << findDuplicate(arr, 5);

    return 0;
}