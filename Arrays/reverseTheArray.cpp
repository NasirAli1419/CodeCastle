//link for problem ->  https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);
    printArray(arr,n);
}
