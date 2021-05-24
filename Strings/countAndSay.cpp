//link for problem ->  https://leetcode.com/problems/count-and-say/

#include<bits/stdc++.h>
using namespace std;

string countAndSay(string input){
    int count=0;
    string ans="";
    int j=0;
    int i=0;
    while(i<input.length()){
        count=0;
        for(j=i;j<input.length();j++){
            if(input[j]==input[i]){
                count++;
            }
            else{
                break;
            }
        }
        ans+=to_string(count)+input[i];
        i=j;
    }
  return ans;
}
int main(){
 int n=4;
 n--;
 string input = "1" ;
  while(n-->0) {
      input = countAndSay(input);
  }
  cout<<input<<endl;
}