/*
jump search we use linear search
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void linear_search(vector<int> &v, int start, int end, int key, int n)
{
    for (int i = start; i < min(end, n); i++)
    {
        if (v[i] == key)
        {
            cout << "present";
            return;
        }
    }
    cout << "not present";
}

void jump_search(vector<int> &v, int n, int key)
{
    end =1;
    while (end < n && v[end - 1] < key)
    {
        end=end*2;
        linear_search(v, start, end, key, n);

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
        jump_search(v, n, key);
    }
}*/

/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void linear_search(vector<int> &v, int start, int end, int key, int n)
{
    for (int i = start; i < min(end, n); i++)
    {
        if (v[i] == key)
        {
            cout << "present\n";
            return;
        }
    }
    cout << "not present\n";
}

void exponential_search(vector<int> &v, int n, int key)
{
    if (n == 0)
    {
        cout << "not present\n";
        return;
    }

    if (v[0] == key)
    {
        cout << "present\n";
        return;
    }

    int bound = 1;
    while (bound < n && v[bound] < key)
    {
        bound = bound * 2;
    }

    int start = bound / 2;
    int end = bound;

    linear_search(v, start, end, key, n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int key;
        cin >> key;

        exponential_search(v, n, key);
    }
}

*/