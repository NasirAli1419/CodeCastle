//link for problem ->  https://leetcode.com/problems/reverse-string/

#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    for(int i=0,j=s.length()-1;i<j;i++,j--){
        swap(s[i],s[j]);
    }
    return s;
}

int main(){

    string s;
    cin>>s;
    cout<<reverse(s);

}