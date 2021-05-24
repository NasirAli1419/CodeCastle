//link for problem ->  https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/

#include<bits/stdc++.h>
using namespace std;

void printMap(unordered_map<char,int> count){
    for (auto it : count) {
        if(it.second>1)
            cout << it.first << ", count = " << it.second<< "\n";
    }
}

int main(){

    string s;
    cin>>s;
    unordered_map<char,int> input;
    for(int i=0;i<s.length();i++){
    input[s[i]]++;
    }
    printMap(input);

}