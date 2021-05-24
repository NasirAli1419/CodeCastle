//link for problem ->  https://www.geeksforgeeks.org/c-program-cyclically-rotate-array-one/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int size=5;
    int end=arr[size-1];
    for(int i=size-1;i>0;i--){
     arr[i]=arr[i-1];
    }
    arr[0]=end;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}