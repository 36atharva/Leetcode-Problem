#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &s, vector<int> &arr, int size)
{
    while (!s.empty())
    {
        arr.push_back(s.top());
        s.pop();
    }

    reverse(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        s.push(arr[i]);
    }
}

int main()
{
    stack<int> s;
    vector<int> arr;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reverseStack(s, arr, 5);
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}