//link for problem ->  https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include<bits/stdc++.h>
using namespace std;

void modify(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<right){

        while(arr[left]<0&&left<right){
            left++;
        }
        while(arr[right]>0&&left<right){
            right--;
        }

        if(left<right){
            swap(arr[left++],arr[right--]);
        }

    }
}

int main(){

    int arr[]={-12,11,-13,-5,6,-7,5,-3,-6};
    int n=9;
    modify(arr,n);

    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
