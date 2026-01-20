#include <iostream>
using namespace std;

/*int main(){
    int n;
      cin >> n;
    int arr[n];
       for (int i = 0; i < n; i++){
        cin >> arr[i];    }
    int key;
    cin >> key;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)        {
            count++;
        }}

    cout << count;
    return 0;
   take 1st and last occurance then last - first occurance index + 1
}*/

int first_occ(int arr[], int n, int key)
{
    int s = 0, e = n - 1, mid = -1, ans = -1;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int last_occ(int arr[], int n, int key)
{
    int s = 0, e = n - 1, mid = -1, ans = -1;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        int fi = first_occ(arr, n, key);
        int li = last_occ(arr, n, key);
        cout << key << " " << li - fi + 1;
    }
}