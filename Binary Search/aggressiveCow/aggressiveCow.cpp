    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    bool canPlace(vector<int> arr, int m, int dist)
    {
        int cowCount = 1;
        int lastPos = arr[0];

        // while (ptr <= max)
        // {
        //     cowCount++;
        //     if (cowCount == m)
        //     {
        //         return true;
        //     }
        //     ptr += dist;
        // }

        for (int i=0; i<arr.size(); i++){
            if (arr[i] >= lastPos + dist){
                cowCount++;
                if (cowCount == m){
                    return true;
                }
                lastPos = arr[i];
            }
        }

        return false;
    }

    int maxDistance(vector<int> arr, int n, int m)
    {
        sort(arr.begin(), arr.end());
        int s = 0;
        int e = arr[n-1];
        int mid = s + (e - s) / 2;

        int dist = -1;
        while (s <= e)
        {
            if (canPlace(arr, m, mid))
            {
                dist = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }

            mid = s + (e - s) / 2;
        }

        return dist;
    }

    int main()
    {
        vector<int> stalls = {10, 1, 2, 7, 5};
        int size = stalls.size();

        int cows = 3;

        cout << maxDistance(stalls, size, cows);
    }