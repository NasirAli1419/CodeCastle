//link for problem ->  https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include<bits/stdc++.h>
using namespace std;

void minMax(int arr[],int n){
    int min=INT_MAX;int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<min)min=arr[i];
        if(arr[i]>max){
        max=arr[i];}
    }
    cout<<"Min "<<min<<" Max "<<max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    minMax(arr,n);
}