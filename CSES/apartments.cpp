#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1e9+7

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m,k;
    cin>>n>>m>>k;
    int applicants[n];
    int apartments[m];

    for(int i=0;i<n;i++){
        cin>>applicants[i];
    }
    for(int i=0;i<m;i++){
        cin>>apartments[i];
    }
    sort(applicants,applicants+n);
    sort(apartments,apartments+m);
    int count=0;
    int i=0,j=0;
    while(i<n&&j<m){
        if(abs(applicants[i]-apartments[j])<=k){
            i++;
            j++;
            count++;
            continue;
        }
        if(applicants[i]>apartments[j]){
            j++;
        }
        else if(applicants[i]<apartments[j]){
            i++;
        }
    }
    cout<<count<<endl;
}