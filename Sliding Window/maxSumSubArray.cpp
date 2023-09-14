#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> arr, int k)
{
    int n = arr.size();

    if (k > n)
        return 0;

    int i = 0, j = 0, sum = 0, maxi = INT_MIN;
    while (j < n)
    {
        sum += arr[j++];
        if (j - i == k)
        {
            maxi = max(maxi, sum);
            sum -= arr[i++];
        }
    }
    return maxi;
}

int main()
{

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    cout << maxSum(arr, 3);

    return 0;
}