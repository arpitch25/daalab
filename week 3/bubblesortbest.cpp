#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;//because it is already sorted
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}//bubble sort but time complexity is o(n). best case