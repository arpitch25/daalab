#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;

if (k <= 0 || k > n) {
        cout << "Invalid value of k";
        return 0;
    }else{


    //sort(begin(arr),end(arr));

     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

 

    int ksmall=arr[k-1];
    int klarge=arr[n-k];
    cout<<"k smallest "<<ksmall<<endl;
     cout<<"k largest "<<klarge<<endl;


}
/*or use priority queue nlogn
priority_queue<int,greater<int>>pq
for (int i=0;i<n,i++){
pq.push(arr[i]);
}
while(k--){
int ans=pq.pop();
or int ans = pq.top();
pq.pop();

}
cout <<ans;
vector int v return 0;

*/


}