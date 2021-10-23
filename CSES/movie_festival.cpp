#include<bits/stdc++.h>
using namespace std;

#define ld long double
#define MOD 1e9+7
#define ln "\n"
#define ll long long

struct movies{
    int start,end;
};
bool sortMovies(movies m1,movies m2){
    return m1.end<m2.end;
}
int main(){

    int n;
    cin>>n;
    movies m[n];
    for(int i=0;i<n;i++){
        cin>>m[i].start;
        cin>>m[i].end;
    }
    sort(m,m+n, sortMovies);
    int max=0,curr=0,i=0;
    while(i<n){
        if(curr<=m[i].start){
            curr=m[i].end;
            i++;
            max++;
        }
        else{
            i++;
        }
    }
    cout<<max<<ln;
}
