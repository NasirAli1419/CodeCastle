#include<bits/stdc++.h>
using namespace std;

int getLcs(string x,string y,int n,int m){
    if(n==0||m==0){
        return 0;
    }
    if(x[n-1]==y[m-1]){
        return getLcs(x,y,n-1,m-1)+1;
    }
    return max(getLcs(x,y,n,m-1),getLcs(x,y,n-1,m));
}
int main(){
    string x;
    string y;
    cin>>x>>y;
    int lcs=getLcs(x,y,x.length(),y.length());
    cout<<lcs;
}