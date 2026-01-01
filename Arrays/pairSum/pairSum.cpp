#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &v1, int sum)
{
    vector<vector<int>> ans;

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            if (v1[i] + v1[j] == sum)
            {
                vector<int> temp;
                temp.push_back(min(v1[i], v1[j]));
                temp.push_back(max(v1[i], v1[j]));

                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

void printPairs(vector<vector<int>> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << endl;
    }
}

int main()
{
    vector<int> v1 = {2, 5, 3, 4, 6, 1, 7, 4};
    int sum = 8;

    vector<vector<int>> pairs = pairSum(v1, sum); // Calculate pairs
    printPairs(pairs); // Call the print function

    return 0;
}