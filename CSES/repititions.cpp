#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int max_so_far = 1;
    int current = 1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            current++;
        }
        else{
            max_so_far = max(max_so_far,current);
            current=1;
        }
    }
    max_so_far = max(max_so_far,current);
    cout<<max_so_far<<endl;
}