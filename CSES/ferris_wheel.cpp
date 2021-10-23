#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1e9+7

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,x;
    cin>>n>>x;
    int children[n];
    for(int i=0;i<n;i++){
        cin>>children[i];
    }
    sort(children,children+n);
    int start=0,end=n-1;
    int gondolaCount=0;
    if(n%2!=0){
        gondolaCount++;
        end=n-2;
    }
    while(start<=end){
        if(start==end){
            gondolaCount++;
            break;
        }
        if(children[end]+children[start]<=x){
            start++;
            end--;
            gondolaCount++;
            continue;
        }
        if(children[end]+children[start]>x){
            gondolaCount++;
            end--;
            continue;
        }
    }
    cout<<gondolaCount<<endl;
}