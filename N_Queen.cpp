#include<bits/stdc++.h>
using namespace std;
bool isSafe(int row,int col,vector<string> board,int n){
    //first check upper left diagonal
    //decrease the row and column both
    int duprow=row;
    int dupcol=col;
    while(row>=0&&col>=0){
        if(board[row][col]=='Q')
            return false;
            //in case we have found any queen it is not safe to place it here
            row--;
            col--;

    }

    //second check left side
    row=duprow;
    col=dupcol;
    while(col>=0){
        if(board[row][col]=='Q')
            return false;
      col--;
    }
    //third check the lower left diagonal
    row=duprow;
    col=dupcol;
    while(row<n&&col>=0){
       if(board[row][col]=='Q')
       return false;
       row++;
       col--;
    }

    return true;
   //In case of none of the condtion is satisfied then we can place the queen in the next coloumn
}
void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n){
    //to check the possibilities of the Q with rest coloumns
    if(col==n){
        ans.push_back(board);
        return;
    }
        //here we reached at last coloumn and answer is found
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                //for the next column
                board[row][col]='.';
                //while returning back just remove it 
            }
        }
    }
int main(){
    int n=4;
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    //intializing them all with "."
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    solve(0,board,ans,n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;i<ans[0].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}