#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int l = s.length();
    unordered_map<char,int> map;
    for(int i=0;i<s.length();i++){
        map[s[i]]++;
    }
    string fHalf ="";
    string sHalf ="";
    string answer="";
    sort(s.begin(),s.end());
    int oddCount = 0;
    char odd;
    for(auto x : map){
        if(x.second%2!=0){
            oddCount++;
            odd=x.first;
        }
    }
    if(l%2==0 && oddCount==0){
        for(auto x : map){
            int len = x.second;
            for(int i=0;i<len/2;i++){
                fHalf+=x.first;
                sHalf+=x.first;
            }
        }
        std::reverse(sHalf.begin(), sHalf.end());
        answer= fHalf + sHalf;
        cout<<answer<<endl;
        return 0;
    }

    if(l%2==0 && oddCount>0){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    if(l%2!=0){
        if(oddCount>1){
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
        else{
            int oddFreq;
            for(auto x : map){
                if(x.second%2!=0){
                    oddFreq=x.second;
                    continue;
                }
                int len = x.second;
                for(int i=0;i<len/2;i++){
                    fHalf+=x.first;
                    sHalf+=x.first;
                }
            }
            std::reverse(sHalf.begin(), sHalf.end());
            answer+=fHalf;
            for(int i=0;i<oddFreq;i++){
                answer+=odd;
            }
            answer+=sHalf;
            cout<<answer<<endl;
            return 0;
        }
    }

}
