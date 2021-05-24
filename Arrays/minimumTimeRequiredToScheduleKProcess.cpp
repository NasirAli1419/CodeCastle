//link for problem ->  https://www.geeksforgeeks.org/minimum-time-required-to-schedule-k-processes/

#include<bits/stdc++.h>
using namespace std;

int minTime(int arr[],int k,int n){

    int max_ability = arr[0];
    for(int i=1;i<n;i++){
        max_ability=max(max_ability,arr[i]);
    }
    int temp[max_ability+1];
    memset(temp,0,max_ability+1);
    int count =0;
    for(int i=0;i<n;i++){
        temp[arr[i]]++;
    }
    for(int i=max_ability;i>=0;i--){
        if(temp[i]!=0){
            if(temp[i]*i<k){
                k-=(i*temp[i]);
                temp[i/2]+=temp[i];
                count+=temp[i];

                if(k<=0){
                    return count;
                }

            }
            else{

                if(k%i==0){
                    count+=(k/i);
                }
                else{
                    count+=(k/i);
                }

                return count;

            }
        }
    }

return -1;
}

int main(){

    int arr[]={3,1,7,2,4};
    int n = 5;
    int k=15;
    cout<<minTime(arr,k,n);

}