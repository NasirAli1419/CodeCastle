#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
string board[8];
int ways=0;
bool isSafe(int row,int column,int n){
    for(int i=row-1;i>=0;i--){
        if(board[i][column]=='Q'){
            return false;
        }
    }
    for(int i=row-1,j=column+1;i>=0&&j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    for(int i=row-1,j=column-1;i>=0&&j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}

void place8Queens(int row,int n){
    if(row==n){
        ways++;
        return;
    }
    for(int j=0;j<n;j++){
        if(board[row][j]!='*'&&isSafe(row,j,n)){
            board[row][j]='Q';
            place8Queens(row+1,n);
            board[row][j]='.';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for(int i=0;i<8;i++){
        cin>>board[i];
    }
    place8Queens(0,8);
    cout<<ways<<endl;
}