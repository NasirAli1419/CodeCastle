#include<bits/stdc++.h>
using namespace std;

#define ld long double
#define MOD 1e9+7
#define ln "\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<int> songs(n);
    set<int> heard;
    for(int i=0;i<n;i++){
        cin>>songs[i];
    }
    int i=0,j=0;
    int maxLength=0;
    while(i<n&&j<n){
        while(j<n&&!heard.count(songs[j])){
            heard.insert(songs[j]);
            maxLength = max(maxLength,j-i+1);
            j++;
        }
        while(j<n && heard.count(songs[j])){
            heard.erase(songs[i]);
            i++;
        }
    }
    cout<<maxLength<<endl;
}