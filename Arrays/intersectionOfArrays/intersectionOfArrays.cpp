#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        else
        {
            j++;
        }
    }

    return ans;
}

void printVector(vector<int> v1)
{
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> v1 = {2, 2, 2, 4, 6, 1, 7};
    vector<int> v2 = {2, 2, 4, 3, 7, 4};

    vector<int> v = findArrayIntersection(v1, v1.size(), v2, v2.size());
    printVector(v);

    return 0;
}