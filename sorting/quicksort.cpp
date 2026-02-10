#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[e];
    int index = s - 1;

    for (int i = s; i < e; i++) {
        if (arr[i] < pivot) {
            index++;
            swap(arr[i], arr[index]);
        }
    }

    swap(arr[index + 1], arr[e]);
    return index + 1;
}

void quicksort(int arr[], int s, int e) {
    if (s >= e) return;

    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
