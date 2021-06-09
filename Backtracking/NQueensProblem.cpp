#include<bits/stdc++.h>
using namespace std;

int board[4][4];

void printBoard(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

bool isPossible(int row ,int column , int n){

    for(int i=row-1;i>=0;i--){
        if(board[i][column]==1){
            return false;
        }
    }

    for(int i=row-1,j=column-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }

    for(int i=row-1,j=column+1;i>=0 && j<n;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }

    return true;
}

void nQueenHelper(int n, int row){

    if(row==n){
        printBoard(n);
    }

    for(int j=0;j<n;j++){

        if(isPossible(row,j,n)){
            board[row][j]=1;
            nQueenHelper(n,row+1);
            board[row][j]=0;
        }


    }

    return;
}

void placeQueens(int n){

    memset(board,0,11*11*sizeof(int));

    nQueenHelper(n,0);

}


int main(){
    placeQueens(4);
}