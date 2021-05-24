//link for problem ->  https://leetcode.com/problems/baseball-game/

#include<bits/stdc++.h>
using namespace std;

int calPoints(vector<string> ops) {

    stack<int> records;
    int sum=0;
    for(int i=0;i<ops.size();i++){

        if(ops[i]=="+"){
            int last = records.top();
            records.pop();
            int secondLast= records.top();
            records.pop();
            records.push(secondLast);
            records.push(last);
            records.push(last+secondLast);
            int s=(int)records.top();
            sum+=s;
            cout<<"Sum till now is "<<sum<<endl;
            continue;
        }
        if(ops[i]=="D") {
            int last = records.top();
            records.push(last*2);
            int s=(int)records.top();
            sum+=s;
            cout<<"Sum till now is "<<sum<<endl;
            continue;
        }
        if(ops[i]=="C") {
            int s=(int)records.top();
            sum-=s;
            records.pop();
            cout<<"Sum till now is "<<sum<<endl;
            continue;
        }
        if(ops[i][0]-'0'<65||ops[i][0]-'0'>122) {
            records.push(stoi(ops[i]));
            int s=records.top();
            sum+=s;
            continue;
        }

        }
    return sum;
}
int main(){

vector<string> ops;
ops.push_back("5");
ops.push_back("-2");
ops.push_back("4");
ops.push_back("C");
ops.push_back("D");
ops.push_back("9");
ops.push_back("+");
ops.push_back("+");
cout<<calPoints(ops);
}

