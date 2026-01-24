#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int find_min(int start, int end, int arr[]) {
    int minVal = INT_MAX;
    int index = -1;

    for (int i = start; i < end; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            index = i;
        }
    }
    return index;
}



int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = find_min(i, n, arr);

        if (minIndex != i) {
            swap(arr[minIndex], arr[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
