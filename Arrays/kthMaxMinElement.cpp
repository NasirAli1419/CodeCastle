//link for problem ->  https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1


#include<bits/stdc++.h>
using namespace std;

void kthMaxMin(int arr[],int n,int k){
    int kthMin;int kthMax;
    sort(arr,arr+n);
    kthMin=arr[arr[k-1]];
    kthMax=arr[arr[n-1-k]];
    cout<<kthMin<<" "<<kthMax;
}

int main(){

int n;
cin>>n;
int arr[n];
int k;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cin>>k;
kthMaxMin(arr,n,k);
}
