//link for problem ->  https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/

#include<bits/stdc++.h>
using namespace std;

void segregate(int arr[],int size){
    int left=0,right=size-1;
    while(left<right){
       while(arr[left]==0&&left<right){
           left++;
       }
       while(arr[right]==1&&left<right){
           right--;
       }
       if(left<right){
           arr[left++]=0;
           arr[right--]=1;
       }
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,0,0,1,1,0,0,0,1,1,0,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    segregate(arr,size);
    printArray(arr,size);
}