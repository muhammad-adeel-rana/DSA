#include <iostream>
using namespace std;

long long int squareRoot(int n)
{
    int s = 0, e = n - 1;
    long long int mid = s + (e - s) / 2;
    long long int ans;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    cout << squareRoot(1000000);
    return 0;
}