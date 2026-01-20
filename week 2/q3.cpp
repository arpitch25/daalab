#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main(){        wrong 
//     int t;
//     cin >> t;
//     while (t--){
//     int n, K; 
//     cin >> n >> K;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     sort(arr, arr );
//      for (int i = 0; i < n; i++)
//         cout<< arr[i]<<" ";
//     int i = 0, j = 1;
//     int count = 0;
//     while (j < n){
//         if (i == j)
//         {
//             j++;
            
//         }
//         int diff = arr[j] - arr[i];
//         if (diff == K){
//             count++;
//             i++;
//             j++;
//         }else if (diff < K)
//             j++;
//         else i++;
//     }
//     cout << count << endl;
//     return 0;
// }
// }    using hash map
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
    cin>>arr[i];}
    int diff;
    cin>>diff;
    int count=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for (auto it :mp){
        int ele =it.first;
        int freq =it.second;
        if (diff ==0){
            if(freq>1){
                count++;
            }
        }
        else if(mp.find(ele+diff)!=mp.end()){
            count++;
        }
    }
    cout<<count<<endl;
}

}