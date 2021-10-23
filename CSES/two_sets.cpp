#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll getSum(int n){
    ll sum = 0;
    for(ll i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    ll n;
    cin>>n;
    ll sum = getSum(n);
    if(sum%2!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        ll half = sum/2;
        unordered_map<ll,ll> set1;
        unordered_map<ll,ll> set2;
        ll temp=n;
        set1[n]++;
        for(ll i=n-1;i>=1;i--){
            if(i+temp<=half){
                temp=temp+i;
                set1[i]++;
            }
        }
        for(ll i=1;i<=n;i++){
            if(set1.find(i)==set1.end()){
                set2[i]++;
            }
        }
        cout<<"YES"<<endl<<set1.size()<<endl;
        for (auto x : set1) {
            cout << x.first << " ";
        }
        cout<<endl<<set2.size()<<endl;
        for (auto x : set2) {
            cout << x.first << " ";
        }
    }


}