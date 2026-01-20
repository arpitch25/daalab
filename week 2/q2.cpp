#include <iostream>
using namespace std;
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
        // arr i + arr j =arr k
        for (int k = n - 1; k < n; k)
        {
            int sum = arr[k];
            int i = 0, j = k - 1;
            while (i < j)
            {
                if (arr[i] + arr[j] == sum)
                {
                    cout << i << " " <<j << " " << k;
                    break;
                }
                else if (arr[i] + arr[j] < sum)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
        }
    }
}