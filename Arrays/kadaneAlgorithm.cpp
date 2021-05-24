//link for problem ->  https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int max_so_far=INT_MIN;
    int max=0;

    int arr[]={-1,-2,-3,-4};
    int n=4;

    for(int i=0;i<n;i++){
        max+=arr[i];
        if(max_so_far<max){
            max_so_far=max;
        }
        if(max<0){
            max=0;
        }
    }
    cout<<max_so_far<<endl;

}

