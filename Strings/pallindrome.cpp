//link for problem ->  https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string s){
    for(int i=0,j=s.length()-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}


int main() {
    string s;
    cin >> s;
    cout << isPallindrome(s);
}