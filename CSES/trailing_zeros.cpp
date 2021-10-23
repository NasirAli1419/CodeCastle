#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int zeros=0;

    while(n/5>0){
        zeros+=n/5;
        n=n/5;
    }
    cout<<zeros;

}