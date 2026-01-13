#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &v, int n, int key)
{
    int comp = 0;
    int start = 0, end = n - 1, mid = -1, ans = -1;
    while (start <= end)
    {
        comp++;
        mid = (start + end) / 2;
        if (v[mid] == key)
        {
            cout << "present" << comp;
            break;
        }
        else if (key > v[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n); // or int arr[n]
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int key;
        cin >> key;
        binary_search(v, n, key);
    }
}